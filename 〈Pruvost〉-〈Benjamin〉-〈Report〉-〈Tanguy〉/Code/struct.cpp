#include <iostream>
using namespace std;

// Definition d'une structure
struct Person {
    string name;  // Nom
    int age;      // Age
    float height; // Taille en metres
};


int main() {
    // Creation d'une instance de Person
    Person p1 = {"Alice", 25, 1.68};

    // Affichage des valeurs des membres
    cout << "Nom : " << p1.name << endl;
    cout << "Age : " << p1.age << endl;
    cout << "Taille : " << p1.height << " m" << endl;

    // Modification d'un membre
    p1.age += 1;
    cout << "Nouvel age : " << p1.age << endl;

    return 0;
}
