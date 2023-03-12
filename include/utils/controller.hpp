#include "main.h"

struct Gamepad {

    okapi::Controller controller;

    //===
    Gamepad(okapi::ControllerId id){
        controller = okapi::Controller(id);
    }

    //===joystick
    double leftY(){
        controller.getAnalog(okapi::ControllerAnalog::leftY);
    }
    double rightY(){
        controller.getAnalog(okapi::ControllerAnalog::rightY);
    }
    double leftX(){
        controller.getAnalog(okapi::ControllerAnalog::leftX);
    }
    double rightX(){
        controller.getAnalog(okapi::ControllerAnalog::rightX);
    }
    //===buttons
    bool left(){
        controller.getDigital(okapi::ControllerDigital::left);
    }
    bool up(){
        controller.getDigital(okapi::ControllerDigital::up);
    }
    bool right(){
        controller.getDigital(okapi::ControllerDigital::right);
    }
    bool down(){
        controller.getDigital(okapi::ControllerDigital::down);
    }
    bool a(){
        controller.getDigital(okapi::ControllerDigital::A);
    }
    bool b(){
        controller.getDigital(okapi::ControllerDigital::B);
    }
    bool x(){
        controller.getDigital(okapi::ControllerDigital::X);
    }
    bool y(){
        controller.getDigital(okapi::ControllerDigital::Y);
    }
    //=== triggers
    double rightTrigger(){
        // TODO -- do this
        return 0.0;
    }

};
