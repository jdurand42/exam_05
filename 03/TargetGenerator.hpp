#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <iostream>
#include <string>

#include <vector>

#include "ATarget.hpp"

class TargetGenerator
{
	public:
	TargetGenerator();
	virtual ~TargetGenerator();

	void learnTargetType(ATarget *target);
	void forgetTargetType(std::string targetType);
	ATarget *createTarget(std::string targetType);
	
	private:
	std::vector<ATarget*> _targets;
	TargetGenerator(const TargetGenerator& targetGenerator);
	TargetGenerator &operator = (const TargetGenerator& targetGenerator);
};

#endif
