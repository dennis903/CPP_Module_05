#ifndef INTERN_HPP
# define INTERN_HPP
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
class   Intern
{
    public:
        Intern();
        Intern(const Intern &_Intern);
        ~Intern();
        Intern &operator = (const Intern &_Intern);
        Form* makeForm(const std::string &FormName, const std::string &target);
        class   CannotFindForm : public std::exception
        {
            virtual const char *what() const throw();
        };
};
#endif