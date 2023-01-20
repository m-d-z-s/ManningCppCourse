//
// Created by brusi on 1/19/2023.
//
#include <iostream>
#include "tierOne.h"
#include <vector>

int array(){
    double array[5] = {0.0,1.1,2.2,3.3,4.4};
    std::cout << array[4] << std::endl;

    std::vector<double> list = {6.6, 1.1, 2.2, 3.3, 4.4};
    std::cout << list.at(0) << std::endl;
    list.at(1) = 5;
    std::cout << list.at(1) << std::endl;
    std::cout << list.size() << std::endl;
    list.push_back(25);
    std::cout << list.at(5) << std::endl;

    return 0;
}