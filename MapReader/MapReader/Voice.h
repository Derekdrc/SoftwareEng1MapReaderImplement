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

	}
	string getActivePhrase() {

		return " ";
	}
	void setPhraseSaid(int signal) {

	}
	bool confirmPhraseSaid() {

		return;
	}
	void readVoiceCommand() {

		return;
	}
};

#endif // !VOICE_H
