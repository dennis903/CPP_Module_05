#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : target("No name"), Form("Robotomy", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &_target) : target(_target), Form("Robotomy", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &_Robotomy) : target(_Robotomy.target), Form(_Robotomy)
{
}

RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm &_Robotomy)
{
    if (this == &_Robotomy)
        return (*this);
    this->target = _Robotomy.target;
    return (*this);
}

std::string     RobotomyRequestForm::getTarget() const
{
    return (this->target);
}

void        RobotomyRequestForm::Act() const
{
    int     rand_num;

    std::cout << "drrrrrrrrrrrr........" << std::endl;
    srand(time(NULL) * rand());
    rand_num = rand() % 2;
    try
    {
        if (rand_num == 0)
            throw "failed";
        std::cout << this->target << " has been robotomized successfully" << std::endl;
    }
    catch (const char *)
    {
        std::cerr << this->target << " failed to robotomized" << std::endl;
    }
}

void        RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (this->getIsSigned() == false)
        throw DoesNotSignedException();
    if (executor.getGrade() > 45)
        throw ExecuteGradeTooLowException();
    Act();
}