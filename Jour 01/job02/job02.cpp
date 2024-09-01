#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int number1; 
    int number2;
    float result; 

    cout <<"Number 1: "; 
    cin >> number1;

    cout <<"Number 2: "; 
    cin >> number2; 

    result = number1 * number2;

    cout << number1 << " x " << number2 << " = " << result; 

    return 0;
}


