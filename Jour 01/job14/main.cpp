#include <iostream>
using namespace std;
#include <cmath> 

/*Écrire un programme qui demande à l'utilisateur de taper un entier N et qui
calcule la somme des cubes de 5^3 à N^3.*/

int main(int argc, char const *argv[])

{

    int N;
    int sum = 0; 

    do {
    cout << "Enter a number above 5 : ";
    cin >> N; 
        if (N<5) {
            cout << "Invalid input. \n";
        }
    }
    while (N<5); 

    for (int i = 5; i<N; i++){
        sum = sum + pow(i,3);

    }
    cout << "Sum total from 5^3 to " << N<<"^3 is: " << sum; 

    return 0;
}
