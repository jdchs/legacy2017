/*
 * BallLoader.h
 *
 *  Created on: Feb 16, 2017
 *      Author: dange
 */

#ifndef SRC_SUBSYSTEMS_BALLLOADER_H_
#define SRC_SUBSYSTEMS_BALLLOADER_H_

#include "Commands/Subsystem.h"
#include "WPILib.h"

class BallLoader : public Subsystem {

private:
	Talon *Loader1;
	Talon *Loader2;

public:
	BallLoader();
	void InitDefaultCommand();
	void Up();
	void Down();
	void Stop();
	void Inturruption();


};

#endif /* SRC_SUBSYSTEMS_BALLLOADER_H_ */
