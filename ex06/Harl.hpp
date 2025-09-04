/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 10:36:52 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/04 10:41:49 by smarquez         ###   ########.fr       */
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