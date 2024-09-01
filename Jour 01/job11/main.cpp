#include <iostream>
using namespace std;

/* Écrire une fonction swapValues qui, tel un défi d’adresse, teste votre habilité à échanger avec maîtrise les valeurs de deux entiers en utilisant les références. Dans cette épreuve, vous êtes appelé à démontrer votre dextérité et votre efficacité. Vous ne devez pas utiliser de pointeurs pour cet exercice.*/

void swapValues(int& value1, int& value2) {
    int storeValue;

    storeValue = value1; 
    value1 = value2; 
    value2 = storeValue;
}


int main(int argc, char const *argv[])
{

    int a= 10; 
    int b = 20; 

    cout << "Before swap \n";
    cout << "Value 1 : " << a <<"\n";
    cout << "Value 2 : " << b <<"\n \n";

    swapValues (a,b);

    cout << "After swap \n";
    cout << "Value 1 : " << a <<" \n";
    cout << "Value 2 : " << b <<" \n";   
    
    return 0;
}
