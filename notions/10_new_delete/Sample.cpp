/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 04:57:42 by fech-cha          #+#    #+#             */
/*   Updated: 2022/11/10 06:08:33 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Student
{
    private:
        std::string _login;
    public:
        Student(std::string login): _login(login)
        {
            std::cout << "this->_login " << this->_login << " is born." << std::endl;
            return ;
        }
        ~Student(void)
        {
            std::cout << "this->_login " << this->_login << " is dead." << std::endl;
            return ;
        }
};

int main(void)
{
    //on stack
    // Student     log = Student("fech-cha");

    //on heap , new call constructor
    Student*    log2 = new Student("alfertah");

    //delete call deconst
    delete log2;
    
    std::cout << "testing.\n"; 
    return (0);
}