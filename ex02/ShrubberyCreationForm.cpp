#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("", 1, 1) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
	(void)copy;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
	: AForm(copy.getName(), copy.getSignGrade(), copy.getExecuteGrade()), _target(copy._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

const char*	ShrubberyCreationForm::FileOpenFail::what() const throw()
{
	return ("File open fail\n");
}

void	ShrubberyCreationForm::execute(const Bureaucrat& b) const
{
	checkExecute(b);
	std::ofstream ofs((_target + "_shrubbery").c_str());
	if (!ofs)
		throw (FileOpenFail());
	ofs << "      ccee88oo\n";
	ofs << "  C8O8O8Q8PoOb o8oo\n";
	ofs << " dOB69QO8PdUOpugoO9bD\n";
	ofs << "CgggbU8OU qOp qOdoUOdcb\n";
	ofs << "    6OuU  /p u gcoUodpP\n";
	ofs << "      \\\\//  /douUP\n";
	ofs << "        \\\\////\n";
	ofs << "         |||/\\\n";
	ofs << "         |||\\/\n";
	ofs << "         |||||\n";
	ofs << "   .....//||||\\....\n";
}