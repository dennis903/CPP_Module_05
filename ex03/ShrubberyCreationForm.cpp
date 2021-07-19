#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : 
Form("Shrubbery", 145, 137),
target("No name") 
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &_target) :
Form("Shrubbery", 145, 137),
target(_target) 
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
file << "     /\\      \n";
file <<"     /\\       \n";
file <<"    /  \\      \n";
file <<"    /~~\\o     \n";
file <<"   /o   \\     \n";
file <<"  /~~*~~~\\    \n";
file <<" o/    o \\    \n";
file <<" /~~~~~~~~\\~` \n";
file <<"/__*_______\\  \n";
file <<"     ||        \n";
file <<"   \\====/     \n";
file <<"    \\__/      \n";
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

Form*   ShrubberyCreationForm::clone() const
{
    Form* Shrubbery = new ShrubberyCreationForm(this->target);
    return (Shrubbery);
}