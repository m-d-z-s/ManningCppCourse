//
// Created by brusi on 1/19/2023.
//
#include <iostream>
#include <vector>
#include <numeric>

void exerciseOne(){
    std::string name;
    std::string age;
    int first;
    int second;
//#1
    std::cout << "what`s your name?"<< std::endl;
    std::cin >> name;
    std::cout << "what`s your age?" << std::endl;
    std::cin >> age;
    std::cout << name << " " << age << std::endl;
    std::cout << "is it correct?" <<std::endl;
//#2
    std::cout << "input 2 numbers" << std::endl;
    std::cout << "1:" << std::endl;
    std::cin >> first;
    std::cout << "2:" << std::endl;
    std::cin >> second;
    std::cout << first + second << std::endl;
//#3
    std::vector<double> numbers{12.1, 25.2, 43.1 , 5.4};
    double sum = std::accumulate(numbers.begin(),numbers.end(), 0.0);
    double average = sum/(double)numbers.size();
    std::cout << average <<std::endl;
}