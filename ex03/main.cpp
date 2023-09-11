/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estruckm <estruckm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 12:31:31 by estruckm          #+#    #+#             */
/*   Updated: 2023/09/11 14:38:16 by estruckm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int main() {

  // ClapTrap claptrap("claptrap");
  DiamondTrap diamondtrap("diamondtrap");
  // FragTrap fragtrap("fragtrap");
  // ScavTrap scavtrap("scavfrag");
  // claptrap.getDataFromPlayer();
  // fragtrap.getDataFromPlayer();
  // claptrap.getDataFromPlayer();
  // std::cout << "name: " << diamondtrap.getDiamondName() << std::endl;
		std::cout << "Attack:" << diamondtrap.getDamagePoints() << std::endl;
		std::cout << "Hit: " << diamondtrap.getHitPoints() << std::endl;
		std::cout << "Energy: " << diamondtrap.getEnergyPoints() << std::endl;
		std::cout << "Clap name: " << diamondtrap.getName() << std::endl;
  // diamondtrap.getDataFromPlayer2();
  // fragtrap.getDataFromPlayer();
  // scavtrap.getDataFromPlayer();
  // diamond1.getDataFromPlayer2();



  // FragTrap frag("Jeremy Fragrance");
  // std::cout << "\n\n";

  // frag.highFivesGuys();
  // frag.attack("chicken");
  // frag.takeDamage(10);
  // frag.beRepaired(10);
  // std::cout << "\n\n";

  // // Test ScavTrap
  // ScavTrap scav("monsieur");
  // std::cout << "\n\n";

  // scav.guardGate();
  // scav.attack("kartoschka");
  // scav.takeDamage(10);
  // scav.beRepaired(10);

  // std::cout << "\n\n";
  return 0;
}
