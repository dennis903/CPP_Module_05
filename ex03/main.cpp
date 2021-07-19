#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int     main()
{
    std::cout <<"============= Intern create Shrubbery ============" << std::endl;
    try
    {
        Intern internship;
        Bureaucrat Jimmy("Jimmy", 123);
        Form* Form = internship.makeForm("Shrubbery", "home");

        Jimmy.signForm(*Form);
        Jimmy.executeForm(*Form);
        delete Form;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "============== Intern create RobotomyRequest" << std::endl;
    try
    {
        Intern internship;
        Bureaucrat Tom("Tom", 23);
        Form* Form = internship.makeForm("Robotomy", "White house");

        Tom.signForm(*Form);
        Tom.executeForm(*Form);
        delete Form;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "============== Intern create PresidentialPardon =============" << std::endl;
    try
    {
        Intern internship;
        Bureaucrat Obama("Obama", 1);
        Form* Form = internship.makeForm("PresidentialPardon", "White house");

        Obama.signForm(*Form);
        Obama.executeForm(*Form);
        delete Form;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "============== Intern cannot find form ============" << std::endl;
    try
    {
        Intern internship;
        Bureaucrat Merkel("Merkel", 32);
        Form* Form = internship.makeForm("Prime_Minister", "Chancellery");

        Merkel.signForm(*Form);
        Merkel.executeForm(*Form);
        delete Form;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}