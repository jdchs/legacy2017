/*
 * Shooter.h
 *
 *  Created on: Feb 17, 2017
 *      Author: dange
 */

#ifndef SRC_SUBSYSTEMS_SHOOTER_H_
#define SRC_SUBSYSTEMS_SHOOTER_H_
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "RobotMap.h"

class Shooter : public Subsystem {
private:
	Talon *Shoot;
	Talon *Rotate;
	MotorSafetyHelper *help;
	MotorSafetyHelper *helpR;

public:
	Shooter();
	void InitDefaultCommand();
	void Execute();
	void StirStop();
	void ShootStop();
	void Stir();
	void StirReverse();


};

#endif /* SRC_SUBSYSTEMS_SHOOTER_H_ */
