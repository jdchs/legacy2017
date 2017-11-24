#ifndef ROBOTMAP_H
#define ROBOTMAP_H

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
// constexpr int LEFTMOTOR = 1;
// constexpr int RIGHTMOTOR = 2;

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
// constexpr int RANGE_FINDER_PORT = 1;
// constexpr int RANGE_FINDER_MODULE = 1;

const int LEFTFRONT  = 0; //done
const int LEFTBACK = 1; //done
const int RIGHTFRONT = 2; //done
const int RIGHTBACK = 3; //done
const int FUELLOADER1 = 6; //done
const int CLIMBINGARM = 8;
const int SHOOTER = 4; //done
const int ROTATOR = 5; //done
const int FUELLOADER2 = 7; //done

#endif  // ROBOTMAP_H
