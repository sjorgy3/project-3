//
// Created by 18017 on 11/5/2022.
//

#ifndef PROJECT_2_RELATION_H
#define PROJECT_2_RELATION_H
#include "string"
#include "Header.h"
#include "Relation.h"
#include "Tuple.h"
#include "set"
#include "list"
#include "sstream"
using namespace std;



class Relation {
private:
    string name;
    Header givenHeader;
    set<Tuple> rows;
public:
    Relation() = default;

    Relation(string newName, Header newHeader) {
        this->name = newName;
        this->givenHeader = newHeader;
    }

    string getName() {
        return name;
    }


    void setHeader(Header header);

    void addTuple(Tuple newTup);

    Relation select(int index, string value);

    Relation select2(int index1, int index2);

    Relation project(list<int> indices);

    Relation rename(list<string> attributes);

  /*  string toString() {
        stringstream ss;
        for (auto row : this->rows) {


        }

    }*/


};


#endif //PROJECT_2_RELATION_H
