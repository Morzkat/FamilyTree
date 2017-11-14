//
// Created by felix on 11/14/2017.
//

#include <iostream>
#include "Tree.h"

Branch *Tree::getRoot() const {
    return root;
}

void Tree::setRoot(Branch *root) {
    Tree::root = root;
}

Tree::Tree(Branch *branch)
{
    this->root = branch;
}

Tree::Tree()
{
    this->root = this->getRoot();
}

void Tree::getBranchs(Branch* branch)
{
    cout << branch->getBranchName()<< endl;

    if (branch->getSonInt() > 0)
    {
        cout << endl << branch->getBranchName() + " Es padre de: " << endl;
        Branch* i = branch->getSons();

        while(i != NULL)
        {
            getBranchs(i);
            i = i->getNext();
        }
    }
}

void Tree::createFamilyTree()
{
    string branchName;
    cout << "Introduce el nombre de la persona\n";
    cin >> branchName;

    Branch* root = this->getRoot();
    Branch* rootSon = new Branch(branchName);

    cout << "Cuantos hijos tiene " + rootSon->getBranchName() + "\n";
    int sonQuantity;
    cin >> sonQuantity;

    for (int i = 0; i < sonQuantity; ++i)
    {
        createFamilyTree();
        root->addSon(rootSon);
    }

    this->setRoot(root);

}

Tree *Tree::getTree() const
{ return tree; }

void Tree::setTree(Branch *tree) {
    Tree::tree = new Tree(tree);
}

