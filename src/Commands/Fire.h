/*
 * Fire.h
 *
 *  Created on: Feb 17, 2017
 *      Author: dange
 */

#ifndef SRC_COMMANDS_FIRE_H_
#define SRC_COMMANDS_FIRE_H_

#include "../CommandBase.h"
#include "WPILib.h"

class Fire : public CommandBase {
private:


public:
	Fire();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Inturrupted();
};

#endif /* SRC_COMMANDS_FIRE_H_ */
