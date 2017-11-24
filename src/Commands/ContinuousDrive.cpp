/*
 * ContinuousDrive.cpp
 *
 *  Created on: Feb 16, 2017
 *      Author: dange
 */

#include "ContinuousDrive.h"


ContinuousDrive::ContinuousDrive() {
	Requires(DriveTrain);
	stick =oi->GetDriveJoy();

}

void ContinuousDrive::Initialize() {
	DriveTrain->Stop();
}

void ContinuousDrive::Execute() {
	float x = stick->GetX();
	float y = stick->GetY();
	DriveTrain->ArcadeDrive(-x, -y);

}

bool ContinuousDrive::IsFinished() {
	return false;
}

void ContinuousDrive::End() {
 DriveTrain->Stop();
}

void ContinuousDrive::Interrupted() {

}

