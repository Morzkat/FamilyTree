//
// Created by felix on 11/14/2017.
//

#include "Branch.h"

void Branch::addSon(Branch *son)
{
    sons++;
    if (firstSon == NULL)
    {
        firstSon = son;
        lastSon = son;
    }

    else
    {
        lastSon->next = son;
        lastSon = son;
    }
}

Branch* Branch::getSons()
{
    return firstSon;
}

Branch::Branch(string branchName)
{
    this->branchName = branchName;
    next = NULL;
    firstSon = NULL;
    lastSon = NULL;
    sons = 0;
}

const string &Branch::getBranchName() const {
    return branchName;
}

void Branch::setBranchName(const string &branchName) {
    Branch::branchName = branchName;
}

Branch *Branch::getNext() const {
    return next;
}

void Branch::setNext(Branch *next) {
    Branch::next = next;
}

int Branch::getSonInt() const
{
    return this->sons;
}


