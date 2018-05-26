#include <iostream>
#include <map>
#include "SE1/Bart.h"
#include "SE1/Lisa.h"

using namespace std;


int main() {

    Bart bart = Bart("Bart J. Simpson");
    Lisa lisa = Lisa("Lisa J. Simpson");

    cout << "Burns World! v0.3.1" << endl << endl;

    cout << "Name: " << bart.getName() << endl;
    cout << "Hairstyle: " << bart.HairStyle() << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "Name: " << lisa.getName() << endl;
    cout << "Hairstyle: " << lisa.HairStyle() << endl;

    return 0;
}

