/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:50:50 by estruckm          #+#    #+#             */
/*   Updated: 2023/09/08 23:23:38 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	printColour("ScavTrap default constructor called", blue);
	printColour(" for ", blue);
	this->_energyPoints = 50;
	this->_hitPoints = 100;
	this->_damagePoints = 20;

	std::cout << "\n";
}
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name){
	printColour("ScavTrap constructor called", blue);
	printColour(" for ", blue);
	// printColour(getName(), blue);
	this->_name = name;
	this->_energyPoints = 50;
	this->_hitPoints = 100;
	this->_damagePoints = 20;
	// setEnergyPoints(50);
	// setHitPoints(100);
	// setDamagePoints(20);
	std::cout << "\n";
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy){
	*this = copy;
	std::cout << "ScavTrap copy constructor called\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src){
	this->_name = src._name;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_damagePoints = src._damagePoints;
	std::cout << "ScavTrap copy asignment onstructor called\n";
	return *this;
}
ScavTrap::~ScavTrap(){
	printColour("ScavTrap deconstructor called", red);
	printColour(" for ", red);
	printColour(getName(), red);
	std::cout << "\n";
}

void ScavTrap::guardGate(void){
	if (getEnergyPoints() <= 0){
		std::cout << "ScavTrap " << getName() << " doest not have enough energyPoints to perform anny attacks\n";
		return;
	}
	if (getHitPoints() <= 0){
		std::cout << "ScavTrap " << getName() << " doest not have enough hitPoints to perform anny attacks\n";
		return;
	}
	else{
		std::cout << "ScavTrap " << getName() << " is now in gate guarding mode\n";
		setEnergyPoints(getEnergyPoints() - 1);
	}
}

void ScavTrap::attack(const std::string &target){
	if (getEnergyPoints() <= 0){
		std::cout << "ScavTrap " << getName() << " doest not have enough energyPoints to perform anny attacks\n";
		return;
	}
	if (getHitPoints() <= 0){
		std::cout << "ScavTrap " << getName() << " doest not have enough hitPoints to perform anny attacks\n";
		return;
	}
	else{
		std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getDamagePoints() << " points of damage\n";
		setEnergyPoints(getEnergyPoints() - 1);
	}
}


unsigned int ScavTrap::getScavEnergy(){
	return _energyPoints;

}

unsigned int ScavTrap::getEnergy(){
	return this->_energyPoints;

}


