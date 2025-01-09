#include <iostream>
using namespace std;

int main(){
    
    int x = 10, y = 20;
    //ex1 sera egale a true car la comparaison est vraie
    bool ex1 = x < y ; 
    //ex2 sera egale a false car la comparaison est fausse
    bool ex2 = x == y;
     
    int x = 10, y = 20;
    bool ex3 = x < y && x == y ;
    /*ex3 sera egale a false avec le et logique 
    il faut que les deux comparaisons soient vraient*/
    bool ex4 = x < y && x == y ;
    /*ex4 sera egale a true car le ou logique 
    necessite une seule comparaison vraie*/
    
    int age = 18;
    if (age >= 18) {
        cout << "Vous etes majeur" << endl;
    } else {
        cout << "Vous etes mineur" << endl;
    }

    int note = 85;
    if (note >= 90) {
        cout << "Excellent !" << endl;
    } else if (note >= 75) {
        cout << "Tres bien !" << endl;
    } else {
        cout << "Besoin d'amelioration." << endl;
    }

    char grade = 'B';
    switch (grade) {
        case 'A':
            cout << "Excellent" << endl;
            break;
        case 'B':
            cout << "Tres bien" << endl;
            break;
        case 'C':
            cout << "Bien" << endl;
            break;
        default:
            cout << "Non valide" << endl;
    }

    int compteur = 0;
    for (int i = 0; i < 100; i++) {
        compteur += 1;
    }

    int compteur = 5;
    while (compteur > 0) {
        cout << "Compteur : " << compteur << endl;
        compteur--;
    }

    int compteur = 1;
    do {
        cout << "Valeur : " << compteur << endl;
        compteur++;
    } while (compteur <= 5);

    for (int i = 0; i < 10; i++) {
        if (i == 5) break; // Quitte la boucle si i vaut 5
        if (i % 2 == 0) continue; // Ignore les nombres pairs
        cout << "i = " << i << endl;
    }

    return 0;
}