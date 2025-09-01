/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 12:59:32 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/01 13:28:32 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{

    randomChump("ChumpZombie");

    Zombie *heapzombie = newZombie("heapzombie");
    heapzombie->announce();
    delete heapzombie;

    randomChump("StackZombie");
    return(0);
}