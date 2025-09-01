/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 15:24:12 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/01 15:48:26 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
int main()
{
    std::string var1 = "HI THIS IS BRAIN";
    std::string *ptr = &var1;
    std::string &ref = var1;

    std::cout << "address of var1: " << &var1 << std::endl;
    std::cout << "address of ptr: " << ptr << std::endl;
    std::cout << "address of ref: " << &ref << std::endl;

    std::cout << var1 << std::endl;
    std::cout << *ptr << std::endl;
    std::cout << ref << std::endl;
    
}


// asigno al puntero la direccion de memoria de la variable.
// la direccion de memoria de la referencia va a ser la la de la variable. ref se convierte en otro nombre para var1
