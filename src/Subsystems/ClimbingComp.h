/*
 * ClimbingComp.h
 *
 *  Created on: Feb 17, 2017
 *      Author: dange
 */

#ifndef SRC_SUBSYSTEMS_CLIMBINGCOMP_H_
#define SRC_SUBSYSTEMS_CLIMBINGCOMP_H_
#include "Commands/Subsystem.h"
#include "WPILib.h"

class ClimbingComp : public Subsystem {
private:
	Talon *Climb;

public:
	ClimbingComp();
	void InitDefaultCommand();
	void Up();
	void Down();
	void Stop();
	void Pulse();
	void WaitT();
};

#endif /* SRC_SUBSYSTEMS_CLIMBINGCOMP_H_ */
