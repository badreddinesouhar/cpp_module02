/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:14:43 by bsouhar           #+#    #+#             */
/*   Updated: 2023/10/14 14:12:35 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main() {
    Point a(0, 0);
    Point b(0, 1);
    Point c(1, 0);
    Point point(-0.25, -0.25);

    std::cout << "a = (" << a.getX() << ", " << a.getY() << ")" << std::endl;
    std::cout << "b = (" << b.getX() << ", " << b.getY() << ")" << std::endl;
    std::cout << "c = (" << c.getX() << ", " << c.getY() << ")" << std::endl;
    std::cout << "point = (" << point.getX() << ", " << point.getY() << ")" << std::endl;
    std::cout << "bsp(a, b, c, point) = " << a.bsp(a, b, c, point) << std::endl;
    return (0);
}