/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execpt.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 20:47:29 by fech-cha          #+#    #+#             */
/*   Updated: 2022/12/12 21:13:49 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Printer
{
    private:
        std::string _name;
        int         _avaiPg;
    public:
        Printer(std::string name, int paper): _name(name), _avaiPg(paper){}
        
        void    Print(std::string txt)
        {
            std::string thr = "No Paper";
            int reqPg = txt.length()/10;
            
            if (reqPg > _avaiPg)
                //throw thr;
                // throw 69;
                throw 'F';
            std::cout << "Printing..." << txt << std::endl;
            _avaiPg -= reqPg;
        }
};

int main()
{
    Printer pr("FaroukPrinter", 10);
    try
    {
        pr.Print("Testing the printer.");
        pr.Print("Testing the printer.");
        pr.Print("Testing the printer.");
        pr.Print("Testing the printer.");
        pr.Print("Testing the printer.");
        pr.Print("Testing the printer.");
    }
    catch(std::string execpt)
    {
        std::cout << "Exception : " << execpt << std::endl;
    }
    catch(int except)
    {
        std::cout << "Exception : " << except << std::endl;
    }
    //default catch 
    catch(...)
    {
        std::cout << "Default catch. " << std::endl;
    }

    return (0);
}