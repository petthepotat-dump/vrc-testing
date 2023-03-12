#include "main.h"

// port 15 + 20 are bad


// ------------------ controller ------------------

Gamepad gamepad(okapi::ControllerId::master);

// okapi::Controller controller(okapi::ControllerId::master);


// ------------------ drive motors ------------------
// motors == (port, reversed, gearset, encoderunits)
okapi::Motor m_lf(18, true, okapi::AbstractMotor::gearset::green, okapi::AbstractMotor::encoderUnits::degrees);
okapi::Motor m_lb(4, true, okapi::AbstractMotor::gearset::green, okapi::AbstractMotor::encoderUnits::degrees);
okapi::Motor m_lh(9, true, okapi::AbstractMotor::gearset::green, okapi::AbstractMotor::encoderUnits::degrees);
// insert other motors
okapi::Motor m_rf(17, false, okapi::AbstractMotor::gearset::green, okapi::AbstractMotor::encoderUnits::degrees);
okapi::Motor m_rb(6, false, okapi::AbstractMotor::gearset::green, okapi::AbstractMotor::encoderUnits::degrees);
okapi::Motor m_rh(10, false, okapi::AbstractMotor::gearset::green, okapi::AbstractMotor::encoderUnits::degrees);

// motor groups
okapi::MotorGroup g_l = {m_lf, m_lb, m_lh};
okapi::MotorGroup g_r = {m_lf, m_lb, m_lh};
// add other groups

// add right motors as well
okapi::MotorGroup g_drive = {m_lf, m_lb, m_lh, m_rf, m_rb, m_rh};

