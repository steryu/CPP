/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 17:09:07 by svan-ass          #+#    #+#             */
/*   Updated: 2023/01/10 13:13:58 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__
#include "ICharacter.hpp"

class Character : public ICharacter{
protected:
private:
	std::string name;
	// std::string	Materia[4];
public:
	Character();
	Character(std::string name);
	virtual ~Character();
	Character(const Character &other);
	Character& operator=(const Character &other);

	std::string const & getName() const;
};

#endif
