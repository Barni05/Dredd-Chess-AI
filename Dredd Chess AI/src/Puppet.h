#pragma once
#include "Utils/Utils.h"
#include <vector>
class Puppet
{
protected:
	Location m_Location;
	int m_ForwardMagnitude;
	std::vector<Location> m_AvailableSteps;

	virtual std::vector<Location> getStepsCanTake() = 0;

public:
	inline Location getLocation() const
	{
		return m_Location;
	}

	void setNewForwardField();
};

