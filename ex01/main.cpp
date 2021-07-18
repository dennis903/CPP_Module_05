#include "Bureaucrat.hpp"
#include "Form.hpp"

int     main()
{
    std::cout << "========= test <signForm> =========" << std::endl;
    std::cout << "<Success case>" << std::endl;
    try
    {
        Bureaucrat buro("test1", 20);
        Form buro_form("test1_form", 50, 10);
        buro.signForm(buro_form);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "<Failed case>" << std::endl;
    try
    {
        Bureaucrat buro("test1_fail", 30);
        Form buro_form("test1_fail_form", 10, 5);
        buro.signForm(buro_form);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}