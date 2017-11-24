/*
 * BallLoadUp.h
 *
 *  Created on: Feb 16, 2017
 *      Author: dange
 */

#ifndef SRC_COMMANDS_BALLLOADUP_H_
#define SRC_COMMANDS_BALLLOADUP_H_
#include "../CommandBase.h"
#include "WPILib.h"
#include "OI.h"
#include "Subsystems/BallLoader.h"
class BallLoadUp : public CommandBase {

private:


public:
	BallLoadUp();
	void Initialize();
	void Execute();

	bool IsFinished();
	void Stop();
	void Interrupted();

};
#endif /* SRC_COMMANDS_BALLLOADUP_H_ */
