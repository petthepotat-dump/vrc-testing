#include "main.h"

// ------------------ Position ------------------

class Position
{
private:
    pros::Task *task;
    double x, y, theta;

public:
    Position();
    ~Position();

    void run(void *param);
    double get_heading();
    double get_x();
    double get_y();
};
