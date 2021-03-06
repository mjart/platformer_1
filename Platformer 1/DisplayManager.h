#pragma once
#include <allegro5/allegro.h>
#include <allegro5/allegro_native_dialog.h>
#include "globals.h"
class DisplayManager
{
public:
	DisplayManager(void);
	~DisplayManager(void);

	static DisplayManager &GetInstance();

	bool CreateDisplay();
	ALLEGRO_DISPLAY* GetDisplay();

	void ChangeState();

	void Clean();

	ALLEGRO_DISPLAY *display;
	ALLEGRO_DISPLAY_MODE disp_data;
	ALLEGRO_TRANSFORM camera;


private:

	enum STATE
	{
		WINDOWED,
		FULLSCREEN_WINDOW
	};

	char state;
};

