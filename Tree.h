//
// Created by felix on 11/14/2017.
//

#ifndef FAMILYTREE_TREE_H
#define FAMILYTREE_TREE_H


#include "Branch.h"

class Tree
{
private:
    Branch* root;
    Tree* tree;

public:
    Branch *getRoot() const;
    Tree(Branch* branch);
    Tree();
    Branch* addToFamilyTree(Branch* branch);
    void setRoot(Branch *root);
    void getBranchs(Branch* branch);
    void createFamilyTree();
    Tree *getTree() const;
    void setTree(Branch *tree);


};


#endif //FAMILYTREE_TREE_H
