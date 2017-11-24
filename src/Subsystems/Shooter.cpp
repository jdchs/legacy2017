/*
 * Shooter.cpp
 *
 *  Created on: Feb 17, 2017
 *      Author: dange
 */

#include <Subsystems/Shooter.h>
#include "WPILib.h"


Shooter::Shooter() : Subsystem("Fire") {
	Shoot = new Talon(SHOOTER);
	Rotate = new Talon(ROTATOR);
	help = new MotorSafetyHelper(Shoot);
	helpR = new MotorSafetyHelper(Rotate);
}

void Shooter::InitDefaultCommand() {

}

void Shooter::Stir() {
	helpR->SetSafetyEnabled(false);
	Rotate->Set(-.2);
}

void Shooter::StirReverse() {
	Rotate->Set(.2);
}

void Shooter::Execute() {
	help->SetSafetyEnabled(false);
	Shoot->Set(.9045);
}

void Shooter::ShootStop(){
	Shoot->Set(0);
	Rotate->Set(0);
}

void Shooter::StirStop(){
	Rotate->Set(0);
}

