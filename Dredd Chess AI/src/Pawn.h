#pragma once
#include "Puppet.h"
class Pawn : public Puppet
{
public:
protected:
	std::vector<Location> getStepsCanTake() override;
};

