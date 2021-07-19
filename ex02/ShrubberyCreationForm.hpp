#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"
class   ShrubberyCreationForm : public Form
{
    private:
        std::string     target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string &_target);
        ShrubberyCreationForm(const ShrubberyCreationForm &_Shrubbery);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm& opreator = (const ShrubberyCreationForm &_Shrubbery);
        std::string getTarget() const;
        virtual void    execute(Bureaucrat const &executor) const;
};
#endif