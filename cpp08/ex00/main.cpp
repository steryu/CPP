#include "easyfind.hpp"

int main(void)
{
    std::array<int, 4> ar{12, 24, 9, 16};
    try
    {
        easyfind(ar, 24);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        easyfind(ar, 0);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return(0);
}