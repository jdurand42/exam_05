#include "Warlock.hpp"

Warlock::Warlock(const std::string& name, const std::string& title): _name(name), _title(title)
{
}

Warlock::Warlock(const Warlock& warlock): _name(warlock.getName()), _title(warlock.getTitle())
{
}

Warlock& Warlock::operator = (const Warlock& warlock)
{
	_name = warlock.getName();
	_title = warlock.getTitle();
	return (*this);
}

Warlock::~Warlock()
{
}

void Warlock::setTitle(const std::string& title)
{
	_title = title;
}

void Warlock::setName(const std::string& name)
{
	_name = name;
}

const std::string& Warlock::getName() const
{
	return (_name);
}

const std::string& Warlock::getTitle() const
{
	return (_title);
}

void Warlock::introduce() const
{
	std::cout << _name << ": My name is " << _name << ", " << _title << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
	_spellbook.learnSpell(spell);
}

void Warlock::forgetSpell(const std::string& spellName)
{
	_spellbook.forgetSpell(spellName);
}

void Warlock::launchSpell(const std::string& spellName, const ATarget& target)
{
	const ATarget *p_target = &target;
	ASpell *spell = _spellbook.generateSpell(spellName);
	if (spell && p_target)
		spell->launch(target);
}
