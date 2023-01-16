#include "convert.hpp"

int main(int argc, char **argv)
{
    if (argc != 2){
        std::cout << "please input a char, int, float or decimal" << std::endl;
        return (0);
    }
    std::string input = argv[1];
    convert num;
    num.conversion(input);
    return (0);
}