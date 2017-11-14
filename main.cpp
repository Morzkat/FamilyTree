#include <iostream>
#include "Branch.h"
#include "Tree.h"
#include "menu.h"

int main()
{
    Tree* t = new Tree();
    int op;

    do
    {
        menu::showMenu();

        cin >> op;

        switch (op)
        {
            case 1 :
                t->createFamilyTree();
                break;

            case 2:
                t->getBranchs(t->getRoot());
                break;

        }
    }while (op < 3);
}