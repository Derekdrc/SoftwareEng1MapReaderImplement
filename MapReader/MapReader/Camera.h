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
	void setOnSidewalk() {

	}
	bool getOnSidewalk() {

		return;
	}
	void setIsLight() {

	}
	void setCarNear() {

	}
	bool getCarNear() {

		return;
	}
	void setIsSign() {
		
		return;
	}
	bool getIsSign() {
		
		return;
	}
	void setDogUsingBathroom() {

	}
	bool getDogUsingBathroom() {

		return;
	}
};

#endif // !CAMERA_H
