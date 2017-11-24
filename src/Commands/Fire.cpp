/*
 * Fire.cpp
 *
 *  Created on: Feb 17, 2017
 *      Author: dange
 */

#include <Commands/Fire.h>
#include <iostream>
#include "time.h"

Fire::Fire() {
	Requires(Shoot);

}


void Fire::Initialize() {
	DriveTrain->Stop();

}

void Fire::Execute() {
	Shoot->Execute();
	DriveTrain->Stop();
}

bool Fire::IsFinished() {
	return false;
}

void Fire::End() {
	Shoot->ShootStop();

}

void Fire::Inturrupted() {
	End();
}
