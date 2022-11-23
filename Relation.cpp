//
// Created by 18017 on 11/5/2022.
//

#include "Relation.h"
#include "string"


Relation Relation::select2(int index1, int index2) {
    return Relation();
}
Relation Relation::select(int index, string value) {
    return Relation();
}

Relation Relation::project(list<int> indices) {
    return Relation();
}

void Relation::setHeader(Header header) {
    this->givenHeader = header;


}

void Relation::addTuple(Tuple newTup) {
    this->rows.insert(newTup);

}

Relation Relation::rename(list<string> attributes) {
    return Relation();
}


