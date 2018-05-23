//
// Created by styl3r on 23/5/18.
//

#ifndef JSE_THESIMPSONS_H
#define JSE_THESIMPSONS_H


#include <string>

class TheSimpsons {
private:
    std::string version = "v1.0";
    int userID;
public:
//    TheSimpsons();
    std::string getName(int i);
    std::string getCatchPhrase();
    TheSimpsons whoami(int i);
};


#endif //JSE_THESIMPSONS_H
