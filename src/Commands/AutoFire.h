#ifndef AutoFire_H
#define AutoFire_H

#include "../CommandBase.h"
#include "WPILib.h"

class AutoFire : public CommandBase {
public:
	AutoFire();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
	void WaitT();
};

#endif  // AutoFire_H
