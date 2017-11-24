#ifndef TimedLinearDrive_H
#define TimedLinearDrive_H

#include "../CommandBase.h"
#include "WPILib.h"

enum LinearDirection {
	forward = 0,
	backward = 1,
	turnleft = 2,
	turnright = 3,
	stop = 4,
	FA = 5,
	BA = 6
};

class TimedLinearDrive : public CommandBase {

private:
	LinearDirection dir;
public:
	TimedLinearDrive(double timeout, LinearDirection direction);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // TimedLinearDrive_H
