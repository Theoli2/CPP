/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlivroze <tlivroze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:04:09 by tlivroze          #+#    #+#             */
/*   Updated: 2023/12/05 18:47:34 by tlivroze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

contact::contact(void)
{std::cout << "Constructor called" << std::endl;}

contact::~contact(void) {}

void contact::setfirstName(std::string input)
{this->firstName = input;}

void contact::setlastName(std::string input)
{this->lastName=input;}

void contact::setnickname(std::string input)
{this->nickname=input;}

void contact::setphoneNumber(std::string input)
{this->phoneNumber=input;}

void contact::setdarkestSecret(std::string input)
{this->darkestSecret=input;}

std::string contact::getfirstName(void)
{return(this->firstName);}

std::string contact::getlastName(void)
{return(this->lastName);}

std::string contact::getnickname(void)
{return(this->nickname);}

std::string contact::getphoneNumber(void)
{return(this->phoneNumber);}

std::string contact::getdarkestSecret(void)
{return(this->darkestSecret);}