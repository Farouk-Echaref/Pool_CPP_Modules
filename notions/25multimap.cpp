#include <iostream>
#include <map>
#include <utility>

int main()
{
    std::multimap<std::string, int> myMap;

    myMap.insert(std::make_pair("one", 69));
    myMap.insert(std::make_pair("one", 420));
    myMap.insert(std::make_pair("two", 666));
    myMap.insert(std::make_pair("two", 134));
    myMap.insert(std::make_pair("three", 2512));
    myMap.insert(std::make_pair("three", 0));

    std::multimap<std::string, int>::iterator it = myMap.begin();

    for (; it != myMap.end(); it++)
        std::cout << it->first << " : " << it->second << std::endl;

    return (0);
}