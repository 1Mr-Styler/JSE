#include <iostream>
#include <map>
#include "SE1/Bart.h"
#include "SE1/Lisa.h"

using namespace std;

template <typename T>
void TheSimpsonsFamily(T & simp) {
    cout << "Name: " << simp.getName() << endl;
    cout << "Hairstyle: " << simp.HairStyle() << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~\n";

}

int main() {

    Bart bart = Bart("Bart J. Simpson");
    Lisa lisa = Lisa("Lisa J. Simpson");

    cout << "Burns World! v0.3.1" << endl << endl;

    TheSimpsonsFamily(bart);
    TheSimpsonsFamily(lisa);

    return 0;
}

