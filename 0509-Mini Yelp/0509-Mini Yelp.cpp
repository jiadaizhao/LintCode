/**
 * Definition of Location:
 * class Location {
 * public:
 *     double latitude, longitude;
 *     static Location create(double lati, double longi) {
 *         // This will create a new location object
 *     }
 * };
 * Definition of Restaurant
 * class Restaurant {
 * public:
 *     int id;
 *     string name;
 *     Location location;
 *     static Restaurant create(string &name, Location &location) {
 *         // This will create a new restaurant object,
 *         // and auto fill id
 *     }
 * };
 * Definition of Helper
 * class Helper {
 * public:
 *     static get_distance(Location &location1, Location &location2) {
 *         // return distance between location1 and location2.
 *     }
 * };
 * class GeoHash {
 * public:
 *     static string encode(Location &location) {
 *         // return convert location to a GeoHash string
 *     }
 *     static Location decode(string &hashcode) {
 *          // return convert a GeoHash string to location
 *     }
 * };
 */
class MiniYelp {
public:
    MiniYelp() {
        // initialize your data structure here.
    }

    // @param name a string
    // @param location a Location
    // @return an integer, restaurant's id
    int addRestaurant(string name, Location &location) {
        // Write your code here
        Restaurant restaurant = Restaurant::create(name, location);
        string s = GeoHash::encode(location);
        ids[restaurant.id] = s;
        restaurants[s] = restaurant;
        return restaurant.id;
    }

    // @param restaurant_id an integer
    void removeRestaurant(int restaurant_id) {
        // Write your code here
        if (ids.find(restaurant_id) != ids.end()) {
            restaurants.erase(ids[restaurant_id]);
            ids.erase(restaurant_id);
        }
    }

    // @param location a Location
    // @param k an integer, distance smaller than k miles
    // @return a list of restaurant's name and sort by 
    // distance from near to far.
    vector<string> neighbors(Location &location, double k) {
        // Write your code here
        int len = getLength(k);
        string hashcode = GeoHash::encode(location);
        hashcode = hashcode.substr(0, len);
        
        vector<Node> result;
        for (auto it = restaurants.lower_bound(hashcode); it != restaurants.end(); ++it) {
            string code = (it->first).substr(0, len);
            if (code != hashcode) {
                break;
            }
            
            Restaurant restaurant = it->second;
            double distance = Helper::get_distance(location, restaurant.location);
            if (distance <= k) {
                result.emplace_back(restaurant.name, distance);
            }
        }
        
        sort(result.begin(), result.end());
        vector<string> res;
        for (auto node : result) {
            res.push_back(node.name);
        }
        
        return res;
    }

private:
    map<string, Restaurant> restaurants;
    unordered_map<int, string> ids;
    struct Node {
        string name;
        double distance;
        Node(string n, double d): name(n), distance(d) {}
        bool operator < (const Node& node) const {
            return distance < node.distance;
        }
    };
    int getLength(double k) {
        vector<double> ERROR = {2500, 630, 78, 20, 2.4, 0.61, 0.076, 0.01911, 0.00478, 0.0005971, 0.0001492, 0.0000186};
        for (int i = 0; i < ERROR.size(); ++i) {
            if (k  > ERROR[i]) {
                return i;
            }
        }
        return ERROR.size();
    }

};
