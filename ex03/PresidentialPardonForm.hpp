#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"
class PresidentialPardonForm : public Form
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm(const PresidentialPardonForm &_PresidentialPardon);
        ~PresidentialPardonForm();
        PresidentialPardonForm &operator = (const PresidentialPardonForm &_PresidentialPardon);
        std::string     getTarget() const;
        virtual void    execute(Bureaucrat const &executor) const;
        virtual void    Act() const;
        virtual Form*   clone() const;
};
#endif