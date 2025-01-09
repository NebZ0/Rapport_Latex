#include<iostream>

void change_valeur(bool* p){
    *p = true;
}

int main(){

    bool a = false;

    bool* p = &a;

    change_valeur(p);

    std::cout << a;

    return 1;
}