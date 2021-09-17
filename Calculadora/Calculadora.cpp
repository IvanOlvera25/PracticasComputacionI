/*
 * Author: Iván Olvera
 * Date: 13/Sep/2021
 * ivanolvera@comunidad.unam.mx
 */

#include <iostream>

using namespace std;
int main() {

    float num1{0};
    float num2{0};
    float result {0};
    string op;


    cout << "Enter the first number" << endl;
    cin >> num1; // read 1st number

    cout << "Enter the second number" << endl;
    cin >> num2; // read 2nd number

    cout << "Enter the operator" << endl;
    cin >> op; // read operator

    if(op == "+"){result = num1 + num2;}
    if(op == "-"){result = num1 - num2;}
    if(op == "*"){result = num1 * num2;}
    if(op == "/"){result = num1/num2;}
    else
        if(op == "%")
        {
            int num1, num2 {0};
            result = num1%num2;}

    cout << "The result is = " << result << endl; //print the result

    return 0;

}

