#include <iostream>
using namespace std;

/* Écrire une fonction doubleArray qui prend un tableau d'entiers et sa taille en entrée, qui double chaque élément du tableau en utilisant des pointeurs pour
accéder aux éléments du tableau, et renvoie la somme de tous les éléments doublés. Ensuite, écrivez une fonction printArray qui prend un tableau d'entiers et sa taille en entrée, et affiche les éléments du tableau après les avoir doublés.*/

int doubleArray (int* array, int sizeArray){

    int sum = 0;

    for (int i=0; i<sizeArray; i++) {       
       *(array+i) *=2;
        sum += *(array+i);
    }
    return sum;
}

void printArray(int* array, int sizeArray){

   for (int i=0; i<sizeArray; i++) {       
        cout << "Value " << i+1 << ": "<< *(array + i)  << "\n";
    }
}

int main(int argc, char const *argv[])
{

    int tabSize; 
    int numbers; 

    cout << "Enter array size: "; 
    cin >> tabSize;

    int* tab = new int[tabSize];

    for (int i=0; i<tabSize;i++){
        cout << "Enter number " << i+1 <<": "; 
        cin >> tab[i];  
    }

    cout << "BEFORE\n";
    printArray(tab, tabSize);
    cout << endl;

    int sum = doubleArray (tab,tabSize);
    cout << "AFTER\n";
    printArray(tab, tabSize);
    cout << "Sum is : " << sum;

    return 0;
}
