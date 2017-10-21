# 525. Mini Uber

Difficulty: Medium

http://lintcode.com/en/problem/mini-uber/

Support two basic uber features:

1. Drivers report their locations.
2. Rider request a uber, return a matched driver.

When rider request a uber, match a closest available driver with him, then mark the driver not available.

When next time this matched driver report his location, return with the rider's information.

You can implement it with the following instructions:

1. report(driver_id, lat, lng)  
1\) return null if no matched rider.  
2\) return matched trip information.  

2. request(rider_id, lat, lng)  
1\) create a trip with rider's information.  
2\) find a closest driver, mark this driver not available.  
3\) fill driver_id into this trip.  
4\) return trip  

This is the definition of Trip in Java:
```
public class Trip {
    public int id; // trip's id, primary key
    public int driver_id, rider_id; // foreign key
    public double lat, lng; // pick up location
}
```

**Example**  
```
report(1, 36.1344, 77.5672) // return null
report(2, 45.1344, 76.5672) // return null
request(2, 39.1344, 76.5672) // return a trip, LOG(INFO): Trip(rider_id: 2, driver_id: 1, lat: 39.1344, lng: 76.5672)
report(1, 38.1344, 75.5672) // return a trip, LOG(INFO): Trip(rider_id: 2, driver_id: 1, lat: 39.1344, lng: 76.5672)
report(2, 45.1344, 76.5672) // return null
```
