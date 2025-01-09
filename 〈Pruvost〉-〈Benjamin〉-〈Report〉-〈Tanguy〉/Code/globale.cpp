#include<iostream>

int a = 1;

void ma_fonction(){
    std::cout << a; // Je connais 'a'
}

void mon_autre_fonction(){
    std:: cout << a; // Moi aussi !
}

int main(){

    std::cout << a; // Et moi aussi !

    return 1;
}