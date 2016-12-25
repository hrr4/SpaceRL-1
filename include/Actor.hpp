#pragma once
#ifndef __ACTOR_HPP__
#define __ACTOR_HPP__

#include "Component.hpp"
#include <vector>

typedef std::vector<Component *> ComponentArray;

class Actor
{
public:
	Actor();
	~Actor();

	void Update();
	void Draw();

	ComponentArray& GetComponents();

private:
	ComponentArray components;
};

#endif