/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:48:41 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/01 14:17:43 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N,  std::string name)
{
    Zombie *horde = new Zombie[N];
    
    for (int i = 0; i < N; i++)
    {
        horde[i].setName(name);
    }
    return(horde);
}

//creo un array de clases, dentro del bucle le asigno nombre a cada uno con "new".
