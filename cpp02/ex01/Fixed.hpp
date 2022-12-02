/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-ass <svan-ass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:41:18 by svan-ass          #+#    #+#             */
/*   Updated: 2022/12/02 11:21:09 by svan-ass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>


class Fixed{
private:
	int 				FixedPoint;
	static const int	FractionalBits = 8;
public:
	Fixed();
	Fixed(const int nb);
	Fixed(const float f);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	Fixed(const Fixed &obj);
	Fixed& operator= (const Fixed& other);
	float 	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& f);