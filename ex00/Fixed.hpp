/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:06:42 by bsouhar           #+#    #+#             */
/*   Updated: 2023/10/14 12:06:43 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    private:
        int _fixed;
        static const int i = 8;
    public:
        Fixed();
        Fixed(const Fixed& Fixed); 
        ~Fixed();
        Fixed& operator = (const Fixed&);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

# endif
