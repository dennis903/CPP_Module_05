#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : target("No name"), Form("Shrubbery", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &_target) : target(_target), Form("Shrubbery", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &_Shrubbery) : Form(_Shrubbery)
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

void    ShrubberyCreationForm::Act() const
{
    std::ofstream file(this->target + "_Shrubbery");
file << "     /\\      ";
file <<"     /\\       ";
file <<"    /  \\      ";
file <<"    /~~\\o     ";
file <<"   /o   \\     ";
file <<"  /~~*~~~\\    ";
file <<" o/    o \\    ";
file <<" /~~~~~~~~\\~` ";
file <<"/__*_______\\  ";
file <<"     ||        ";
file <<"   \\====/     ";
file <<"    \\__/      ";
    file.close();
}

void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (this->getIsSigned() == false)
        throw DoesNotSignedException();
    if (executor.getGrade() > 137)
        throw ExecuteGradeTooLowException();
    this->Act();
}