/*
 * BallLoader.cpp
 *
 *  Created on: Feb 16, 2017
 *      Author: dange
 */

#include "BallLoader.h"
#include "../RobotMap.h"
#include "Commands/BallLoadUp.h"
#include "Commands/BallLoadDown.h"

BallLoader::BallLoader() : Subsystem("BallLoader"){
	Loader1 = new Talon(FUELLOADER1);
	Loader2 = new Talon(FUELLOADER2);

}

void BallLoader::InitDefaultCommand() {


}

void BallLoader::Up() {
	Loader1->Set(1);
	Loader2->Set(1);
}

void BallLoader::Down() {
	Loader1->Set(-1);
	Loader2->Set(-1);
}

void BallLoader::Stop() {
	Loader1->Set(0);
	Loader2->Set(0);
}

void BallLoader::Inturruption() {
	Stop();
}
