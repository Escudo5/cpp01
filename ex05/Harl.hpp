/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 13:21:02 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/03 13:24:35 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP


#include <iostream>
#include <string>

class Harl
{
  public:
    Harl();
    ~Harl();
    void complain(std::string level);
    


  private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    
};



#endif