//Map class will get user gps location
#pragma once

#ifndef MAP_H
#define MAP_H

#include <iostream>
//#include <QGeoAddress>
//#include <QGeoCoordinate>
//#include <QGeoLocation>
using namespace std;


class Map {
private:
	double longitude, latitude;

public:
	void computePosition() {

	}
	int getLongitude() {

		return longitude;
	}
	int getLatitude() {

		return latitude;
	}
};

#endif // !MAP_H
