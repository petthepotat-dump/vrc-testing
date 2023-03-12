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
    double dl, dr, currentLeft, currentRight, lastLeft = 0, lastRight = 0;
    double lastHeading, dh;
    while (true)
    {
        // collect motor + position data
        currentLeft = g_l.getPosition();
        currentRight = g_r.getPosition();
        dl = currentLeft - lastLeft;
        dr = currentRight - lastRight;
        lastLeft = currentLeft;
        lastRight = currentRight;
        // TODO -- double memory errs

        // gyro
        // this hurts a lot but i gotta do it
        if (!imu.is_calibrating())
        {
            this->theta = imu.get_heading();
            dh = this->theta - lastHeading;
            lastHeading = this->theta;
        }

        // debug

        // calculate position

        pros::delay(10);
    }
}

double Position::get_heading()
{
    return this->theta;
}

double Position::get_x()
{
    return this->x;
}

double Position::get_y()
{
    return this->y;
}
