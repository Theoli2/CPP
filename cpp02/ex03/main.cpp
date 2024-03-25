/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:42:23 by tlivroze          #+#    #+#             */
/*   Updated: 2023/12/03 22:39:46 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
	Point a(0, 0);
	Point b(0, 5);
	Point c(5, 0);
	Point p(200, 2);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "p = " << p << std::endl;
	std::cout << "is_inside(a, b, c, p) = " << is_inside(a, b, c, p) << std::endl;
return 0;
}