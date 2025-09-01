/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:48:48 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/01 14:18:39 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *myHorde = zombieHorde(5, "Paco");
    for (int i = 0; i < 5; i++)
    {
        myHorde[i].announce();
    }
    delete[] myHorde;
}

//llamo a la funcion de zombieHorde con 5 zombies y nombre Paco, creo un bucle para imprimir los nombres.
//al final borro toda la memoria del array en lugar de ir uno por uno.