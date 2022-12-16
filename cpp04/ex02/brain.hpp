/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:44:37 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/16 12:51:00 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__
#include <iostream>

class Brain{
private:
public:
	Brain();
	virtual ~Brain();
	Brain(const Brain &other);
	Brain& operator=(const Brain &other);
	std::string ideas[100];
	void		setIdea(int i, std::string);
	std::string	getIdea(int i);
};

#endif