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
    long dl, dr, currentLeft, currentRight, lastLeft = 0, lastRight = 0;
    while (true)
    {
        // collect motor + position data
        currentLeft = g_l.getPosition();
        currentRight = g_r.getPosition();
        dl = currentLeft - lastLeft;
        dr = currentRight - lastRight;
        lastLeft = currentLeft;
        lastRight = currentRight;

        // debug

        // calculate position

        pros::delay(10);
    }
}

double Position::get_heading()
{
}
