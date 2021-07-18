#ifndef FORM_HPP
# define FORM_HPP
# include <string>
# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class   Bureaucrat;

class   Form
{
    private:
        const       std::string name;
        bool        is_signed;
        const int   signGrade;
        const int   executeGrade;
    public:
        Form();
        Form(const std::string &name, const int signGrade, const int executeGrade);
        Form(const Form &_Form);
        ~Form();
        Form &operator = (const Form &_Form);
        std::string   getName() const;
        bool          getIsSigned() const;
        int           getSignGrade() const;
        int           getExecuteGrade() const;

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        void    beSigned(const Bureaucrat &_Bureaucrat);
};
std::ostream &operator << (std::ostream &out, const Form &_Form);
#endif