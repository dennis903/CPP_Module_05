#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int     main()
{
    std::cout << "=============ShrubberyCreationForm test=============" << std::endl;
    try
    {
        std::cout << "< Buro cannot be signed >" << std::endl;
        Bureaucrat failed("hyeolee", 146);
        ShrubberyCreationForm Shrubbery("home");
        failed.signForm(Shrubbery);
        failed.executeForm(Shrubbery);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << "< Buro is signed but cannot execute >" << std::endl;
        Bureaucrat failed2("hyeolee", 143);
        ShrubberyCreationForm Shrubbery("White house");
        failed2.signForm(Shrubbery);
        failed2.executeForm(Shrubbery);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "<Buro is success to execute>" << std::endl;
    try
    {
        Bureaucrat success("hyeolee", 133);
        ShrubberyCreationForm Shrubbery("Blue house");
        success.signForm(Shrubbery);
        success.executeForm(Shrubbery);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "=============RobotomyRequestForm==============" << std::endl;
    try
    {
        std::cout << "John's grade : 53" << std::endl;
        RobotomyRequestForm Robotomy("home");
        Bureaucrat John("John", 53);
        John.signForm(Robotomy);
        John.executeForm(Robotomy);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << "Micheal's grade : 33" << std::endl;
        RobotomyRequestForm Robotomy("home");
        Bureaucrat Micheal("Micheal", 33);
        Micheal.signForm(Robotomy);
        Micheal.executeForm(Robotomy);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "==============PresidentialPardonForm===========" << std::endl;
    try
    {
        std::cout << "Obama's grade : 26" << std::endl;
        PresidentialPardonForm Presidential("White house");
        Bureaucrat Obama("Obama", 26);
        Obama.signForm(Presidential);
        Obama.executeForm(Presidential);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << "Trump's grade : 4" << std::endl;
        PresidentialPardonForm Presidential("White house");
        Bureaucrat Trump("Trump", 4);
        Trump.signForm(Presidential);
        Trump.executeForm(Presidential);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}