//
// Created by styl3r on 23/5/18.
//

#ifndef JSE_THESIMPSONS_H
#define JSE_THESIMPSONS_H


#include <string>

class TheSimpsons {
private:
    int userID;
public:
    std::string version = "v1.0";

    //    TheSimpsons();
    std::string getName(int i);

    //virtual std::string getCatchPhrase();
    TheSimpsons whoami(int i);

    TheSimpsons operator=(TheSimpsons &theSimpsons);
};


#endif //JSE_THESIMPSONS_H
