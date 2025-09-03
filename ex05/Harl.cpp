/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 13:20:52 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/03 13:33:04 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl()
{
}

Harl::~Harl()
{
}



void debug(void)
{
    std::cout << " [Debug]" << std::endl << " Just checking Harl is OK." << std::endl;
}

void info(void)
{
    std::cout << "[info]" << std::endl << "My name is Harl, i just complain." << std::endl;
}

void warning(void)
{
    std::cout << "[warning]" << std::endl << "A simple message to remind you to avoid talking to Harl" << std::endl;
}

void error(void)
{
    std::cout << "[Error]" << std::endl << "Harl has crashed, please try again later... or not." std::endl;
}