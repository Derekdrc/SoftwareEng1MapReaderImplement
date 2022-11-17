//Software Engineering 1
//Scrum Leader: Derek D'Arcy
//Members: Mouahkong-Alex Yang, Khaled Almutairi, Jonathan Dervin

//Implementation phase to create a map reader application for the blind

#include <iostream>
#include <string>
#include <sapi.h>
/*#include "GPS.h"
#include "Map.h"
#include "Location.h"
#include "Navi.h"
#include "Voice.h"
#include "Camera.h"*/
using namespace std;

int main() {
	ISpVoice* pVoice = NULL;
	if (FAILED(::CoInitialize(NULL)))
		return EXIT_FAILURE;

	HRESULT hr = CoCreateInstance(CLSID_SpVoice, NULL, CLSCTX_ALL, IID_ISpVoice, (void**)&pVoice);
	hr = pVoice->Speak(L"Welcome to the map reader app for the blind", 0, NULL);

	if (SUCCEEDED(hr))
	{
		pVoice->Release();
		pVoice = NULL;
	}
	::CoUninitialize();

	return EXIT_SUCCESS;
	cout << "Welcome to the map reader for the blind";
}