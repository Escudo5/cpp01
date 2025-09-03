/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 13:20:52 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/03 16:22:53 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl()
{
}

Harl::~Harl()
{
}



void Harl::debug(void)
{
    std::cout << " [Debug]" << std::endl << " Just checking Harl is OK." << std::endl;
}

void Harl::info(void)
{
    std::cout << "[info]" << std::endl << "My name is Harl, i just complain." << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[warning]" << std::endl << "A simple message to remind you to avoid talking to Harl" << std::endl;
}

void Harl::error(void)
{
    std::cout << "[Error]" << std::endl << "Harl has crashed, please try again later... or not." << std::endl;
}


void Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*lvlPtr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i = 0;
    
    Harl action;
    while (i < 4)
    {
        if (level == levels[i])
        {
            (this->*lvlPtr[i])();  //ejecutar accion en el objeto action.
            break;
        }
        i++;
    }
}


// Creo las distintas funciones de queja(un print básico).
// EN la funcion principal, Creo un array con las posibles quejas
//creo otro array de punteros a las funciones.
//en un bucle comparo cual queja es con la que me pasan por terminal y llamo a la funcion que corresponda segun el orden del array.