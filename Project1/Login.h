#include <iostream>
#include <fstream>
#include <string.h>
#include <sstream>

using namespace std;
//#include "NODE.h"
#include "ID_NODE.h"
#include "LL.h"

int Login()
{
    fstream File;
    int Row, Permission, n;
    string Username, Password, Temp_username, Temp_password;
    LL User;
    ID* t;
    Permission = 0;

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
            getline(Read_string, Password, ',');
            t = new ID(Username, Password, 0);
            User.Add_node(t);
            cout << Row_str << " " << Username << " " << Password << endl;
            cout << "==================" << endl;
            Line = "";

        }
    }
    File.close();

    //Check Input and Value in Linklist
    cout << "Plese input Username: ";
    cin >> Username;
    cout << "Please input Password: ";
    cin >> Password;
    n = User.Get_size();
    for (int i = 0; i < n; i++)
    {

        if (Username == User.Get_id(i))
        {
            if (Password == User.Get_pass(i))
            {
                cout << "Login sucess" << endl;  //Login Sucess
                break;
            }
        }
        else if (i == n - 1)
            cout << "Login fail" << endl;
    }

    //return true false bra bra ......
}