#include "GameObject.h"

int GameObject::lastID=0;

GameObject::GameObject()
{
	instanceID = ++lastID;
	alive=true;
	xPoint1 = 0;
	yPoint1 = 0;
	xPoint2 = 0;
	yPoint2 = 0;
	xPoint3 = 0;
	yPoint3 = 0;
	radius=0;
	ID=global::UNDEFINED;
}


void GameObject::init(float x, float y, int ID, int depth)
{
	GameObject::x=x;
	GameObject::y=y;
	GameObject::ID=ID;
	GameObject::depth=depth;
	activated =true;
	collidable=true;
}

void GameObject::activate()
{
	if(x>global::camX-64 && x<global::camX+global::SCREEN_WIDTH+64 && y>global::camY-64 && y<global::camY+global::SCREEN_HEIGHT+64)
		activated = true;
}

void GameObject::deactivate()
{
	if(x<global::camX-64 || x>global::camX+global::SCREEN_WIDTH+64 || y<global::camY-64 || y>global::camY+global::SCREEN_HEIGHT+64)
		activated = false;
}

void GameObject::draw()
{}
void GameObject::destroy()
{}
