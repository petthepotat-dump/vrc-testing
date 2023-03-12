#include "main.h"

// ------------------ Position ------------------

class Odometry
{
private:
    pros::Task *task;
    double x, y, theta;

public:
    Position();
    ~Position();

    void run(void *param);
};