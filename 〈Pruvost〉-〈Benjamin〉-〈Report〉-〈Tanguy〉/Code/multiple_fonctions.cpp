#include<iostream>

int calcul(int a, int b){
    return a+b;
}

float calcul(float a = 1.0, float b = 1.0){
    return a*b;
}

int main(){

    // Retournera 3
    calcul(1, 2);

    // Retournera 9
    calcul(1.5, 6.0f);

    return 1;
}