/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:24:58 by tlivroze          #+#    #+#             */
/*   Updated: 2024/02/18 02:38:42 by tlivroze         ###   ########.fr       */
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

	std::cout << "ahah\n";

    Animal *basic = new Dog();
    basic->setType("Original Dog");
    {
        Animal *tmp = basic;
        tmp->setType("Copied Dog"); 

        // If the name of basic is still "Original Dog", the copy was deep.
        // If the name of basic is now "Copied Dog", the copy was shallow.
        std::cout << "Name of basic: " << basic->getType() << std::endl;
    }
	delete basic;
	return (0);
}