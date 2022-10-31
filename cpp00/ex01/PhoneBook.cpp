/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:46:57 by svan-ass          #+#    #+#             */
/*   Updated: 2022/10/28 15:01:32 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	print_title() {
	std::cout << "\033[0;35m██████╗ ██╗  ██╗ ██████╗ ███╗   ██╗███████╗██████╗  ██████╗  ██████╗ ██╗ ██╗" << std::endl;
	std::cout << "██╔══██╗██║  ██║██╔═══██╗████╗  ██║██╔════╝██╔══██╗██╔═══██╗██╔═══██╗██║ ██╔╝" << std::endl;
	std::cout << "██████╔╝███████║██║   ██║██╔██╗ ██║█████╗  ██████╔╝██║   ██║██║   ██║█████╔╝ " << std::endl;
	std::cout << "██╔═══╝ ██╔══██║██║   ██║██║╚██╗██║██╔══╝  ██╔══██╗██║   ██║██║   ██║██╔═██╗ " << std::endl;
	std::cout << "██║     ██║  ██║╚██████╔╝██║ ╚████║███████╗██████╔╝╚██████╔╝╚██████╔╝██║  ██╗" << std::endl;
	std::cout << "╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝\033[0;37m" << std::endl;

}

void	exitMessage(std::string message) {
	std::cout << message << std::endl;
	exit(EXIT_SUCCESS);
} 

void	PhoneBook::Add() {
	static int	i;
	pbook.Contacts[i].New(i);
	i++;
	if (i == 8)
		i = 0;
}

void	PrintFirstRow() {
	std::cout << "Contact List:" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(10) << "Index";
	std::cout << "|" << "First Name";
	std::cout << "|" << std::setw(10) << "Last Name";
	std::cout << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
}

std::string	CheckIndex(std::string str) {
	do { std::getline(std::cin, str);
		if (str.size() != 1 || str == "8" || str == "9" || isdigit((str[0])) == 0)
			std::cout << "Please input a single digit between 0 and 7" << std::endl;
		if (std::cin.eof() == 1)
			exit(EXIT_SUCCESS);
	} while (str.size() != 1 || str == "8" || str == "9" || isdigit((str[0])) == 0);
	return (str);
}

void	PhoneBook::SavedContact(int num) {
	std::string str;
	std::cout << "\nChoose an index of a contact to display:" << std::endl;
	str = CheckIndex(str);
	int index = stoi(str);
	pbook.Contacts[index].Display(index);
}

void	PhoneBook::Search() {
	int	num = 0;
	PrintFirstRow();
	for (int i = 0; i < 8; i++)
		num += pbook.Contacts[i].Print(i);
	std::cout << "---------------------------------------------" << std::endl;
	pbook.SavedContact(num);
}

int	main(int argc, char **argv) {
	std::string input;

	if (argc != 1)
		exitMessage("Error: to many arguments");
	print_title();
	std::cout << "Welcome to the Phonebook, please enter one of the following commands:" << std::endl;
	std::cout << "ADD, SEARCH or EXIT\n" << std::endl;
	while (1)
	{
		std::getline(std::cin, input);
		if (std::cin.eof() == 1)
			exit(EXIT_SUCCESS);
		if (input == "ADD")
			pbook.Add();
		else if (input == "SEARCH")
			pbook.Search();
		else if (input == "EXIT")
			exitMessage("Exiting PhoneBook :3.");
		else
			std::cout << "The Phonebook only accept ADD, SEARCH of EXIT." << std::endl;
	}
	return (0);
}
