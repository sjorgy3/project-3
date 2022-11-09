//
// Created by 18017 on 11/8/2022.
//

#ifndef PROJECT_2_TUPLE_H
#define PROJECT_2_TUPLE_H

#include <string>
#include "vector"
using namespace std;

class Tuple {
private:
    vector<string>values;
public:
    Tuple() = default;
    bool operator< (const Tuple &rhs) const{
    return values < rhs.values;

}

};


#endif //PROJECT_2_TUPLE_H
