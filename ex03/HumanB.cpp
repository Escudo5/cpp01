/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 12:39:18 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/02 16:20:29 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"


HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon_1 = NULL;
}
HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &newWeapon)
{
    weapon_1 = &newWeapon;
}

void HumanB::attack()
{
    if(weapon_1)
        std::cout << name << " attacks with their " << weapon_1->getType() << std::endl;
    else 
        std::cout << name << " has no weapon " << std::endl;
}