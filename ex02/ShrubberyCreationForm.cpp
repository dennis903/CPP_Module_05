#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : target("No name")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &_target) : target(_target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &_Shrubbery)
{
    this->target = _Shrubbery.target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm &_Shrubbery)
{
    if (this == &_Shrubbery)
        return (*this);
    this->target = _Shrubbery.target;
    return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
    return (this->target);
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (this->getIsSigned() == false)
        throw DoesNotSignedException();
    if (executor.getGrade() > 137)
        throw ExecuteGradeTooLowException();
}