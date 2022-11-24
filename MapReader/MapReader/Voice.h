//Voice class will handle all of the functions associated with getting user input through voice to text
#pragma once

#ifndef VOICE_H
#define VOICE_H

#include <iostream>
using namespace std;


class Voice {
private:
	string voiceText, activePhrase;
	bool phraseSaid;

public:
	void setActivePhrase() {
		//set activePhrase to a value
	}
	string getActivePhrase() {

		return activePhrase;
	}
	void setPhraseSaid(int signal) {
		if (signal == 1)
		{
			phraseSaid = true;
		}
		else
		{
			phraseSaid = false;
		}
	}
	bool confirmPhraseSaid() 
	{
		return phraseSaid;
	}
	void readVoiceCommand() {

		return;
	}
};

#endif // !VOICE_H
