//
// Created by 18017 on 11/5/2022.
//

#include "Database.h"

Relation Database::getRelation(string relationName) {

    return relations.at(relationName);
}

Relation Database::getRelationCopy(string relationName) {
    return relations.at(relationName);
}

void Database::addRelation(Relation newRelation) {
    relations.insert(pair<string,Relation>(newRelation.getName(),newRelation));


}
