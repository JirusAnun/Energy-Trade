#pragma once
#include <iostream>
#include <fstream>
#include <string.h>
#include <sstream>
using namespace std;
//#include "NODE.h"
#include "ID_NODE.h"
#include "LL.h"



void Register()
{
    //setting
    fstream File;
    int Row, Permission;
    string Username, Pass;
    LL User;
    ID* t;
    Permission = 0;  //temporary set every permission to false
    //ID id1("Physic","loveHTML",0), id2("CHEM","loveTEST",0);

    //Read file and contain in Linklist
    ifstream Read_file;
    Read_file.open("sample.csv");
    if (!Read_file)//file
    {
        cout << "Error to open file" << endl;
    }
    else
    {
        string Line = "";
        string Row_str;

        while (getline(Read_file, Line)) {
            stringstream Read_string(Line);
            getline(Read_string, Row_str, ',');
            getline(Read_string, Username, ',');
            getline(Read_string, Pass, ',');
            t = new ID(Username, Pass, 0);
            User.Add_node(t);
            cout << Row_str << " " << Username << " " << Pass << endl;
            cout << "==================" << endl;
            Line = "";

        }
    }
    File.close();

    //Insert Data to LL
    for (int i = 0; i < 3; i++)
    {
        cout << "Input username: ";
        cin >> Username;
        cout << "Input Password: ";
        cin >> Pass;
        //cout<<"Insert data "<<username<<" "<<pass<<endl;
        t = new ID(Username, Pass, 0);
        User.Add_node(t);
    }

    //Write file
    File.open("sample.csv", ios::out);
    if (!File)
    {
        cout << "Error" << endl;
    }
    else
    {
        //input from class
        cout << "Check input from class" << endl;
        int n = User.Get_size(); //getsize from NODE to n
        for (int i = 0; i < n; i++)
        {

            Row = i + 1;
            Username = User.Get_id(i);
            //username = id1.get_username();
            Pass = User.Get_pass(i);
            //pass = id1.get_password();
            cout << "Write " << Username << " " << Pass << " " << endl;
            File << Row << "," << Username << "," << Pass << "," << Permission << "\n";
        }
    }

    File.close();
    cout << endl << "Finish Write file" << endl
        << "================" << endl;
    //read file (output form csv)
    //file.open("sample.csv",ios::in);
    User.Show_all();


}








