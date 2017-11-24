/*
 * BallLoadDown.cpp
 *
 *  Created on: Feb 17, 2017
 *      Author: dange
 */

#include "BallLoadDown.h"

BallLoadDown::BallLoadDown() {
	Requires(Loader);

}

void BallLoadDown::Initialize() {
	Loader->Stop();
}

void BallLoadDown::Execute(){
	Loader->Down();
}

bool BallLoadDown::IsFinished() {
	return false;
}

void BallLoadDown::End() {
	Loader->Stop();
}

void BallLoadDown::Interrupted() {
	End();
}
