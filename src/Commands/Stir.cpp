/*
 * Stir.cpp
 *
 *  Created on: Feb 19, 2017
 *      Author: Robotics
 */

#include <Commands/Stir.h>
#include "WPILib.h"
#include "OI.h"

Stir::Stir(): CommandBase("Stir") {
	Requires(Shoot);
}

void Stir::WaitT() {
	clock_t endwait;
	float seconds = .75;
	endwait = clock() + seconds * CLOCKS_PER_SEC;
	while(clock() < endwait) {}
}

void Stir::Initialize() {
	WaitT();
}

void Stir::Execute() {
	Shoot->Stir();
}

bool Stir::IsFinished() {
	return false;
}

void Stir::Stop() {
	Shoot->StirStop();
}

void Stir::Inturrupiton() {
	Stop();
}

