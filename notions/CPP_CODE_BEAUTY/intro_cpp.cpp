/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intro_cpp.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <fech-cha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:33:59 by fech-cha          #+#    #+#             */
/*   Updated: 2022/10/07 21:42:19 by fech-cha         ###   ########.fr       */
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
};




int main(void)
{
    //create an object (Instance)
    YoutubeChannel ytChannel;
    
    //init values to public members
    ytChannel.Name = "DevOps Classes";
    ytChannel.OwnerName = "Farouk";
    ytChannel.SubsCount = 69;
    ytChannel.PublishedVideoTitles = {"DevOps intro." , "Linux SysAdmin" , "CI/CD"};

    std::cout << "Name of the YtChannel : " << ytChannel.Name << std::endl;
    std::cout << "Owner name: " << ytChannel.OwnerName << std::endl; 
    std::cout << "NO of subs: " << ytChannel.SubsCount << std::endl;
    std::cout << "Videos: " << std::endl;
    
    //use loop to print list
    for (std::string vidTitle: ytChannel.PublishedVideoTitles)
    {
        std::cout << vidTitle << std::endl;
    }
    
    return (0);
}