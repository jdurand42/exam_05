#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::~TargetGenerator()
{
	std::vector<ATarget*>::iterator it = _targets.begin();
	std::vector<ATarget*>::iterator end = _targets.end();

	for (; it != end; it++)
	{
		delete *it;
	}
	_targets.clear();
}

void TargetGenerator::learnTargetType(ATarget* target)
{
	if (!target)
		return ;	
	std::vector<ATarget*>::iterator it = _targets.begin();
	std::vector<ATarget*>::iterator end = _targets.end();

	for (; it != end; it++)
	{
		if ((*it)->getType() == target->getType())
			return ;
	}
	_targets.push_back(target->clone());
}

void TargetGenerator::forgetTargetType(const std::string& targetType)
{	
	std::vector<ATarget*>::iterator it = _targets.begin();
	std::vector<ATarget*>::iterator end = _targets.end();

	for (; it != end; it++)
	{
		if ((*it)->getType() == targetType)
		{
			delete (*it);
			it = _targets.erase(it);
			return ;
		}
	}
}

ATarget *TargetGenerator::createTarget(const std::string& targetType)
{	
	std::vector<ATarget*>::iterator it = _targets.begin();
	std::vector<ATarget*>::iterator end = _targets.end();

	for (; it != end; it++)
	{
		if ((*it)->getType() == targetType)
			return (*it); // not clone() ??,
	}
	return (NULL);
}
