//Gps class will handle the current location and distance traveled
#pragma once

#ifndef GPS_H
#define GPS_H

#include <iostream>
using namespace std;


class GPS {
private:
	Location currentLocation;
	Location destination;
	float walkDistance;
	bool distanceReached;

public:
	void setCurrentLocation() 
	{
		currentLocation.findAddress();
	}
	void setDistance() 
	{
		destination.findAddress();
	}
	void setWalkDistance() 
	{
		//Calculate the distance between the Destination 
		//and the currentLocation using latitude and longitude

		//Set the WalkDistance to the value

	}
	float getWalkDistance()
	{

		return walkDistance;
	}

	
	void setDistanceReached(int signal)
	{
		if (signal == 1)
		{
			distanceReached = true;
		}
		else
		{
			distanceReached = false;
		}


	}
	bool getDistanceReached()
	{

		return distanceReached;
	}

};

#endif // !GPS_H
