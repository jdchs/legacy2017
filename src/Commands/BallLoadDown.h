/*
 * BallLoadDown.h
 *
 *  Created on: Feb 17, 2017
 *      Author: dange
 */

#ifndef SRC_COMMANDS_BALLLOADDOWN_H_
#define SRC_COMMANDS_BALLLOADDOWN_H_
#include "WPILib.h"
#include "../CommandBase.h"
#include "OI.h"
#include "Subsystems/BallLoader.h"
class BallLoadDown : public CommandBase {

private:


public:
	BallLoadDown();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();

};

#endif /* SRC_COMMANDS_BALLLOADDOWN_H_ */
