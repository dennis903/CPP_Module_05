#include "Form.hpp"

Form::Form() : name("No name"), is_signed(false), signGrade(30), executeGrade(10)
{
}

Form::Form(const std::string &name, const int signGrade, const int executeGrade)
: name(name),
is_signed(false),
signGrade(signGrade),
executeGrade(executeGrade)
{
    if (signGrade < 1 || executeGrade < 1)
        throw Form::GradeTooHighException();
    if (signGrade > 150 || executeGrade > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &_Form) :
name(_Form.name),
is_signed(_Form.is_signed),
signGrade(_Form.signGrade),
executeGrade(_Form.executeGrade)
{
}

Form::~Form()
{
}

Form& Form::operator = (const Form &_Form)
{
    this->is_signed = _Form.is_signed;
    return (*this);
}

std::string Form::getName() const
{
    return (this->name);
}

bool        Form::getIsSigned() const
{
    return (this->is_signed);
}

int         Form::getSignGrade() const
{
    return (this->signGrade);
}

int         Form::getExecuteGrade() const
{
    return (this->executeGrade);
}

const char * Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char * Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too Low");
}

const char * Form::DoesNotSignedException::what() const throw()
{
    return ("Does not signed");
}

const char * Form::ExecuteGradeTooLowException::what() const throw()
{
    return ("Executable grade is too Low");
}

void        Form::beSigned(const Bureaucrat &_Bureaucrat)
{
    if (_Bureaucrat.getGrade() <= this->signGrade && this->is_signed == false)
    {
        this->is_signed = true;
    }
    else
        throw GradeTooLowException();
}

std::ostream& operator << (std::ostream& out, const Form &_Form)
{
    out << _Form.getName() << ", Form signGrade :" << _Form.getSignGrade() << ", executeGrade : " << _Form.getExecuteGrade()
    << " is_signed : " << _Form.getIsSigned();
    return (out);
}