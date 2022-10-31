/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:26:32 by svan-ass          #+#    #+#             */
/*   Updated: 2022/10/31 12:50:25 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	Index = -1;
	FirstName = "Empty";
	LastName = "Empty";
	Nickname = "Empty";
	PhoneNumber = "Empty";
	DarkestSecret = "Empty";
}

void Contact::New(int i) {
	Index = i;
	std::cout << "Adding a new contact" << std::endl;
	std::cout << "First Name: " << std::endl;
	do { std::getline(std::cin, FirstName);
		if (std::cin.eof() == 1)
			exit(EXIT_SUCCESS);
	} while (FirstName == "");
	std::cout << "Last Name: " << std::endl;
	do { std::getline(std::cin, LastName);
		if (std::cin.eof() == 1)
			exit(EXIT_SUCCESS);
	} while (LastName == "");
	std::cout << "Nickname: " << std::endl;
	do { std::getline(std::cin, Nickname);
		if (std::cin.eof() == 1)
			exit(EXIT_SUCCESS);
	} while (Nickname == "");
	std::cout << "Phone Number: " << std::endl;
	do { std::getline(std::cin, PhoneNumber);
		if (std::cin.eof() == 1)
			exit(EXIT_SUCCESS);
	} while (PhoneNumber == "");
	std::cout << "Darkest Secret: " << std::endl;
	do { std::getline(std::cin, DarkestSecret);
		if (std::cin.eof() == 1)
			exit(EXIT_SUCCESS);
	} while (DarkestSecret == "");
	std::cout << "\n\033[1;37mThank you!\033[0;37m\n" << std::endl;
}

std::string	Truncate(std::string str) {
	if (str.size() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return (str);
}

int	Contact::PrintAll(int i) {
	if (FirstName == "Empty")
		return (0);
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(10) << i;
	std::cout << "|" << std::setw(10) << Truncate(FirstName);
	std::cout << "|" << std::setw(10) << Truncate(LastName);
	std::cout << "|" << std::setw(10) << Truncate(Nickname);
	std::cout << "|" << std::setw(10) << Truncate(PhoneNumber);
	std::cout << "|" << std::setw(10) << Truncate(DarkestSecret) << "|" << std::endl;
	return (1);
}

int	Contact::Print(int i) {
	if (FirstName == "Empty")
		return (0);
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(10) << i;
	std::cout << "|" << std::setw(10) << Truncate(FirstName);
	std::cout << "|" << std::setw(10) << Truncate(LastName);
	std::cout << "|" << std::setw(10) << Truncate(Nickname) << "|" << std::endl;
	return (1);
}

void	Contact::Display(int index) {
	if (Index == - 1)
	{
		std::cout << "There is no contact saved at that index" << std::endl;
		return ;
	}
	std::cout << "Contact List:" << std::endl;
	std::cout << "-------------------------------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(10) << "Index";
	std::cout << "|" << "First Name";
	std::cout << "|" << std::setw(10) << "Last Name";
	std::cout << "|" << std::setw(10) << "Nickname";
	std::cout << "|" << std::setw(10) << Truncate("Phone Number");
	std::cout << "|" << std::setw(10) << Truncate("Darkest Secret") << "|" << std::endl;
	std::cout << "----------------------";
	PrintAll(index);
	std::cout << "-------------------------------------------------------------------\n" << std::endl;
}