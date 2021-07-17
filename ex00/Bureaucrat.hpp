#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>
# include <exception>

class   Bureaucrat
{
    private:
        const std::string   name;
        int                 grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string &_name, int _grade);
        Bureaucrat(const Bureaucrat &_Bureaucrat);
        ~Bureaucrat();
        Bureaucrat &operator = (const Bureaucrat &_Bureaucrat);
        const std::string getName() const;
        int getGrade() const;
        void    IncrementGrade();
        void    DecrementGrade();
        class   GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class   GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};
std::ostream& operator << (std::ostream& out, const Bureaucrat &_Bureaucrat);
#endif