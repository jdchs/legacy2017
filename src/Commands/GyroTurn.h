#ifndef GyroTurn_H
#define GyroTurn_H

#include "../CommandBase.h"
#include "WPILib.h"

class GyroTurn : public CommandBase {
private:

	float Angle;

public:
	GyroTurn(float A);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();


};

#endif  // GyroTurn_H
