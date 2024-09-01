#include <iostream>
using namespace std;

/* Votre tâche est de recevoir une année de la part de l'utilisateur et de discerner avec précision si elle est bissextile. Comme un oracle du temps, vous illuminerez votre chemin à travers les âges en déterminant si des années comme 2020, 2024 et 2028 sont bissextiles, ou si des années comme 1900, 2100 et 2200 ne le sont pas. */

int main(int argc, char const *argv[])

{
    bool isBissextile (int inputUser);     
    int isLeapYear;
    int year; 

    cout << "Enter a year : "; 
    cin >> year; 

    if (isBissextile(year)) {
    cout << year << " is a leap year."; 

    } else {
    cout << year << " is not a leap year."; 
    }    
    return 0;
}

bool isBissextile (int inputUser) {
    if(inputUser%400==0 || (inputUser%4==0 && inputUser%100!=0))
    return true; 
    else {
        return false;
    }
}