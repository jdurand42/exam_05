#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::~TargetGenerator()
{
	std::vector<ATarget*>::iterator it = _targets.begin();
	std::vector<ATarget*>::iterator ite = _targets.end();
	
	for (; it != ite; it++)
	{
		delete *it;
	}
	_targets.clear();
}

void TargetGenerator::learnTargetType(ATarget *target)
{
	std::vector<ATarget*>::iterator it = _targets.begin();
	std::vector<ATarget*>::iterator ite = _targets.end();
	
	for (; it != ite; it++)
	{
		if ((*it)->getType() == target->getType())
			return ;
	}
	_targets.push_back(target->clone());
}

void TargetGenerator::forgetTargetType(std::string targetType)
{
	std::vector<ATarget*>::iterator it = _targets.begin();
	std::vector<ATarget*>::iterator ite = _targets.end();
	
	for (; it != ite; it++)
	{
		if ((*it)->getType() == targetType)
		{
			delete *it;
			it = _targets.erase(it);
			return ;
		}
	}
}

ATarget *TargetGenerator::createTarget(std::string targetType)
{
	std::vector<ATarget*>::iterator it = _targets.begin();
	std::vector<ATarget*>::iterator ite = _targets.end();
	
	for (; it != ite; it++)
	{
		if ((*it)->getType() == targetType)
		{
			return (*it) ;
		}
	}
	return (NULL);
}
