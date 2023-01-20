//
// Created by brusi on 1/20/2023.
//

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

namespace twoEx{
    string name;
    string age;
    int first;
    int second;
    double celsiusDegree;
    double fahrenheitDegree;

    string questionName(){
        return "what`s your name?";
    }
    string questionAge(){
        return "what`s your age?";
    }
    string inputNumbers(){
        return "input 2 numbers";
    }
    string inputDegree(){
        return "input Celsius degree";
    }

    double convertToFahrenheit(){
        fahrenheitDegree = celsiusDegree * 1.8 + 32;
        return fahrenheitDegree;
    }

}

void firstFun(){
    cout << twoEx::questionName() << endl;
    cin >> twoEx::name;
    cout << twoEx::questionAge() << endl;
    cin >> twoEx::age;
    cout << twoEx::name << " " << twoEx::age << endl;

}

void secondFun(){
    cout << twoEx::inputNumbers() << endl;
    cout << "1:" << std::endl;
    cin >> twoEx::first;
    cout << "2:" << std::endl;
    cin >> twoEx::second;
    cout << twoEx::first + twoEx::second << endl;
}

void thirdFun(){
    vector<double> numbers{12.1, 25.2, 43.1 , 5.4};
    double sum = accumulate(numbers.begin(),numbers.end(), 0.0);
    double average = sum/(double)numbers.size();
    cout << average <<endl;
}

void fourthFun(){
    cout << twoEx::inputDegree() << endl;
    cin >> twoEx::celsiusDegree;
    cout << twoEx::convertToFahrenheit() << endl;
}
