#include "FollowerCircleApp.h"

int main() {
	
	auto app = new FollowerCircleApp();
	app->run("AIE", 1280, 720, false);
	delete app;

	return 0;
}