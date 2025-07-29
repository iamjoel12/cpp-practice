#include <iostream>
#include <math.h>
using namespace std;

void func(string name){
    cout << "What is your name? ";
    cin >> name;
    cout << "Hello " << name << " follow the instructions to determine the hypotenuse\n";
}

void hypcalculator(int sideA, int sideB, int sideC){
    sideA = 0;
    sideB = 0;
    sideC = 0;

    cout << "Enter side A: ";
    cin >> sideA;

    cout << "Enter side B: ";
    cin >> sideB;

    sideC = sqrt(pow(sideA, 2) + pow(sideB, 2));

    cout << "Side C: " << sideC;
}

int main(){

    string name;
    int sideA;
    int sideB;
    int sideC;

    func(name);
    hypcalculator(sideA,sideB,sideC);
    return 0;
}