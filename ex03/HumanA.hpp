/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 11:02:29 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/02 12:30:55 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(const std::string &name, Weapon &weapon);
        ~HumanA();

        void attack(void);



    private: 
        Weapon &weapon;
        std::string name;



    
};


#endif