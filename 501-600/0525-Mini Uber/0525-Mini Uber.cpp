/**
 * Definition of Trip:
 * class Trip {
 * public:
 *     int id; // trip's id, primary key
 *     int driver_id, rider_id; // foreign key
 *     double lat, lng; // pick up location
 *     Trip(int rider, double lat, double lng);
 * }
 * Definition of Helper
 * class Helper {
 * public:
 *     static get_distance(double lat1, double lng1,
 *                         double lat2, double lng2) {
 *         // return distance between (lat1, lng1) and (lat2, lng2)
 *     }
 * };
 */
struct Location {
    double lat;
    double lng;
    Location() {}
    Location(double la, double ln): lat(la), lng(ln) {}
};

class MiniUber {
public:
    MiniUber() {
        // initialize your data structure here.
    }

    // @param driver_id an integer
    // @param lat, lng driver's location
    // return matched trip information if there have matched rider or NULL
    Trip* report(int driver_id, double lat, double lng) {
        // Write your code here
        if (busyDrivers.find(driver_id) != busyDrivers.end())
        {
            return busyDrivers[driver_id];
        }
        
        freeDrivers[driver_id] = Location(lat, lng);
        
        return nullptr;
    }

    // @param rider_id an integer
    // @param lat, lng rider's location
    // return a trip
    Trip* request(int rider_id, double lat, double lng) {
        // Write your code here
        Trip* trip = new Trip(rider_id, lat, lng);
        int driver_id = -1;
        double minDistance = -1;
        for (auto it = freeDrivers.begin(); it != freeDrivers.end(); ++it)
        {
            double distance = Helper::get_distance(lat, lng, it->second.lat, it->second.lng);
            if (minDistance < 0 ||  distance < minDistance)
            {
                minDistance = distance;
                driver_id = it->first;
            }
        }
        
        if (driver_id != -1)
        {
            freeDrivers.erase(driver_id);
            busyDrivers[driver_id] = trip;
        }
        
        trip->driver_id = driver_id;
        return trip;
    }
    
private:
    unordered_map<int, Location> freeDrivers;
    unordered_map<int, Trip*> busyDrivers;
};
