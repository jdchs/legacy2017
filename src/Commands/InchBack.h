/*
 * InchBack.h
 *
 *  Created on: Feb 23, 2017
 *      Author: Robotics
 */

#ifndef SRC_COMMANDS_INCHBACK_H_
#define SRC_COMMANDS_INCHBACK_H_

#include "../CommandBase.h"
#include "WPILib.h"

class InchBack : public CommandBase {
private:

public:
	InchBack();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Inturrupted();

};

#endif /* SRC_COMMANDS_INCHBACK_H_ */
