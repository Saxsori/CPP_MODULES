/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaljaber <aaljaber@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 03:20:00 by aaljaber          #+#    #+#             */
/*   Updated: 2022/10/09 16:42:00 by aaljaber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>
# define BBLK "\e[1;30m"
# define BRED "\e[1;31m"
# define BGRN "\e[1;32m"
# define BYEL "\e[1;33m"
# define BBLU "\e[1;34m"
# define BMAG "\e[1;35m"
# define BCYN "\e[1;36m"
# define BWHT "\e[1;37m"
# define BPUR "\e[0;35m"
# define DEFCOLO "\033[0m"

class Fixed
{
	private:
		int	_num;
		static const int _FractionalBits = 8;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &obj);
		Fixed &operator = (Fixed const &obj);
		Fixed(const int num);
		Fixed(const float dec);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float 	toFloat( void ) const;
		int 	toInt( void ) const;
		bool operator == (Fixed const &obj) const;
		bool operator >= (Fixed const &obj) const;
		bool operator <= (Fixed const &obj) const;
		bool operator != (Fixed const &obj) const;
		bool operator > (Fixed const &obj)const;
		bool operator < (Fixed const &obj)const;
		Fixed operator + (Fixed const &obj);
		Fixed operator - (Fixed const &obj);
		Fixed operator * (Fixed const &obj);
		Fixed operator / (Fixed const &obj);
		Fixed operator ++ ();
		Fixed operator -- ();
		Fixed operator ++ (int);
		Fixed operator -- (int);
		static Fixed &min (Fixed &f1, Fixed &f2);
		static Fixed const  &min (const Fixed &f1, const Fixed &f2);
		static Fixed &max (Fixed &f1, Fixed &f2);
		static Fixed const &max (const Fixed &f1, const Fixed &f2);
};

std::ostream & operator << (std::ostream &COUT, const Fixed &fixed);

#endif