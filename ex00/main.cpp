#include "Bureaucrat.hpp"


int     main()
{
    {
        std::cout << "========== over grade ===========" << std::endl;
        try
        {
            Bureaucrat buro("hyeolee", -1);
            std::cout << buro << std::endl;
        }
        catch(std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
        try
        {
            Bureaucrat buro("team1", 1);
            buro.IncrementGrade();
        }
        catch(std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }

    }
    {
        std::cout << "========== lower grade ===========" << std::endl;
        try
        {
            Bureaucrat buro("hyeolee", 188);
            std::cout << buro << std::endl;
        }
        catch(std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
        try
        {
            Bureaucrat buro("team2", 150);
            buro.DecrementGrade();
        }
        catch(std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    {
        std::cout << "=========== Copy constructor ========" << std::endl;
        try
        {
            Bureaucrat buro("why", 144);
            std::cout << buro << std::endl;
            Bureaucrat copy(buro);
        }
        catch (std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    return (0);
}