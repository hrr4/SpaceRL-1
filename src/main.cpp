#include "Engine.hpp"

int main()
{
	Engine engine(800, 600, "It works!");

	while (engine.Update() >= 0)
		engine.Draw();

	return 0;
}