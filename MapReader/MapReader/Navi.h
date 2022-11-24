//Navi class will handle all navigation 
#pragma once

#ifndef NAVI_H
#define NAVI_H

#include <iostream>
using namespace std;


class Navigation: protected Voice, Camera, GPS
{
private:
	Camera frontCam;
	Camera leftCam;
	Camera RightCam;

public:
	void askAboutAction() 
	{
		if (confirmPhraseSaid() == true)
		{
			//Asks what the user wants

			setPhraseSaid(0);

			readVoiceCommand();
		}
	}

	void askAboutWalkInfo() 
	{
		//if the person asks to set the destination
		{
			setCurrentLocation();

			setDistance();
		}
		if (getWalkDistance() == 0)
		{
			//Tell the person they have arrived to their destination

			setDistanceReached(0);

		}
		if (getOnSidewalk() == true)
		{
			//Tell the person about it

			setOnSidewalk(0);
		}
		if (getisLight() == true)
		{
			//Tell the person about it

			setIsLight(0);
		}
		if (getIsSign() == true)
		{
			//Tell the person about it

			setIsSign(0);
		}
		if (getCarNear() == true)
		{
			//Tell the person about it

			setCarNear(0);
		}
		if (getDogUsingBathroom() == true)
		{
			//Tell the person about it

			setDogUsingBathroom(0);
		}

	}
};

#endif // !NAVI_H
