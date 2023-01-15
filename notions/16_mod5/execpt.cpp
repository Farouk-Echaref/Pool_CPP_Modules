/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execpt.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 20:47:29 by fech-cha          #+#    #+#             */
/*   Updated: 2023/01/15 11:52:15 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Printer
{
    private:
        std::string _name;
        int         _availablePaper;
    public:
        Printer(std::string name, int paper): _name(name), _availablePaper(paper){}
        void    Print(std::string txtDoc)
        {
            int required = txtDoc.length() / 10;
            
            if (required > _availablePaper)
                //throw 'F';
                throw 69;
            std::cout << "Printing .., " << txtDoc << std::endl;
            _availablePaper -= required;
        }
};

int main()
{
    Printer pp("fech-cha", 10);
    try
    {
        pp.Print("testing testing testing testing testing");
        pp.Print("testing testing testing testing testing");
        pp.Print("testing testing testing testing testing");
        pp.Print("testing testing testing testing testing");
    }
    catch(char c)
    {
        std::cout << "Error type: " << c << std::endl;
    }
    catch(int nb)
    {
        std::cout << "Error type: " << nb << std::endl;
    }

    return (0);
}