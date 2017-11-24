#ifndef DashboardAuto_H
#define DashboardAuto_H

#include <Commands/CommandGroup.h>
#include "WPILib.h"
#include "TimedLinearDrive.h"
#include "Fire.h"
#include "StirAuto.h"
#include "SmartDashboard/SendableChooser.h"
#include "SmartDashboard/SmartDashboard.h"
#include "AutoFire.h"
#include "GyroTurn.h"


class DashboardAuto : public CommandGroup {
public:
	DashboardAuto();
};

#endif  // DashboardAuto_H
