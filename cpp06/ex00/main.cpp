/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:48:41 by svan-ass          #+#    #+#             */
/*   Updated: 2023/01/31 14:00:47 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int main(int argc, char **argv)
{
    if (argc != 2){
        std::cout << "please input a char, int, float or decimal" << std::endl;
        return (0);
    }
    std::string input = argv[1];
	if (input == "nan" || input == "-inf" || input == "+inf"){
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << input << "f" << std::endl;
		std::cout << "double: " << input << std::endl;
		return (0);
	}
	if (input == "nanf" || input == "-inff" || input == "+inff"){
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << input << std::endl;
		std::cout << "double: " << input << std::endl;
		return (0);
	}
    convert num;
    num.conversion(input);

	std::cout << std::endl;
    return (0);
}

//OVERFLOW