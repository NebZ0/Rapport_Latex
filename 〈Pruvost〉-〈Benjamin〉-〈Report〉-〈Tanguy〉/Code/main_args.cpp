#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    //affichage du nombre d'arguments
    cout << "Nombre d'arguments : " << argc << endl;
    
    // Affichage des arguments
    for (int i = 0; i < argc; ++i) {
        cout << "Argument " << i << ": " << argv[i] << endl;
    }

    return 0;
}
