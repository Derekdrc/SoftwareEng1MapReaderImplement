//Camera class will handle all fucntions associated with utlizing the camera to identify hazards and other obstacles
#pragma once

#ifndef CAMERA_H
#define CAMERA_H

#include <iostream>
using namespace std;


class Camera {
private:
	bool onSidewalk, isLight, carNear, isSign, dogRestroom;

public:
	void setOnSidewalk(int signal) 
	{
		if (signal == 1)
		{
			onSidewalk = true;
		}
		else
		{
			onSidewalk = false;
		}
	}
	bool getOnSidewalk() 
	{

		return onSidewalk;
	}
	void setIsLight(int signal) 
	{
		if (signal == 1)
		{
			isLight = true;
		}
		else
		{
			isLight = false;
		}
	}

	bool getisLight() {

		return isLight;
	}

	void setCarNear (int signal) 
	{
		if (signal == 1)
		{
			carNear = true;
		}
		else
		{
			carNear = false;
		}
	}
	bool getCarNear() 
	{

		return carNear;
	}
	void setIsSign(int signal) 
	{
		if (signal == 1)
		{
			isSign = true;
		}
		else
		{
			isSign = false;
		}
		
	}
	bool getIsSign() {
		
		return isSign;
	}
	void setDogUsingBathroom(int signal) 
	{
		if (signal == 1)
		{
			dogRestroom = true;
		}
		else
		{
			dogRestroom = false;
		}
	}
	bool getDogUsingBathroom() {

		return dogRestroom;
	}
};

#endif // !CAMERA_H
