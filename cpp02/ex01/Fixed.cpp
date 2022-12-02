/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:40:09 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/02 11:21:11 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	FixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb){
	FixedPoint = (int)nb * (int)(1 << FractionalBits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f){
	FixedPoint = (round)(f * (1 << FractionalBits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : FixedPoint(other.FixedPoint){
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator= (const Fixed& other){
	FixedPoint = other.FixedPoint;
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

float 	Fixed::toFloat(void) const{
	return (float)(FixedPoint / (float)(1 << FractionalBits));
}

int		Fixed::toInt(void) const{
	return (int)(FixedPoint >> FractionalBits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& f){
	out << f.toFloat();
	return (out);
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (FixedPoint);
}

void	Fixed::setRawBits(int const raw){
	FixedPoint = raw;
}
