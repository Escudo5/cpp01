/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 11:02:29 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/02 11:43:44 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
    public:
        std::string name;
        Weapon &weapon;
        HumanA(const std::string name, Weapon &weapon);
        ~HumanA();




    private: 


    void attack(void);


    
};