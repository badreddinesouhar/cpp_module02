/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:55:17 by bsouhar           #+#    #+#             */
/*   Updated: 2023/09/14 13:43:23 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
  private:
    int _fixed;
    static const int i;
  public:
  Fixed();
  Fixed(const Fixed &fixed);
  ~Fixed();
  Fixed & operator = (const Fixed &fixed);
  void setRawBits(int const raw);
  int getRawBits() const;
};

#endif