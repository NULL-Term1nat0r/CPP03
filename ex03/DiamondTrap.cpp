/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:53:35 by estruckm          #+#    #+#             */
/*   Updated: 2023/09/08 23:28:24 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : _name("default_clap_trap"){

	this->_name= "default_diamond";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = 50;

	// this->_energyPoints = ScavTrap::_energyPoints;
	this->_damagePoints = FragTrap::_damagePoints;
	std::cout << "fragtrap damage: " << FragTrap::_damagePoints << std::endl;

	printColour("DiamondTrap default constructor called", blue);
	printColour(" for ", blue);
	printColour(_name ,blue);
	std::cout << "\n";
}
// DiamondTrap::DiamondTrap(const std::string name) :  ClapTrap(name + "_clap_trap"),  ScavTrap(), FragTrap(){
DiamondTrap::DiamondTrap(const std::string name){

	this->_name = name;
	this->_hitPoints = this->FragTrap::_hitPoints;
	// this->_energyPoints = this->ScavTrap::_energyPoints;

	this->_damagePoints = this->FragTrap::_damagePoints;
	std::cout << "fragtrap damage: " << FragTrap::_damagePoints << std::endl;


	printColour("DiamondTrap constructor called", blue);
	printColour(" for ", blue);
	printColour(this->_name, blue);
	std::cout << "\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) :  ClapTrap(copy), ScavTrap(copy), FragTrap(copy){
	*this = copy;
	std::cout << "DiamondTrap Copy Constructor called\n";
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src){
	this->_name = src._name + "_clap_trap";
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_damagePoints = src._damagePoints;
	std::cout << "DiamondTrap copy asignment onstructor called\n";
	return *this;
}

DiamondTrap::~DiamondTrap(){

	printColour(" DiamondTrap deconstructor called", red);
	printColour(" for ", red);
	printColour(_name, red);
	std::cout << "\n";
}

void DiamondTrap::whoAmI(void){

	std::cout << "Diamond Trap " << _name << " says hello to " << ClapTrap::getName() << std::endl;
}

void DiamondTrap::getDataFromPlayer2(){
	std::cout << "PlayerData:\n";
	std::cout << "name: " << DiamondTrap::_name << std::endl;
	std::cout << "hitPoints: " << DiamondTrap::_hitPoints << std::endl;
	std::cout << "damagePoints: " << DiamondTrap::_damagePoints << std::endl;
	std::cout << "energyPoints: " << DiamondTrap::_energyPoints << std::endl;
}
