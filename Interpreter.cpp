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



void Interpreter::interpretQueries() {

for(auto &&query:program.getQueries()){

   Relation relationCopy =  database.getRelationCopy(query.getName());
    map<string,int>variables;
   for(unsigned int i = 0; i < query.getParams().size(); i++){
       if (query.getParams().at(i).isConstant() == true){
           relationCopy.select(i,query.getParams().at(i).toString());
       }

       else{
           if(variables.count(query.getParams().at(i).toString())){

               relationCopy.select2(variables[query.getParams().at(i).toString()], i);

           }
           else{
               variables.insert({query.getParams().at(i).toString(), i});

           }
       }
   }

}



}
void Interpreter::interpretRules() {

}

Database Interpreter::database1() {
    intepretSchemes();
    interpretFacts();


    return this->database;
}

void Interpreter::interpret() {
    database1();

}

