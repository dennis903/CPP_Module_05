#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <cstdlib>
# include <ctime>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string &_target);
        RobotomyRequestForm(const RobotomyRequestForm &_Robotomy);
        ~RobotomyRequestForm();
        RobotomyRequestForm& operator = (const RobotomyRequestForm &_Robotomy);
        std::string     getTarget() const;
        virtual void    execute(Bureaucrat const &executor) const;
        virtual void    Act() const;
        virtual Form*   clone() const;
};
#endif
