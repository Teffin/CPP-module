/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharrold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 19:17:09 by hharrold          #+#    #+#             */
/*   Updated: 2020/11/26 19:17:11 by hharrold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {
private:
	int fixedPointValue;
	static const int litteral = 8;
public:
	Fixed( void );
	Fixed( const int & value);
	Fixed( Fixed const &src);
	~Fixed( void );
	Fixed & operator=( Fixed const & rhs);
	int getRawBits( void ) const;
	void setRawBits(int const raw);
	void setLitteral(const int value);
};

#endif
