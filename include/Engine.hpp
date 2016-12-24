#ifndef __ENGINE_HPP_
#define __ENGINE_HPP_

#include "SFML\Graphics.hpp"
#include <memory>
#include <queue>

class Engine
{
public:
	enum Status { NONE = 0, WINDOW_CLOSED = -1 };
	Engine(unsigned width, unsigned height, std::string title);
	~Engine();

	int Update();
	int Draw();

	const sf::RenderWindow* GetWindow() const;
	Status GetStatus();

private:
	std::unique_ptr<sf::RenderWindow> window;
	std::queue<Status> statuses;

	void AddStatus(Status s);
};

#endif