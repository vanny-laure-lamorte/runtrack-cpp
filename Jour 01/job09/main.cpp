#include <iostream>
using namespace std;

/* Ecrire une fonction qui prend en entrée un tableau d'entiers et sa taille, puis trouve et renvoie le plus petit élément du tableau en utilisant des pointeurs. */


// Function to find the smallest element in the array 
int findMinElement(int *arr, int size) {
    
    int *min = arr; // Initialize min as the first element using a pointer

    // Loop through the array using pointers to find the smallest element
    for (int *ptr = arr + 1; ptr < arr + size; ptr++) {
        if (*ptr < *min) {
            min = ptr;
        }
    }

    return *min; // Dereference the pointer to get the smallest element
}

int main() {
    int Tab[100];
    int nbr;

    // Ask the user for the size of the array
    do {
        cout << "Enter the size of the array: ";
        cin >> nbr;
    } while (nbr <= 0 || nbr > 100);

    // Use a loop to add numbers to the array
    for (int i = 0; i < nbr; i++) {
        cout << "> Enter number " << (i + 1) << ": ";
        cin >> Tab[i];
    }

    // Find the smallest element in the array using the function
    int minElement = findMinElement(Tab, nbr);

    // Display the smallest element
    cout << "The smallest element in the array is: " << minElement << endl;

    return 0;
}
