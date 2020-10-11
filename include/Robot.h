#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include <string>

using namespace std;

class Robot
{
    public:
        // set up a robot with name n, placed at the origin-position 0,0
        explicit robot(const string &n);

        //returns the name of the robot (as supplied to the constructor).
        const std::string &name() const {
            return robot_name;
        }

        // Send minions to the left
        void send_left();

        // Send minions to the right
        void send_right();

        // Send minions to the middle
        void send_middle();

        //sets the name of the robot
        void set_name(const string &n);

        //gets the name of the robot
        const string get_name()const;

        Robot();
        virtual ~Robot();
        Robot(const Robot& other);
        Robot& operator=(const Robot& other);

    protected:
        int health;
        int gold;
        int block;
        int attack;
        int heal;

        //the positions of the Robot in the grid (x,y)
        int posX;
        int posY;
};

/*
 * External Functions
 */

int distance(const robot &r);	//returns the distance of robot from the minion

#endif // ROBOT_H
