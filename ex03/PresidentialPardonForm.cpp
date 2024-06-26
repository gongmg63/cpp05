#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() 
	: AForm("", 1, 1) {}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
	(void)copy;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
	: AForm(copy.getName(), copy.getSignGrade(), copy.getExecuteGrade()), _target(copy._target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::execute(const Bureaucrat& b) const
{
	checkExecute(b);
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox.\n";
}