/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:24:58 by tlivroze          #+#    #+#             */
/*   Updated: 2024/01/13 22:17:23 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal *animals[10];
	for (int i = 0; i < 5; i++)
	{animals[i] = new Dog();}
	for (int i = 5; i < 10; i++)
	{animals[i] = new Cat();}
	for (int i = 0; i < 10; i++)
	{animals[i]->makeSound();}
	for (int i = 0; i < 10; i++)
	{delete animals[i];}

    Dog basic;
    basic.setType("Original Dog");
    {
        Dog tmp = basic;
        tmp.setType("Copied Dog"); 

        // If the name of basic is still "Original Dog", the copy was deep.
        // If the name of basic is now "Copied Dog", the copy was shallow.
        std::cout << "Name of basic: " << basic.getType() << std::endl;
    }
	return (0);
}