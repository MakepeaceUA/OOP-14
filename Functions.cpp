#include <conio.h>
#include <iostream>

#include "Functions.h"

using namespace std;

void Insert(Tree& tree)
{
    system("cls");
    cout << "Enter a quantity of student names and last names to add: ";

    unsigned int count = 0U;
    cin >> count;

    for (unsigned int i = 0U; i < count; ++i)
    {
        Node* temp = new Node;

        cout << endl << "Enter name name: " << i + 1 << endl;
        cin >> temp->Get_Name();

        cout << endl << "Enter last name: " << i + 1 << endl;
        cin >> temp->Get_LastName();

        cout << endl << "Enter surname: " << i + 1 << endl;
        cin >> temp->Get_Surname();

        cout << endl << "Enter GPA: " << i + 1 << endl;
        cin >> *(temp->Get_GPA());

        tree.Insert(temp);
    }
}

void Print(const Tree& tree)
{
    system("cls");

    tree.Print(tree.GetRoot());

    _getch();
}

void PrintMenu()
{
    char menu[] = "1. Insert node\n2. Remove node\n3. Print node\n4. Search node\n5. Exit\n";

    system("cls");

    cout << menu;
}

void Remove(Tree& tree)
{
    system("cls");
    cout << "Enter name to remove:" << endl;

    char buffer[15] = {};
    cin >> buffer;

    Node* node = tree.Search(tree.GetRoot(), buffer);

    tree.Remove(node);
}

void Search(const Tree& tree)
{
    system("cls");
    cout << "Enter name word to search:" << endl;

    char buffer[15] = {};
    cin >> buffer;

    Node* node = tree.Search(tree.GetRoot(), buffer);

    if (node != nullptr)
    {
        cout << node->Get_Name();
    }
    else
    {
        cout << "Word not found" << endl;
    }

    _getch();
}