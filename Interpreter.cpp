//
// Created by 18017 on 11/5/2022.
//

#include "Interpreter.h"

void Interpreter::intepretSchemes() {
    for(auto &&scheme:program.getSchemes()){
        Header newHeader;
        for (unsigned int i = 0; i < scheme.getParams().size(); ++i) {
            newHeader.addToHeader(scheme.getParams().at(i).toString());
        }
        Relation newRelation(scheme.getName(),newHeader);
        database.addRelation(newRelation);
    }



}

void Interpreter::interpretFacts() {
    for(auto &&fact:program.getFacts()){
        Tuple newTuple;
        for (unsigned int i = 0; i < fact.getParams().size(); i++){
            newTuple.addValue(fact.getParams().at(i).toString());

        }

        database.getRelation(fact.getName()).addTuple(newTuple);
    }
}

void Interpreter::interpretRules() {

}

void Interpreter::interpretQueries() {

}

Database Interpreter::database1() {
    intepretSchemes();
    interpretFacts();


    return this->database;
}

void Interpreter::interpret() {
    database1();

}

