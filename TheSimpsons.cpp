//
// Created by styl3r on 23/5/18.
//

#include <iostream>
#include "TheSimpsons.h"
#include "Bart.h"

std::string TheSimpsons::getName(int i) {
    version = "v2.2";
    std::string user;
    std::string cp;
    switch (i) {
        case 3361:
            user = "Homer Simpson";
            break;
        case 3362:
            user = "Bart Simpson";
            break;
        case 3364:
            user = "Marge Simpson";
            break;
        default:
            user = "ID not recognized... more support coming soon";

    }

    return user + "\n\nThe Simponson " + version;
}

TheSimpsons TheSimpsons::whoami(int i) {
    return Bart();
//    switch (i) {
//        case 3361:
//
//            break;
//        case 3362:
//
//            break;
//        case 3364:
//
//            break;
//        default:
//    }
}