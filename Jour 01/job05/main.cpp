#include <iostream>
using namespace std;

/* Écrire un programme en C++ qui permet d'échanger le contenu de deux
entiers n et m saisis par l'utilisateur, puis afficher ces entiers avant et après l’échange.*/


int main(int argc, char const *argv[])
{

    int number1 = 10; 
    int number2= 20; 
    int storeNumber; 

    cout << "NUMBERS BEFORE SWAP \n"; 
    cout << "Number 1: " << number1 << "\n"; 
    cout << "Number 2: " << number2 << "\n \n";  

    storeNumber = number1; 
    number1 = number2; 
    number2 = storeNumber; 

    cout << "NUMBERS AFTER SWAP \n"; 
    cout << "Number 1: " << number1 << "\n"; 
    cout << "Number 2: " << number2 << "\n";  

    return 0;
}
