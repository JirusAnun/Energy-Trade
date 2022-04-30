#pragma once
#include <iostream>
#include <string>
using namespace std;

class ID {
    string Username, Password;
    bool Permission;
    ID* Next;
public:
   
    void Show_node();
    void Insert(ID*&);
    string Get_username() { return Username; }
    string Get_password() { return Password; }
    bool Get_permission() { return Permission; }
    ID* Move_next();
    ID(string, string, bool);
    ~ID();
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
void ID::Insert(ID*& new_node) { 
    new_node->Next = this;

}