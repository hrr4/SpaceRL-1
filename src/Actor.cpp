#include "Actor.hpp"

Actor::Actor()
{

}

Actor::~Actor()
{
	components.clear();
}

void Actor::Update()
{
	for (auto it = components.begin(); it != components.end(); ++it)
		(*it)->Update();
}

 ComponentArray& Actor::GetComponents()
{
	return components;
}
