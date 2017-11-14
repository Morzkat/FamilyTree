//
// Created by felix on 11/14/2017.
//

#ifndef FAMILYTREE_BRANCH_H
#define FAMILYTREE_BRANCH_H

#include <string>

using namespace std;

class Branch
{
public:
    //Constructor
    Branch(string branchName);

    //son methods
    void addSon(Branch* son);
    Branch* getSons();
    void setSons(int sons);
    //branchName methods
    const string &getBranchName() const;
    void setBranchName(const string &branchName);
    //next(son) methods
    Branch *getNext() const;
    void setNext(Branch *next);
    //number of sons
    int getSonInt() const;
    //Create family Tree

private:
    string branchName;
    Branch* next;
    Branch* firstSon;
    Branch* lastSon;
    int sons;
};


#endif //FAMILYTREE_BRANCH_H
