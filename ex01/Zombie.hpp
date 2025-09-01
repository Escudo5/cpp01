/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:47:09 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/01 13:57:29 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
// #include <cctype>
// #include <sstream>
// #include <iomanip>


class Zombie
{
    public: 
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        
        void announce(void);
        void setName(std::string newName);
        


    private: 
        std::string name;
};

    Zombie *zombieHorde(int N,  std::string name);


#endif
