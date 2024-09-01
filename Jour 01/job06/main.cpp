#include <iostream>
using namespace std;

/* Aider un marchand de fruits en créant un programme qui affiche le prix TTC des produits frais, qui demande à l'utilisateur de taper le prix HT d'un kilo de carottes, le nombre de kilos de carottes, et le taux de TVA (ex : 15 %). Le programme doit afficher le prix TTC d’une marchandise donnée.
*/

int main(int argc, char const *argv[])
{
    float pttc; 
    int pht; 
    int kg; 
    float tva;

    cout << "Enter the procut price: "; 
    cin >> pht; 

    cout << "Enter KG: "; 
    cin >> kg; 

    cout << "Enter TVA: "; 
    cin >> tva;
    pttc = (pht+(pht*tva/100))*kg; 

    cout << "Price with TVA is : " << pttc;   
      
    
    return 0;
}
