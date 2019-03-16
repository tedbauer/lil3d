#include "window.h"

const int WIDTH  = 800;
const int HEIGHT = 800;
char* TITLE = "Lil 3D Engine";

void render()
{
	render_window();
}

void run()
{
	while (!is_close_requested()) {
		render();
	}
}

void start()
{
	run();
}

void stop()
{

}

void clean_up()
{

}

int main()
{
	init_window(WIDTH, HEIGHT, TITLE);
	start();
}
