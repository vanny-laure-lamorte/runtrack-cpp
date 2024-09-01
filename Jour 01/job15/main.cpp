#include <iostream>
using namespace std;

/*La quête des Bitiums consiste à retourner vrai si le nombre de bit est pair, et faux sinon. Par exemple, si nous avons un nombre binaire tel que 101010 (qui
représente 42 en décimal), il y a trois bits définis à 1. Dans ce cas, le nombre
de bits à 1 est impair et la fonction retournera faux. Pour cette épreuve, utilisez uniquement les opérations sur les bits disponibles en C++. Il n’est pas autorisé d’utiliser les opérateurs de comparaisons (==, != ...).*/

bool hasEvenNbrBits (int n) {
    int count = 0;

    while(n) {

        count += n & 1; 
          n >>= 1; 
    }

    return !(count & 1);
}

int main() {
    int number = 42; 
    bool result = hasEvenNbrBits(number);
    cout << "The number of 1 bits is " << (result ? "even" : "odd") << ".";

    return 0;
}