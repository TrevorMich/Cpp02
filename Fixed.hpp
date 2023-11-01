/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioduwole <ioduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:29:14 by ioduwole          #+#    #+#             */
/*   Updated: 2023/11/01 19:39:37 by ioduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# 	include <iostream>
#	include <math.h>

class Fixed {
private:
	int 				_fixedPoint;
	static const int	_fracBits;

public:
	Fixed();
	Fixed(Fixed const &other);
	Fixed(const int integer);
	Fixed(const float fpNumber);
	~Fixed();
	
	Fixed				&operator=(Fixed const &other);
	float				toFloat( void ) const;
	int					toInt( void ) const;
	int					getRawBits( void ) const;
	void				setRawBits(int const raw);
	bool				operator>(Fixed const &other) const;
	bool				operator<(Fixed const &other) const;
	bool				operator<=(Fixed const &other) const;
	bool				operator>=(Fixed const &other) const;
	bool				operator==(Fixed const &other) const;
	bool				operator!=(Fixed const &other) const;
	Fixed				operator+(Fixed const &other) const;
	Fixed				operator-(Fixed const &other) const;
	Fixed				operator*(Fixed const &other) const;
	Fixed				operator/(Fixed const &other) const;
	Fixed				&operator++(void);
	Fixed				&operator--(void);
	Fixed				operator++(int);
	Fixed				operator--(int);
	static Fixed		&min(Fixed &point_1, Fixed &point_2);
	static const Fixed	&min(const Fixed &point_1, const Fixed &point_2);
	static Fixed		&max(Fixed &point_1, Fixed &point_2);
	static const Fixed	&max(const Fixed &point_1, const Fixed &point_2);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed);

#endif