/*
 * BallLoadUp.cpp
 *
 *  Created on: Feb 16, 2017
 *      Author: dange
 */

#include "BallLoadUp.h"
#include "OI.h"
#include "WPILib.h"

BallLoadUp::BallLoadUp() :CommandBase("BallLoadUp")  {
	Requires(Loader);



}

void BallLoadUp::Initialize(){
	Loader->Stop();
}

void BallLoadUp::Execute() {
	Loader->Up();
}


void BallLoadUp::Stop() {
	Loader->Stop();
}

void BallLoadUp::Interrupted() {
	Stop();
}

bool BallLoadUp::IsFinished() {
	return false;
}

