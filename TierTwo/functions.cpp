//
// Created by brusi on 1/20/2023.
//
#include <iostream>
using namespace std;
namespace abc{
    int tripleNumber(int number){
        return number * 3;
    }
}

void sayHello(){
    cout << abc::tripleNumber(5) << endl;
}

