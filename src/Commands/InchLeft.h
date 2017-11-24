/*
 * InchLeft.h
 *
 *  Created on: Feb 19, 2017
 *      Author: dange
 */

#ifndef SRC_COMMANDS_INCHLEFT_H_
#define SRC_COMMANDS_INCHLEFT_H_
#include "../CommandBase.h"
#include "WPILib.h"

class InchLeft : public CommandBase {
private:
	Joystick *stick;

public:
	InchLeft();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Inturrupted();
};
#endif /* SRC_COMMANDS_INCHLEFT_H_ */
