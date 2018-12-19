#include <iostream>
#include <stdlib.h>
using namespace std;


int suma(int num1, int num2){
    return num1 + num2;
}

int resta(int num1, int num2){
    return num1 - num2;
}

int multiplica(int num1, int num2){
    return num1 * num2;
}

int divide(int num1, int num2){
    return num1 / num2;
}



int main(){
    int num1 = 0, num2 = 0, result = 0;
    char operacion;
    
    cout << "Introduce el primer numero: ";
    cin >> num1;
    
    cout << "Introduce el segundo numero: ";
    cin >> num2;
    
    
    cout << "Introduce la operacion a realizar (+ - * /): ";
    cin >> operacion;
    
    
    switch(operacion){
        case '+' : cout << "El resultado de la suma es: " << suma(num1, num2) << endl; break;
        case '-' : cout << "El resultado de la resta es: " << resta(num1, num2) << endl; break;
        case '*' : cout << "El resultado de la multiplicacion es: " << multiplica(num1, num2) << endl; break;
        case '/' : cout << "El resultado de la division es: " << divide(num1, num2) << endl; break;
        default : cout << "Operacion no admitida" << endl; break;
    }
    
    return 0;
}