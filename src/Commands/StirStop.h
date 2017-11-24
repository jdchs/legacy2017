#ifndef StirStop_H
#define StirStop_H

#include "../CommandBase.h"

class StirStop : public CommandBase {
public:
	StirStop();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // StirStop_H
