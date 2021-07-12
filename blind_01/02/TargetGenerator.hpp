#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <iostream>
#include <string>
#include <vector>

#include "ASpell.hpp"
#include "ATarget.hpp"

class TargetGenerator
{
	public:
	TargetGenerator();
	virtual ~TargetGenerator();

	void learnTargetType(ATarget *target);
	void forgetTargetType(const std::string& targetType);
	ATarget *createTarget(const std::string& targetType);

	private:
	// this in private ?? not to be inmplemented?
	TargetGenerator& operator = (const TargetGenerator& TargetGenerator);
	TargetGenerator(const TargetGenerator& TargetGenerator);

	std::vector<ATarget*> _targets;
};


#endif
