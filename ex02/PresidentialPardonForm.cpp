#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
Form("Presidential_Pardon", 25, 5),
target("No name")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
Form("Presidential_Pardon", 25, 5),
target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &_PresidentialPardon) : Form(_PresidentialPardon)
{
    this->target = _PresidentialPardon.target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm &_PresidentialPardon)
{
    if (this == &_PresidentialPardon)
        return (*this);
    this->target = _PresidentialPardon.target;
    return (*this);
}

std::string     PresidentialPardonForm::getTarget() const
{
    return (this->target);
}

void            PresidentialPardonForm::Act() const
{
    std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

void            PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (this->getIsSigned() == false)
        throw DoesNotSignedException();
    if (executor.getGrade() > 5)
        throw ExecuteGradeTooLowException();
    this->Act();
}
