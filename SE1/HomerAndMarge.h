//
// Created by Jerry U. on 27/05/2018.
//

#ifndef JSE_HOMERANDMARGE_H
#define JSE_HOMERANDMARGE_H

#include <iostream>

using namespace std;

class HomerAndMarge {
protected:
    string name;

public:
    HomerAndMarge(string kids_name);

    const string &getName() const;
    virtual string HairStyle() = 0;
};


#endif //JSE_HOMERANDMARGE_H
