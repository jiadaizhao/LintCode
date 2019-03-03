// enum type for Vehicle
enum class VehicleSize {
    Motorcycle,
    Compact,
    Large
};

class Vehicle {
    // Write your code here
public:
    virtual VehicleSize size() {}
    virtual int spotNum() {}
};

class Bus: public Vehicle {
    // Write your code here
public:
    VehicleSize size() {return VehicleSize::Large;}
    int spotNum() {return 5;}
};

class Car: public Vehicle {
    // Write your code here
    VehicleSize size() {return VehicleSize::Compact;}
    int spotNum() {return 1;}
};

class Motorcycle: public Vehicle {
    // Write your code here
    VehicleSize size() {return VehicleSize::Motorcycle;}
    int spotNum() {return 1;}
};

class Level {
    // Write your code here
public:
    Level(int num_rows, int spots_per_row) {
        spots.resize(num_rows);
        for (int i = 0; i < num_rows; ++i) {
            spots[i].resize(spots_per_row, nullptr);
        }
        this->num_rows = num_rows;
        this->spots_per_row = spots_per_row;
    }
    
    bool parkVehicle(Vehicle* vehicle) {
        int start = 0;
        if (vehicle->size() == VehicleSize::Compact) {
            start = spots_per_row / 4;
        }
        else if (vehicle->size() == VehicleSize::Large) {
            start = spots_per_row / 4 * 3;
        }
        for (int row = 0; row < num_rows; ++row) {
            for (int col = start; col < spots_per_row - vehicle->spotNum() + 1; ++col) {
                bool canPark = true;
                for (int j = col; j < col + vehicle->spotNum(); ++j) {
                    if (spots[row][j]) {
                        canPark = false;
                        break;
                    }
                }
                
                if (canPark) {
                    for (int j = col; j < col + vehicle->spotNum(); ++j) {
                        spots[row][j] = vehicle;
                    }
                    return true;
                }
            }
        }
        
        return false;
    }
    
    void unParkVehicle(Vehicle* vehicle) {
        bool found = false;
        for (int row = 0; row < num_rows; ++row) {
            int col;
            for (col = 0; col < spots_per_row; ++col) {
                if (spots[row][col] == vehicle) {
                    break;
                }
            }
            
            if (col < spots_per_row) {
                for (int j = col; j < col + vehicle->spotNum(); ++j) {
                    spots[row][j] = nullptr;
                }
                
                return;
            }
        }
    }
private:
    vector<vector<Vehicle*>> spots;
    int num_rows;
    int spots_per_row;
};

class ParkingLot {
public:
    // @param n number of leves
    // @param num_rows  each level has num_rows rows of spots
    // @param spots_per_row each row has spots_per_row spots
    ParkingLot(int n, int num_rows, int spots_per_row) {
        // Write your code here
        for (int i = 0; i < n; ++i) {
            levels.push_back(new Level(num_rows, spots_per_row));
        }
    }

    // Park the vehicle in a spot (or multiple spots)
    // Return false if failed
    bool parkVehicle(Vehicle* vehicle) {
        // Write your code here
        for (int i = 0; i < levels.size(); ++i) {
            if (levels[i]->parkVehicle(vehicle)) {
                vehicle_to_levels[vehicle] = levels[i];
                return true;
            }
        }
        
        return false;
    }

    // unPark the vehicle
    void unParkVehicle(Vehicle* vehicle) {
        // Write your code here
        Level* level = vehicle_to_levels[vehicle];
        if (level) {
            level->unParkVehicle(vehicle);
        }
    }
    
private:
    vector<Level*> levels;
    unordered_map<Vehicle*, Level*> vehicle_to_levels;
};
