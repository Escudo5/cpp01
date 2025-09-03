/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 13:20:40 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/03 16:28:33 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    std::string complainType;
    Harl Harl;

    std::cout << "Choose you type of complain (DEBUG, INFO, WARNING or ERROR): " << std::endl;
    std::cin >> complainType;

    Harl.complain(complainType);
    return(0);
}