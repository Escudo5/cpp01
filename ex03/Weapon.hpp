/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:50:05 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/02 11:23:07 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP


#include <string>
#include <iostream>

class Weapon
{
    public:
        Weapon(const std::string &type);
        const std::string &getType()const;
        void setType(const std::string &newType);


    private: 
        std::string type;
};



#endif


// **const std::string &getType()const;**

//El primer const → no permite modificar lo que devuelves.
//El & → devuelves una referencia, no una copia.
//El const final → asegura que el método no cambia el objeto.
