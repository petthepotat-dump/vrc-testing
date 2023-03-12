#include "main.h"
#include "system/position.hpp"

// ------------------ Position ------------------

Position::Position()
{
    this->task = new pros::Task(Position::run, "Position");
}

Position::~Position()
{
    delete task;
}

void Position::run(void *param)
{
    long dl, dr, currentLeft, currentRight, lastLeft, lastRight;
    while (true)
    {
        // collect motor + position data
        currentLeft = g_l.getPosition();
        currentRight = g_r.getPosition();

        // calculate position

        pros::delay(10);
    }
}
