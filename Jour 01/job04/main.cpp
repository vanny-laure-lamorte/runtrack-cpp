#include <iostream>
using namespace std;

/* Écrire un programme en C++ qui permet d'afficher si un nombre entier saisi
au clavier est pair ou impair */

int main(int argc, char const *argv[])
{
    int number; 

    cout << "Number : "; 
    cin >> number; 

    if (number%2 == 0){
        cout << number << " is an even number."; 
    }
    else {
        cout << number <<" is an odd number."; 
    }; 
    
    return 0;
}


