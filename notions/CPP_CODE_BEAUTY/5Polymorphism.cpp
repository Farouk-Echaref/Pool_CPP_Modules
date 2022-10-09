/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5Polymorphism.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 03:40:27 by fech-cha          #+#    #+#             */
/*   Updated: 2022/10/08 03:43:09 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <list>

//class is the blueprint of an object
//all members of the class are by default private(accesible only within the class)
//Encapsulation: make members private and change them using class methods
//inheritance: make use of previous classes to make new classes instead of repeating creating their attributes
//Polymorphism: method that have the same name (function with the same name) but different implementation

class YoutubeChannel{
private:
    std::string  Name;
    int     SubsCount;
    std::list<std::string>    PublishedVideoTitles;
//can be accessible from derived classes
protected:
    std::string  OwnerName;
public:
    //constructure have the same name as the class with no return value , it''ll be invoked eachtime we need to create a new object
    YoutubeChannel(std::string name, std::string ownerName){
        Name = name;
        OwnerName = ownerName;
        SubsCount = 0;
    }

    //class method to print class info
    void    GetInfo(){
        std::cout << "Name of the YtChannel : " << Name << std::endl;
        std::cout << "Owner name: " << OwnerName << std::endl; 
        std::cout << "NO of subs: " << SubsCount << std::endl;
        std::cout << "Videos: " << std::endl;
    }
    //methods to change private class member SubSCount 
    void    Subscribe(){
        SubsCount++;
    }
     
    void    Unsubscribe(){
        if (SubsCount > 0)
            SubsCount--;
    } 

    //getters/setters for names
    void    set_name(std::string NewName){
        Name = NewName;
    }

    std::string get_name(){
        return (Name);
    }
};

//the (derived classs) will inherit everything YoutubeChannel(Base Class) has
class LinuxSys:public YoutubeChannel{
public:
    LinuxSys(std::string name, std::string ownerName):YoutubeChannel(name, ownerName){}
    void    commads(){
        std::cout<< OwnerName <<" Entering commands in the terminal. " << std::endl;
    }
};

int main(void)
{    
    LinuxSys linuxYtb("ParrotOS", "Farouk");
    
    return (0);
}