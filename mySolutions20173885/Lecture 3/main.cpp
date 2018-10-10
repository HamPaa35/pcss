#include <iostream>
#include <algorithm>
using namespace std;

void averageOfnumbers(float,float);
void findCloseToZero(float, float);

int main() {

    float firstNumber;
    float secondNumber;

    cout << "Enter a number";
    cin >> firstNumber;
    cout << "Enter another number";
    cin >> secondNumber;

    averageOfnumbers(firstNumber,secondNumber);
    findCloseToZero(firstNumber,secondNumber);

    return 0;
}

void averageOfnumbers(float firstNumber, float secondNumber){
    cout << (firstNumber+secondNumber)/2;
}

void findCloseToZero(float firstNumber, float secondNumber){
    float test = min(firstNumber,secondNumber);
    cout << test;
}

