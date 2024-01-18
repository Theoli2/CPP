/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:24:58 by tlivroze          #+#    #+#             */
/*   Updated: 2024/01/13 22:03:05 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << std::endl;
std::cout << i->getType() << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
delete meta;
delete j;
delete i;

const WrongAnimal* wrongMeta = new WrongAnimal();
const WrongAnimal* wrongI = new WrongCat();
const WrongCat* wrongJ = new WrongCat();
std::cout << wrongI->getType() << " " << std::endl;
wrongI->makeSound();
wrongMeta->makeSound();
wrongJ->makeSound();
delete wrongMeta;
delete wrongI;
delete wrongJ;

return 0;
}