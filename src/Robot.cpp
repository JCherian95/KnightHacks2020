#include "Robot.h"
#include  <cstdlib>


/*
 * Robot class implementation
 */

robot::robot(const string &n) {	//declares the robot object
	robot_name = n;
	posX = 0;
	posY = 0;
}

// declares the name of the robot
void robot::set_name(const string &n) {
	robot_name = n;
}

// returns name of the robot (needed to get private members of robot class)
const string robot::get_name()const {
	return robot_name;
}

// returns the distance of robot r from the origin
int distance(const robot &r) {
	return abs(r.north()) + abs(r.east());	//always returns positive number
}

// Sends minions to the left path
void robot::send_left() {
	// Do something
	posY++;
}

// Sends minions to the right path
void robot::send_right() {
	// Do something
	posX++;
}

// Sends minions to the middle path
void robot::send_midle() {
	// Do something
}

Robot::Robot()
{
    //ctor


}

Robot::~Robot()
{
    //dtor
}

Robot::Robot(const Robot& other)
{
    //copy ctor
}

Robot& Robot::operator=(const Robot& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator

    return *this;
}
