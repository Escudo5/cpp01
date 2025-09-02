/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:50:14 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/02 16:18:20 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : type(type)
{   
}
Weapon::~Weapon()
{
}

const std::string &Weapon::getType()const
{
    return(type);
}

void Weapon::setType(const std::string &newType)
{
    type = newType;
}
