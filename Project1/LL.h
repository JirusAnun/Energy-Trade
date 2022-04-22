#pragma once
#include <iostream>
#include"ID_NODE.h"
#include"LL.h"

using namespace std;
class LL {
    ID* hol;
    int size;
public:
    void Add_node(ID*&);
    void Show_all();
    int Get_size();
    string Get_id(int);//Same as ID_NODE.h but in LL.h
    string Get_pass(int);//Same as ID_NODE.h but in LL.h
    ~LL();
    LL();
};

LL::LL() {
    hol = NULL;
    size = 0;
}

LL::~LL() {
    cout << "destructor Linklist" << endl;
    ID* t = hol;
    int i;
    for (i = 0; i < size; i++) {
        hol = hol->Move_next();
        delete t;
        t = hol;
    }
    size = 0;
}

void LL::Show_all() {
    ID* t = hol;
    int i;
    cout << "Size of LL is :" << size << endl;
    for (i = 0; i < size; i++) {
        t->Show_node();
        t = t->Move_next();
    }
}

int LL::Get_size() {
    return size;
}

void LL::Add_node(ID*& new_node) {

    hol->Insert(new_node);
    hol = new_node;

    size++;
}

string LL::Get_id(int n) {
    string Temp;
    ID* t = hol;
    for (int i = 0; i < n; i++)
        t = t->Move_next();
    Temp = t->Get_username();
    return Temp;
}

string LL::Get_pass(int n) {
    string Temp;
    ID* t = hol;
    for (int i = 0; i < n; i++)
        t = t->Move_next();
    Temp = t->Get_password();
    return Temp;
}