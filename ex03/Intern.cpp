#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &_Intern)
{
    (void)_Intern;
}

Intern::~Intern()
{
}

Intern& Intern::operator = (const Intern &_Intern)
{
    (void)_Intern;
    return (*this);
}

const char* Intern::CannotFindForm::what() const throw()
{
    return ("Cannot Find Form");
}

Form*   Intern::makeForm(const std::string &FormName, const std::string &target)
{
    std::string Forms[3] =
    {
        "Shrubbery",
        "Robotomy",
        "PresidentialPardon"
    };
    ShrubberyCreationForm   Shrubbery(target);
    RobotomyRequestForm     Robotomy(target);
    PresidentialPardonForm  Presidential(target);
    Form    *form[3] =
    {
        &Shrubbery,
        &Robotomy,
        &Presidential
    };

    for (int i = 0; i < 3; i++)
    {
        if (FormName.compare(Forms[i]) == 0)
        {
            std::cout << "Intern creates " << form[i]->getName() << std::endl;
            return (form[i]->clone());
        }
    }
    throw   CannotFindForm();
}