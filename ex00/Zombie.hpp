/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 12:08:46 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/01 13:24:23 by smarquez         ###   ########.fr       */
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
        Zombie(std::string name);
        ~Zombie();
        
        void announce(void);
        void setName(std::string newName);
        


    private: 
        std::string name;
};

    Zombie *newZombie(std::string name);
    void randomChump(std::string name);

#endif