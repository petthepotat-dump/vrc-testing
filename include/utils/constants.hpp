#pragma once
#define cl const long
#define ci const int

//=== pros stuff
#define DISPLAY_TEXT_SMALL pros::text_format_e_t::E_TEXT_SMALL

//=== numbers

cl MIN_VOLTS = -12000, MAX_VOLTS = 12000;
cl UPDATE_PAUSE = 100;

//=== robot ports
// motors
ci LEFT_FRONT = 18;
ci LEFT_BACK = 4;
ci LEFT_HIGH = 9;
ci RIGHT_FRONT = 17;
ci RIGHT_BACK = 6;
ci RIGHT_HIGH = 10;

// TODO -- find out take + catapult motors
ci INTAKE_MOTOR = 1;
ci CATAPULT_MOTOR = 2;

// sensors
ci LEFT_ROT = 3;
ci RIGHT_ROT = 4;

ci POTENT_METER = 5;
ci IMU_PORT = 6;
