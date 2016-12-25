#ifndef __COMPONENT_HPP__
#define __COMPONENT_HPP__

struct Message
{
	void *userData;
	unsigned size;
};

class Component
{
public:
	virtual ~Component() {}

	virtual void Update() = 0;
	virtual Message* Send() = 0;
	virtual void Receive(Message *msg) = 0;
};

#endif