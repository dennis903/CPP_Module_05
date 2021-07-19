#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"
# include <fstream>
class   ShrubberyCreationForm : public Form
{
    private:
        std::string     target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string &_target);
        ShrubberyCreationForm(const ShrubberyCreationForm &_Shrubbery);
        ShrubberyCreationForm& operator = (const ShrubberyCreationForm &_Shrubbery);
        ~ShrubberyCreationForm();

        std::string getTarget() const;
        virtual void    execute(Bureaucrat const &executor) const;
        virtual void    Act() const;
};
#endif