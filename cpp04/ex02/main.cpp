/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:24:58 by tlivroze          #+#    #+#             */
/*   Updated: 2024/01/13 22:37:10 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	AAnimal *animals[10];
	for (int i = 0; i < 5; i++)
	{animals[i] = new Dog();}
	for (int i = 5; i < 10; i++)
	{animals[i] = new Cat();}
	for (int i = 0; i < 10; i++)
	{animals[i]->makeSound();}
	for (int i = 0; i < 10; i++)
	{delete animals[i];}
	return (0);
}

// test to verify that the AAnimal class is abstract
// int main()
// {
// 	AAnimal *animals[10];
// 	for (int i = 0; i < 5; i++)
// 	{animals[i] = new AAnimal();}
// 	for (int i = 5; i < 10; i++)
// 	{animals[i] = new Cat();}
// 	for (int i = 0; i < 10; i++)
// 	{animals[i]->makeSound();}
// 	for (int i = 0; i < 10; i++)
// 	{delete animals[i];}
// 	return (0);
// }