#include "main.h"

using namespace okapi;

// ------------------ controller ------------------
// Master Controller
// extern Controller controller;
extern Gamepad gamepad;


// ------------------ drive motors ------------------
// Drive Motors
extern Motor m_lf;
extern Motor m_lb;
extern Motor m_rf;
extern Motor m_rl;
// high motors
extern Motor m_lh;
extern Motor m_rh;

// ------------------ motor groups ------------------
// motor groups
extern MotorGroup g_l;
extern MotorGroup g_drive;
extern MotorGroup g_r;

// ------------------ intake ------------------
// intake
extern Motor m_in;

// ------------------ catapult ------------------
// catapult
extern Motor m_cat;

// ------------------ pto motor groups ------------------
// pto motor groups -- pto == power take off units
// transfers motor mechanical power --> another device
extern MotorGroup pto_left;
extern MotorGroup pto_right;
extern MotorGroup pto_drive;

// ------------------ encoders + gyro ------------------
// encoders missing???

extern RotationSensor rs_left;
extern RotationSensor rs_right;

extern pros::Imu imu;

// ------------------ sensors ------------------
extern Potentiometer p_meter;

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




