/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2construct_deconstruct.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:25:58 by fech-cha          #+#    #+#             */
/*   Updated: 2022/10/07 23:53:16 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <list>

//class is the blueprint of an object
//all members of the class are by default private(accesible only within the class)

class YoutubeChannel{
public:  //make all this members accessible outside the class 
    std::string  Name;
    std::string  OwnerName;
    int     SubsCount;
    std::list<std::string>    PublishedVideoTitles;

    //constructure have the same name as the class with no return value , it''ll be invoked eachtime we need to create a new object
    YoutubeChannel(std::string name, std::string ownerName){
        Name = name;
        OwnerName = ownerName;
        SubsCount = 0;
    }

    //class method to print class info
    void    GetInfo()
    {
        std::cout << "Name of the YtChannel : " << Name << std::endl;
        std::cout << "Owner name: " << OwnerName << std::endl; 
        std::cout << "NO of subs: " << SubsCount << std::endl;
        std::cout << "Videos: " << std::endl;
    }
};

int main(void)
{
    //create an object (Instance) with a constructor
    YoutubeChannel ytChannel("DevOps Classes", "Farouk");
    YoutubeChannel ytChannel2("Linux Classes", "Echaref");
    
    //call class method
    ytChannel.GetInfo();
    ytChannel2.GetInfo();
    
    return (0);
}