#ifndef StirReverse_H
#define StirReverse_H

#include "../CommandBase.h"

class StirReverse : public CommandBase {
public:
	StirReverse();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // StirReverse_H
