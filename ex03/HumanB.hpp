/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 11:05:57 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/02 12:24:33 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    public: 
        HumanB(std::string name);
        ~HumanB();



    void setWeapon(Weapon *newWeapon);
    void attack();


    private: 
        Weapon *weapon_1;
        std::string name;
        

};


#endif