/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 11:35:37 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/02 12:19:52 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name_param, Weapon &weapon_param): name(name_param), weapon(weapon_param)
{
}

void attack(void)
{
    std::cout << HumanA::name << "attacks with their" << 
}