/*
 * InchRight.h
 *
 *  Created on: Feb 19, 2017
 *      Author: dange
 */

#ifndef SRC_COMMANDS_INCHRIGHT_H_
#define SRC_COMMANDS_INCHRIGHT_H_
#include "../CommandBase.h"
#include "WPILib.h"


class InchRight : public CommandBase{
private:
	Joystick *stick;

public:
	InchRight();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Inturrupted();
};

#endif /* SRC_COMMANDS_INCHRIGHT_H_ */
