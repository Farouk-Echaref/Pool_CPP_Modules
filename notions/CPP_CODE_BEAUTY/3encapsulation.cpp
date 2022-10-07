/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3encapsulation.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:54:59 by fech-cha          #+#    #+#             */
/*   Updated: 2022/10/08 00:39:56 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <list>

//class is the blueprint of an object
//all members of the class are by default private(accesible only within the class)
//Encapsulation: make members private and change them using class methods

class YoutubeChannel{
private:
    std::string  Name;
    std::string  OwnerName;
    int     SubsCount;
    std::list<std::string>    PublishedVideoTitles;

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

int main(void)
{
    int i = 5;
    std::string newName;
    //create an object (Instance) with a constructor
    YoutubeChannel ytChannel("DevOps Classes", "Farouk");
    YoutubeChannel ytChannel2("Linux Classes", "Echaref");

    //we can't make something like :: ytChannel.SubsCount++, instead use methods:
    while (i){
        ytChannel.Subscribe();
        i--;
    }
    ytChannel.Unsubscribe();
    //call class method
    ytChannel.GetInfo();
    ytChannel2.GetInfo();
    newName = ytChannel.get_name();   
    std::cout << "Getter Name: " << newName << std::endl;
    ytChannel.set_name("New Farouk.");
     newName = ytChannel.get_name();   
    std::cout << "Getter Name after using setter: " << newName << std::endl;
    
    return (0);
}