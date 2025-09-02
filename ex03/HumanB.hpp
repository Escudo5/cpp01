/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 11:05:57 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/02 11:08:38 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
    public: 
        HumanB(std::string name);
        ~HumanB();

        std::string name;
        Weapon *weapon_1;




    private: 
    

    void setWeapon();
    void attack();
};