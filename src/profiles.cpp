#include "main.h"

// port 15 + 20 are bad

// ------------------ controller ------------------

Gamepad gamepad(okapi::ControllerId::master);
// okapi::Controller controller(okapi::ControllerId::master);

// ------------------ drive motors ------------------

// motors == (port, reversed, gearset, encoderunits)
Motor m_lf(LEFT_FRONT, true, okapi::AbstractMotor::gearset::green, okapi::AbstractMotor::encoderUnits::degrees);
Motor m_lb(LEFT_BACK, true, okapi::AbstractMotor::gearset::green, okapi::AbstractMotor::encoderUnits::degrees);
Motor m_lh(LEFT_HIGH, true, okapi::AbstractMotor::gearset::green, okapi::AbstractMotor::encoderUnits::degrees);
// insert other motors
Motor m_rf(RIGHT_FRONT, false, okapi::AbstractMotor::gearset::green, okapi::AbstractMotor::encoderUnits::degrees);
Motor m_rb(RIGHT_BACK, false, okapi::AbstractMotor::gearset::green, okapi::AbstractMotor::encoderUnits::degrees);
Motor m_rh(RIGHT_HIGH, false, okapi::AbstractMotor::gearset::green, okapi::AbstractMotor::encoderUnits::degrees);

// motor groups
MotorGroup g_l = {m_lf, m_lb, m_lh};
MotorGroup g_r = {m_lf, m_lb, m_lh};
// add other groups

// add right motors as well
MotorGroup g_drive = {m_lf, m_lb, m_lh, m_rf, m_rb, m_rh};

// ------------------ intake ------------------
// intake -- find out if its abstract
Motor m_in(INTAKE_MOTOR, false, okapi::AbstractMotor::gearset::green, okapi::AbstractMotor::encoderUnits::degrees);

// ------------------ catapult ------------------
// catapult -- find out if its abstract
Motor m_cat;

// ------------------ pto motor groups ------------------
// pto motor groups -- pto == power take off units
// transfers motor mechanical power --> another device
MotorGroup pto_left;
MotorGroup pto_right;
MotorGroup pto_drive;

// ------------------ encoders + gyro ------------------
// encoders missing???

RotationSensor rs_left(LEFT_ROT);
RotationSensor rs_right(RIGHT_ROT);

pros::Imu imu(IMU_PORT);

// ------------------ sensors ------------------
Potentiometer p_meter(POTENT_METER);

// TODO -- below

// for detecting goals
pros::Optical optical;

pros::ADIDigitalOut endgame_piston;

pros::ADIDigitalOut elasticCatapultPiston;
pros::ADIDigitalOut elasticCatapultPiston2;
pros::ADIDigitalOut slapper;
pros::ADIDigitalOut netBlocker;

pros::Optical front_optical;
pros::Optical back_optical;
pros::ADIAnalogIn catapult_linetracker;
pros::ADIAnalogIn brain_linetracker;
pros::ADIAnalogIn intakeRamp_linetracker;
