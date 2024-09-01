#include <iostream>
using namespace std;

/* Votre mission dans cette épreuve est de recevoir un nombre de la part de
l'utilisateur, puis de manier habilement les chiffres pour en inverser l'ordre.
Comme un sorcier des nombres, vous transformerez par exemple le nombre
12345 en 54321 */

int main(int argc, char const *argv[])
{
    int number; 
    int reversedNumber = 0; 

    // Loop to keep asking for a number as long as it is less than 10
    do {
    cout << "Enter a number: ";
    cin >> number; 
        if (number <10) {
            cout << "Invalid number. The number has to be above 9.  \n";
        }
    } while (number < 10 );

    int originalNumber = number; 

    // Message displayed after the user enters a number 
    cout << "\nOriginal number: " << number << "\n"; 

    while (number >0) {
        int digit = number%10; 

        reversedNumber = reversedNumber*10 + digit; 
        number = number /10; 
    }

   // Message displayed with reversed number 
        cout << "Reversed number: " << reversedNumber;         
    
    return 0;
}
