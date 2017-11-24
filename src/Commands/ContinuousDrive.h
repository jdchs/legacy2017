/*
 * ContinuousDrive.h
 *
 *  Created on: Feb 16, 2017
 *      Author: dange
 */

#ifndef SRC_COMMANDS_CONTINUOUSDRIVE_H_
#define SRC_COMMANDS_CONTINUOUSDRIVE_H_

#include "../CommandBase.h"
#include "WPILib.h"

class ContinuousDrive : public CommandBase{

private:


public:
	Joystick *stick;
	ContinuousDrive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();

};

#endif
