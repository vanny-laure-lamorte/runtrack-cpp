#include <iostream>
#include <cstring>
using namespace std;

/*Écrire une fonction MySortString qui prend en entrée un tableau de chaînes
de caractères et le trie en utilisant des pointeurs. Vous devez implémenter votre propre algorithme de tri en utilisant des pointeurs pour accéder aux éléments du tableau et effectuer les échanges nécessaires.*/


// Function to sort an array of strings using pointers
void MySortString( char* array[], int size){

    // Outer loop to iterate through each element in the array
    for (int i; i < size; i++){
        char** minPtr = array + i;    

    // Inner loop to find the minimum element in the unsorted portion
       for (int j = i + 1; j < size; ++j) {
            if (strcmp(*(array + j), *minPtr) < 0) {
                minPtr = array + j;
            }

            // Swap the found minimum element with the first element of the unsorted portion
            if (minPtr != array + i) {
            char* temp = *(array + i);
            *(array + i) = *minPtr;
            *minPtr = temp;}
}}}

int main(int argc, char const *argv[])
{

    // Array of strings 
    char* array[] = {
        (char*)"chat",
        (char*)"chien",
        (char*)"aigle",
        (char*)"poule",
        (char*)"mouton"
    };


    // Calculate the number of elements in the array
    int size = sizeof(array) / sizeof(array[0]);

    // Display the original array
    cout << "ORIGINAL ARRAY \n"; 
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    // Call the sorting function
    MySortString(array, size);

    // Display the sorted array
    cout << "\nMODIFIED ARRAY\n"; 
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
