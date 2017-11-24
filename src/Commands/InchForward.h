/*
 * InchForward.h
 *
 *  Created on: Feb 22, 2017
 *      Author: Robotics
 */

#ifndef SRC_COMMANDS_INCHFORWARD_H_
#define SRC_COMMANDS_INCHFORWARD_H_

#include "WPILib.h"
#include "../CommandBase.h"
#include "ContinuousDrive.h"

class InchForward : public CommandBase{
private:



public:
	InchForward();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Inturrupted();
	void WaitT();
};

#endif /* SRC_COMMANDS_INCHFORWARD_H_ */
