/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:14:37 by svan-ass          #+#    #+#             */
/*   Updated: 2022/10/24 14:28:17 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; j < strlen(argv[i]); j++)
			std::cout << (char)toupper(argv[i][j]);
	}
	std::cout << "\n";
	return (0);
}