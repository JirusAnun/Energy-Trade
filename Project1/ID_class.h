#pragma once
#include <iostream>
#include <fstream>
#include <string.h>
#include <sstream>

using namespace std;
#include "ID_NODE.h"
#include "LL.h"

class Login_reg {
    fstream File;
    int Row, Permission = 0, n;
    string Username, Password, Temp_username, Temp_password;
    LL All_User;
    ID* t;

public:
    void create_LL();
    bool check_login(string,string);
    bool check_reg(string, string);
    void write_csv();

};

void Login_reg::create_LL() {
    ifstream Read_file;
    Read_file.open("ID.csv");
    if (Read_file) {
        string Line = "";
        string Row_str;

        while (getline(Read_file, Line)) {
            stringstream Read_string(Line);
            getline(Read_string, Row_str, ',');
            getline(Read_string, Username, ',');
            getline(Read_string, Password, ',');
            t = new ID(Username, Password, 0);
            All_User.Add_node(t);
            Line = "";
        }
    }
    File.close();
}

bool Login_reg::check_login(string Username, string Password) {
    bool check = false;
    n = All_User.Get_size();
    for (int i = 0; i < n; i++) {
        if (Username == All_User.Get_id(i)) {
            if (Password == All_User.Get_pass(i)) {
                check = true;
                break;
            }
        }
    }
    return check;
}

bool Login_reg::check_reg(string Username, string Password) { // true = ready to use
    bool Check_username = true;
    n = All_User.Get_size();
    for (int i = 0; i < n; i++) {
        if (Username == All_User.Get_id(i)) {
            Check_username = false;
            break;
        }
    }
    if (Check_username) {
        t = new ID(Username, Password, 0);
        All_User.Add_node(t);
    }
    return Check_username;
}

void Login_reg::write_csv() {
    File.open("ID.csv", ios::out);
    if (File) {
        //input from class
        int n = All_User.Get_size(); //getsize from NODE to n
        for (int i = 0; i < n; i++) {
            Row = i + 1;
            Username = All_User.Get_id(i);
            Password = All_User.Get_pass(i);
            File << Row << "," << Username << "," << Password << "," << Permission << "\n";
        }
    }

    File.close();
}