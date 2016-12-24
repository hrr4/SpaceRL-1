#include "Engine.hpp"
#include "SFML\Graphics.hpp"

#include <thread>

void renderer(sf::RenderWindow* window)
{
	window->clear();

	// Render loop
	while (window->isOpen()) {
		// Draw Actors, map, etc.

		// End frame
		window->display();
	}
}

Engine::Engine(unsigned width, unsigned height, std::string title) :
	window(new sf::RenderWindow(sf::VideoMode(width, height), title.c_str()))
{
	// Deactivate Window
	window->setActive(false);
}

Engine::~Engine()
{
}

int Engine::Update()
{
	// Events & Logic
	while (window->isOpen()) {
		
		// Events n stuff
		sf::Event ev;
		while (window->pollEvent(ev)) {
			if (ev.type == sf::Event::Closed) {
				window->close();
				AddStatus(WINDOW_CLOSED);
			}
		}
	}

	return GetStatus();
}

int Engine::Draw()
{
	std::thread thread(renderer, window.get());

	return 0;
}

const sf::RenderWindow* Engine::GetWindow() const
{
	return window.get();
}

Engine::Status Engine::GetStatus()
{
	Status s;
	
	if (!statuses.empty()) {
		s = statuses.front();
		statuses.pop();
	}
	else {
		s = NONE;
	}

	return s;
}

void Engine::AddStatus(Status s)
{
	statuses.push(s);
}
