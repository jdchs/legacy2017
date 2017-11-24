/*
 * Stir.h
 *
 *  Created on: Feb 19, 2017
 *      Author: Robotics
 */

#ifndef SRC_COMMANDS_STIR_H_
#define SRC_COMMANDS_STIR_H_
#include "../CommandBase.h"
#include "WPILib.h"
#include "Subsystems/Shooter.h"


class Stir : public CommandBase {
private:

public:
	Stir();
	void Initialize();
	void Execute();
	bool IsFinished();
	void Stop();
	void Inturrupiton();
	void WaitT();
};

#endif /* SRC_COMMANDS_STIR_H_ */
