/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:38:17 by tlivroze          #+#    #+#             */
/*   Updated: 2023/12/08 23:18:41 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {

Fixed a(Fixed(2));
Fixed b( Fixed( 5 ) * Fixed( 2 ) );
Fixed c(a * b);
std::cout << "a:" << a << std::endl;
std::cout << "b:" << b << std::endl;
std::cout << "c:" << c << std::endl;
c = a - b;
std::cout << "a:" << a << std::endl;
std::cout << "b:" << b << std::endl;
std::cout << "c:" << c << std::endl;
c = a + b;
std::cout << "a:" << a << std::endl;
std::cout << "b:" << b << std::endl;
std::cout << "c:" << c << std::endl;
c = a / b;
std::cout << "a:" << a << std::endl;
std::cout << "b:" << b << std::endl;
std::cout << "c:" << c << std::endl;
std::cout << ++a << std::endl;
std::cout << "a:" << a << std::endl;
std::cout << a++ << std::endl;
std::cout << "a:" << a << std::endl;
std::cout << "b:" << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
std::cout << (a < b ? "Yes" : "No") << std::endl;
std::cout << (a <= b ? "Yes" : "No") << std::endl;
std::cout << (a >= b ? "Yes" : "No") << std::endl;
std::cout << (a <= b ? "Yes" : "No") << std::endl;
std::cout << (a == b ? "Yes" : "No") << std::endl;
std::cout << (a != b ? "Yes" : "No") << std::endl;

return 0;
}