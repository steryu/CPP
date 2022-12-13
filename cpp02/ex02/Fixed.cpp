/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:40:09 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/02 12:42:40 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	FixedPoint = 0;
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb){
	FixedPoint = (int)nb * (int)(1 << FractionalBits);
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f){
	FixedPoint = (round)(f * (1 << FractionalBits));
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(){
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : FixedPoint(other.FixedPoint){
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator= (const Fixed& other){
	FixedPoint = other.FixedPoint;
	// std::cout << "Copy assignment operator called" << std::endl;
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
	// std::cout << "getRawBits member function called" << std::endl;
	return (FixedPoint);
}

void	Fixed::setRawBits(int const raw){
	FixedPoint = raw;
}

bool	Fixed::operator>(Fixed other) const{
	return (FixedPoint > other.FixedPoint);
}

bool	Fixed::operator<(Fixed other) const{
	return (FixedPoint < other.FixedPoint);
}

bool	Fixed::operator>=(Fixed other) const{
	return (FixedPoint >= other.FixedPoint);
}

bool	Fixed::operator<=(Fixed other) const{
	return (FixedPoint <= other.FixedPoint);
}

bool	Fixed::operator==(Fixed other) const{
	return (FixedPoint == other.FixedPoint);
}

bool	Fixed::operator!=(Fixed other) const{
	return (FixedPoint != other.FixedPoint);
}

Fixed Fixed::operator+(Fixed other) const{
	Fixed raw;
	raw.setRawBits(FixedPoint + other.FixedPoint);
	return (raw);
}

Fixed Fixed::operator-(Fixed other) const{
	Fixed raw;
	raw.setRawBits(FixedPoint - other.FixedPoint);
	return (raw);
}

Fixed Fixed::operator*(Fixed other) const{

	return (FixedPoint * other.FixedPoint);
}

Fixed Fixed::operator/(Fixed other) const{
	return (toFloat() / other.toFloat());
}

Fixed Fixed::operator++(void){
	FixedPoint = FixedPoint + 1;
	return (*this);
}

Fixed Fixed::operator++(int){
	Fixed	nb;
	nb = *this;
	FixedPoint = FixedPoint + 1;
	return (nb);
}

Fixed Fixed::operator--(void){
	FixedPoint = FixedPoint - 1;
	return (*this);
}

Fixed Fixed::operator--(int){
	Fixed	nb;
	nb = *this;
	FixedPoint = FixedPoint - 1;
	return (nb);
}

Fixed& Fixed::min(Fixed &n1, Fixed &n2){
	if (n1 < n2)
		return (n1);
	return (n2);
}

const Fixed& Fixed::min(const Fixed &n1, const Fixed &n2){
	if (n1 < n2)
		return (n1);
	return (n2);
}

Fixed& Fixed::max(Fixed &n1, Fixed &n2){
	if (n1 > n2)
		return (n1);
	return (n2);
}

const Fixed& Fixed::max(const Fixed &n1, const Fixed &n2){
	if (n1 > n2)
		return (n1);
	return (n2);
}