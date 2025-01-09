// La variable 'a'
int a;

// La fonction 'a'
int a();

int ma_fonction(){

    // Corps de la fonction

    return 1;
}

#include<iostream>

void bonjour(){
    std::cout << "Bonjour !";
}

int tres_utile(int mon_nombre){

    return mon_nombre;
}

int b = tres_utile(1);

int main(){

    bonjour();

    return 1;
}