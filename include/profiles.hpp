#include "main.h"

// ------------------ controller ------------------
// Master Controller
extern okapi::Controller controller;


// ------------------ drive motors ------------------
// Drive Motors
extern okapi::Motor m_lf;
extern okapi::Motor m_lb;
extern okapi::Motor m_rf;
extern okapi::Motor m_rl;
// high motors
extern okapi::Motor m_lh;
extern okapi::Motor m_rh;

// ------------------ motor groups ------------------
// motor groups
extern okapi::MotorGroup g_l;
extern okapi::MotorGroup g_r;
extern okapi::MotorGroup g_drive;

// ------------------ intake ------------------
// intake
extern okapi::Motor m_in;

// ------------------ catapult ------------------
// catapult
extern okapi::Motor m_cat;

// ------------------ pto motor groups ------------------
// pto motor groups -- pto == power take off units
// transfers motor mechanical power --> another device
extern okapi::MotorGroup pto_left;
extern okapi::MotorGroup pto_right;
extern okapi::MotorGroup pto_drive;

// ------------------ encoders + gyro ------------------
// encoders missing???

extern okapi::RotationSensor rs_left;
extern okapi::RotationSensor rs_right;

extern pros::Imu imu;

// ------------------ sensors ------------------
extern okapi::Potentiometer p_meter;

// for detecting goals
extern pros::Optical optical;


extern pros::ADIDigitalOut endgame_piston;


extern pros::ADIDigitalOut elasticCatapultPiston;
extern pros::ADIDigitalOut elasticCatapultPiston2;
extern pros::ADIDigitalOut slapper;
extern pros::ADIDigitalOut netBlocker;

extern pros::Optical front_optical;
extern pros::Optical back_optical;
extern pros::ADIAnalogIn catapult_linetracker;
extern pros::ADIAnalogIn brain_linetracker;
extern pros::ADIAnalogIn intakeRamp_linetracker;




