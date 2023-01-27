#include "Span.hpp"

int main(void)
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "longest span: " << sp.longestSpan() << std::endl;
    std::cout << std::endl;
    Span Sp = Span(5);
    Sp.addNumber(4);
    try
    {
        std::cout << "longest span: " << Sp.longestSpan() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    Sp.addAllNumbers(100);
    Sp.print();
    try
    {
        Sp.addNumber(12);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "shortest span: " << Sp.shortestSpan() << std::endl;
    std::cout << "longest span: " << Sp.longestSpan() << std::endl;
    std::cout << std::endl;

    Span Sp1(10000);
    Sp1.addAllNumbers(RAND_MAX);
    std::cout << "shortest span: " << Sp1.shortestSpan() << std::endl;
    std::cout << "longest span: " << Sp1.longestSpan() << std::endl;
    std::cout << std::endl;
    return (0);
}