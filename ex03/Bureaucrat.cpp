#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("No name"), grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string &_name, int _grade) : name(_name), grade(_grade)
{
    if (this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &_Bureaucrat) :
name(_Bureaucrat.name),
grade(_Bureaucrat.grade)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat &_Bureaucrat)
{
    if (this == &_Bureaucrat)
        return (*this);
    this->grade = _Bureaucrat.grade;
    return (*this);
}

const std::string     Bureaucrat::getName() const
{
    return (this->name);
}

int     Bureaucrat::getGrade() const
{
    return (this->grade);
}

void    Bureaucrat::IncrementGrade()
{
    if (this->grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
}

void    Bureaucrat::DecrementGrade()
{
    if (this->grade == 150)
        throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too Low");
}

void    Bureaucrat::signForm(Form &_Form) const
{
    try
    {
        _Form.beSigned(*this);
        std::cout << this->name << " signs " << _Form.getName() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << this->name << " cannot sign " << _Form.getName() << " because " << e.what() << std::endl; 
    }
}

void    Bureaucrat::executeForm(Form const &_form)
{
    try
    {
        _form.execute(*this);
        std::cout << this->name << " executes " << _form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

std::ostream& operator << (std::ostream& out, const Bureaucrat &_Bureaucrat)
{
    out << _Bureaucrat.getName() << ", bureaucrat grade " << _Bureaucrat.getGrade() << ".";
    return (out);
}