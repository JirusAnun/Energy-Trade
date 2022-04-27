#pragma once
#include <iostream>
#include <string>
using namespace std;

class ID {
    string Username, Password;
    bool Permission;
    ID* Next;
public:
    ID(string, string, bool);
    void Show_node();
    void Insert(ID*&);
    ID* Move_next();
    ~ID();
    string Get_username() { return Username; }
    string Get_password() { return Password; }
    bool Get_permission() { return Permission; }

};

ID::ID(string Username, string Password, bool Permission) {
    this->Username = Username;
    this->Password = Password;
    this->Permission = Permission;
    Next = NULL;
};

ID::~ID() { };

ID* ID::Move_next() {
    return Next;
}
void  ID::Show_node() {
    cout << "Node username: " << Username << endl;
}
void ID::Insert(ID*& new_node) { // new_next->next=hol;
    new_node->Next = this; //new_node->next=hol;

}