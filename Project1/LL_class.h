#include <sstream>
#include <cstdlib>
#include <fstream>
#include "LL_base.h"
class LL_class {
public:
    class LL_Electric* LL_of_electric;
    class LL_Crude_oil* LL_of_oil;
    class LL_Gas* LL_of_gas;
    LL_class(LL_Electric*, LL_Crude_oil*, LL_Gas*);
    ~LL_class();
    void read_csv();

};

LL_class::LL_class(LL_Electric* LLE, LL_Crude_oil* LLO, LL_Gas* LLG) {
    LL_of_electric = LLE;
    LL_of_oil = LLO;
    LL_of_gas = LLG;
    cout << "cover hi\n";
    //Deconstruct class LL_Electric here
}

LL_class::~LL_class() {
    cout << "cover bye\n";
}

void LL_class::read_csv() {
    //turn information in csv into object
    ifstream read_file;
    read_file.open("Electric.csv");
    if (!read_file)//file
    {
        cout << "Error to open file" << endl;
    }
    else
    {
        cout << "Start Contain data to NODE\n";
        string gen, sub, lic, ent, s_vol, s_pri;
        float vol, pri;
        Electric* t;
        LL_Electric* LL_of_electric;
        string Line = "";

        while (getline(read_file, Line)) {
            stringstream read_string(Line);
            getline(read_string, gen, ',');
            getline(read_string, sub, ',');
            getline(read_string, lic, ',');
            getline(read_string, ent, ',');
            getline(read_string, s_vol, ',');
            getline(read_string, s_pri, ',');
            cout << gen << "-" << sub << "-" << lic << "-" << ent << "-" << s_vol << "-" << s_pri << endl;
            cout << "Finish get line\n";
            vol = std::stof(s_vol);
            pri = std::stof(s_pri);
            t = new Electric(gen, sub, lic, ent, vol, pri);
            this->LL_of_electric->add_node(t);
            cout << "==================" << endl;
            Line = "";
        }
    }
    read_file.close();

    read_file.open("Crude_oil.csv");
    if (!read_file)//file
    {
        cout << "Error to open file" << endl;
    }
    else
    {
        cout << "Start Contain data to NODE\n";
        string typ, ent, s_gra, s_sul, s_vol, s_pri;
        float gra, sul, vol, pri;
        Crude_oil* t;
        LL_Crude_oil* LL_of_Crude_oil;
        string Line = "";

        while (getline(read_file, Line)) {
            stringstream read_string(Line);
            getline(read_string, typ, ',');
            getline(read_string, s_gra, ',');
            getline(read_string, s_sul, ',');
            getline(read_string, ent, ',');
            getline(read_string, s_vol, ',');
            getline(read_string, s_pri, ',');
            cout << typ << "-" << s_gra << "-" << s_sul << "-" << ent << "-" << s_vol << "-" << s_pri << endl;
            cout << "Finish get line\n";
            gra = std::stof(s_gra);
            sul = std::stof(s_sul);
            vol = std::stof(s_vol);
            pri = std::stof(s_pri);
            t = new Crude_oil(typ, gra, sul, ent, vol, pri);
            this->LL_of_oil->add_node(t);
            cout << "==================" << endl;
            Line = "";
        }
    }
    read_file.close();

    read_file.open("Gas.csv");
    if (!read_file)//file
    {
        cout << "Error to open file" << endl;
    }
    else
    {
        cout << "Start Contain data to NODE\n";
        string typ, s_pre, s_tem, ent, s_vol, s_pri;
        float pre, tem, vol, pri;
        Gas* t;
        LL_Gas* LL_of_Gas;
        string Line = "";

        while (getline(read_file, Line)) {
            stringstream read_string(Line);
            getline(read_string, typ, ',');
            getline(read_string, s_pre, ',');
            getline(read_string, s_tem, ',');
            getline(read_string, ent, ',');
            getline(read_string, s_vol, ',');
            getline(read_string, s_pri, ',');
            cout << typ << "-" << s_pre << "-" << s_tem << "-" << ent << "-" << s_vol << "-" << s_pri << endl;
            cout << "Finish get line\n";
            pre = std::stof(s_pre);
            tem = std::stof(s_tem);
            vol = std::stof(s_vol);
            pri = std::stof(s_pri);
            t = new Gas(typ, pre, tem, ent, vol, pri);
            this->LL_of_gas->add_node(t);
            cout << "==================" << endl;
            Line = "";
        }
    }
    read_file.close();

}