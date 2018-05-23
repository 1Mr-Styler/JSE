#include <iostream>
#include "TheSimpsons.h"
#include "Bart.h"

enum Simpsons {
    Burns = 3360,
    Homer,
    Bart,
    Lisa,
    Marge,
    Maggie,
    ANON
};



int main() {

    int i;
    Simpsons simpson;
    TheSimpsons theSimpsons;

    std::cout << "Burns World! v0.3.0" << std::endl;
    std::cout << "What's your ID?: ";
    std::cin >> i;

    simpson = static_cast<Simpsons >(i);
    switch (simpson) {
        case Burns:
            std::cout << "Welcome, sir!" << std::endl;
            std::cout << "Current user: " << theSimpsons.getName(i) << std::endl;
            break;
        case Homer:
            std::cout << "D'oh!" << std::endl;
            std::cout << "Current user: " << theSimpsons.getName(i)  << std::endl;
            break;
        case Bart:
            std::cout << static_cast<Bart>(theSimpsons.whoami(3362)).getCatchPhrase() << std::endl;
            std::cout << "Current user: " << theSimpsons.getName(i) << std::endl;
            break;
        default:
            std::cout << "Who the devil are you?!" << std::endl;
    }

/*    std::cout << simpson << std::endl;
    if (simpson == theSimpsons.bart) {
        std::cout << " ~~ Escobart ~~";
    }*/
    return 0;
}

