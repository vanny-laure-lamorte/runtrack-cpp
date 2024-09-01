#include <iostream>
using namespace std;

/* Écrire un programme en C++ qui demande à l'utilisateur de
taper cinq entiers et qui affiche leur moyenne. Vous êtes
limités à deux variables */

int main(int argc, char const *argv[])
{
    int numbers; 
    float result; 

    for (int i=1; i<6; i++){
    cout <<"Enter number" << i << " : "; 
    cin >> numbers; 

    result = result + numbers; 

    }; 

    cout << "The average of the 5 chosen numbers is: " << result/5;

    return 0;
}
