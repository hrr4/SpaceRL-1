#include "Engine.hpp"

int main()
{
	Engine engine(800, 600, "It works!");

	while (engine.Update() >= 0)
		engine.Draw();

	//sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	//sf::CircleShape shape(100.f);
	//shape.setFillColor(sf::Color::Green);
	//
	//while (window.isOpen())
	//{
	//	sf::Event event;
	//	while (window.pollEvent(event))
	//	{
	//		if (event.type == sf::Event::Closed)
	//			window.close();
	//	}
	//
	//	window.clear();
	//	window.draw(shape);
	//	window.display();
	//}

	return 0;
}