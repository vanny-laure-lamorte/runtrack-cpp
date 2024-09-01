#include <iostream>
using namespace std;

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
