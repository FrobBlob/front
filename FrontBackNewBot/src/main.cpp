/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\Administrator                                    */
/*    Created:      Thu Sep 25 2025                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// Drivetrain           drivetrain    1, 2, 4, 5      
// front                motor         8               
// second               motor         9               
// thrid                motor         10              
// fourth               motor         11              
// fifth                motor         12              
// sixth                motor         13              
// park                 digital_out   A               
// matchloads           digital_out   B               
// ---- END VEXCODE CONFIGURED DEVICES ----
/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       VEX                                                       */
/*    Created:      Thu Sep 26 2019                                           */
/*    Description:  Competition Template                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

// A global instance of competition
competition Competition;

// define your global instances of motors and other devices here

/*---------------------------------------------------------------------------*/
/*                          Pre-Autonomous Functions                         */
/*                                                                           */
/*  You may want to perform some actions before the competition starts.      */
/*  Do them in the following function.  You must return from this function   */
/*  or the autonomous and usercontrol tasks will not be started.  This       */
/*  function is only called once after the V5 has been powered on and        */
/*  not every time that the robot is disabled.                               */
/*---------------------------------------------------------------------------*/

void pre_auton(void) {


  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  front.setVelocity(100,percent);
  second.setVelocity(100,percent);
  //third.setVelocity(100,percent);
  Drivetrain.setDriveVelocity(100,percent);
  Drivetrain.setTurnVelocity(50,percent);
  Drivetrain.setStopping(brake);
  front.setMaxTorque(100,percent);
  second.setMaxTorque(100,percent);
  //third.setMaxTorque(100,percent);
  front.setStopping(hold);
  second.setStopping(hold);
  //third.setStopping(hold);
}
  // All activities that occur before the competition starts
  // Example: clearing encoders, setting servo positions, ...


/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              Autonomous Task                              */
/*                                                                           */
/*  This task is used to control your robot during the autonomous phase of   */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void autonomous(void) {
  front.setVelocity(100,percent);
  second.setVelocity(100,percent);
  //third.setVelocity(100,percent);
  Drivetrain.setDriveVelocity(80,percent);
  Drivetrain.setTurnVelocity(25,percent);
  Drivetrain.setStopping(brake);
  front.setMaxTorque(100,percent);
  second.setMaxTorque(100,percent);
  //third.setMaxTorque(100,percent);
  //front.setStopping(hold);
  //second.setStopping(hold);
  //third.setStopping(hold);
  //jackson is a black monkey;
//Drivetrain.setDriveVelocity(30,percent);
//Drivetrain.setTurnVelocity(30,percent);
//front.spin(reverse);
//second.spin(forward);
//third.spin(reverse);
//Drivetrain.driveFor(18.5,inches);
//Drivetrain.turnFor(right, 25,degrees);
//Drivetrain.setDriveVelocity(10,percent);
//Drivetrain.driveFor(9,inches);
//Drivetrain.turnFor(left, 60,degrees);
//Drivetrain.setDriveVelocity(30,percent);
//Drivetrain.driveFor(10,inches);
//second.setVelocity(50,percent);
//third.setVelocity(25,percent);
//third.stop();
//third.spin(forward);
//second.spin(reverse);
//second.setVelocity(100,percent);
//third.setVelocity(100,percent);
Drivetrain.setDriveVelocity(100,percent);
Drivetrain.setTurnVelocity(50,percent);
Drivetrain.setStopping(brake);

  // ..........................................................................
  // Insert autonomous user code here.
  // ..........................................................................
}
//elf on the self
/*---------------------------------------------------------------------------*/
/*                                                                           */
/*                              User Control Task                            */
/*                                                                           */
/*  This task is used to control your robot during the user control phase of */
/*  a VEX Competition.                                                       */
/*                                                                           */
/*  You must modify the code to add your own robot specific commands here.   */
/*---------------------------------------------------------------------------*/

void usercontrol(void) {
  // User control code here, inside the loop
  while (1) {
   
    // This is the main execution loop for the user control program.
    // Each time through the loop your program should update motor + servo
    // values based on feedback from the joysticks.

    // ........................................................................
    // Insert user code here. This is where you use the joystick values to
    // update your motors, etc.
    // ........................................................................

    wait(20, msec); // Sleep the task for a short amount of time to
                    // prevent wasted resources.
  }
}

//
// Main will set up the competition functions and callbacks.
//
int main() {
  // Set up callbacks for autonomous and driver control periods.
  Competition.autonomous(autonomous);
  Competition.drivercontrol(usercontrol);

  // Run the pre-autonomous function.
  pre_auton();

  // Prevent main from exiting with an infinite loop.
  while (true) {
    wait(100, msec);
  }
}

