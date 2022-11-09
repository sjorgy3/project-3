//
// Created by 18017 on 11/5/2022.
//

#ifndef PROJECT_2_RELATION_H
#define PROJECT_2_RELATION_H
#include "string"
#include "Header.h"
#include "Relation.h"
#include "set"
#include "list"
using namespace std;


class Relation {
private:
    string name;
    Header givenHeader;
    set<Tuple>tuples;




public:
    Relation select(int index, string value);
    Relation select2(int index1, int index2);
    Relation project(list<int>indices);
    Relation rename(list<string>attributes);



};


#endif //PROJECT_2_RELATION_H
