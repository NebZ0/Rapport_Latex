#include<iostream>

void change_valeur(bool a){
    a = true;
}

int main(){

    bool a = false;

    change_valeur(a);

    std::cout << a;

    return 1;
}