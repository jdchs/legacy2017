#ifndef StirAuto_H
#define StirAuto_H

#include "../CommandBase.h"
#include "WPILib.h"

class StirAuto : public CommandBase {
public:
	StirAuto();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // StirAuto_H
