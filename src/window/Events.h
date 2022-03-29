#ifndef WINDOW_EVENT_H_
#define WINDOW_EVENT_H_

#include "Window.h"

typedef unsigned int uint;

class Events {
public:
	static bool* _keys;
	static uint* _frames;
	static uint _current;
	static float deltaX;
	static float deltaY;
	static float x;
	static float y;
	static bool _cursor_locked;
	static bool _cursor_started;

	static int initialize();
	static void pullEvents();

	static bool pressed(int keycode);
	static bool justPressed(int keycode);

	static bool clicked(int button);
	static bool justClicked(int button);
};

#endif //WINDOW_EVENT_H_
