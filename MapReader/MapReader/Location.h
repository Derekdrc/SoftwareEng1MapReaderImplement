//Location class will handle finding the users current location and assist in navigation
#pragma once

#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>
using namespace std;


class Location: protected Map 
{
private:
	string address, street, zipCode, city, state;
	
public:
	void findAddress() 
	{
		computePosition();

		//Use the longitude and latitude to find the street,
		//zipCode, state, and city

		//Sets the street, zipCode, state, city to a value


		address = street + "," + zipCode + "," + city + "," + state;

	}
	string getAddress() {

		return address;
	}
};

#endif // !LOCATION_H
