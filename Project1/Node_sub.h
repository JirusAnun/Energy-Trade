#pragma once
using namespace std;

class Electric : public Energy {
private:
    string genre, Substations, license;
    Electric* next_Electric;
public:
    void insert_first(Electric*&);
    void insert_last(Electric*&);
    void set_next_node(Electric*&);
    string get_genre();
    string get_Substations();
    string get_license();
    Electric* move_next();
    Electric(string, string, string, string, float, float);
    ~Electric();
};

Electric::Electric(string gen, string Sub, string lic, string Ent, float vol, float pri) :Energy(Ent, vol, pri) {
    genre = gen;
    Substations = Sub;
    license = lic;
    next_Electric = NULL;
}

Electric::~Electric() { }
string Electric::get_genre() {
    return genre;
}
string Electric::get_Substations() {
    return Substations;
}
string Electric::get_license() {
    return license;
}

Electric* Electric::move_next() {
    return next_Electric;
}

void Electric::set_next_node(Electric*& next_next_node) {
    next_Electric = next_next_node;
}

void Electric::insert_first(Electric*& new_node) {
    new_node->next_Electric = NULL;
}

void Electric::insert_last(Electric*& new_node) {
    this->next_Electric = new_node;
    new_node->next_Electric = NULL;
}


class Crude_oil : public Energy {
private:
    string type; 
    float api_gravity; 
    float sulfur; 
    Crude_oil* next_Crude_oil;
public:
    void set_next_node(Crude_oil*&);
    void insert_first(Crude_oil*&);
    void insert_last(Crude_oil*&);
    string get_type();
    float get_api_gravity();
    float get_Sulfur();
    Crude_oil* move_next();
    Crude_oil(string, float, float, string, float, float);
    ~Crude_oil();
};

Crude_oil::Crude_oil(string typ, float gra, float sul, string Ent, float vol, float pri) :Energy(Ent, vol, pri) {
    type = typ;
    api_gravity = gra;
    sulfur = sul;
    next_Crude_oil = NULL;
}

Crude_oil::~Crude_oil() { }

Crude_oil* Crude_oil::move_next() {
    return next_Crude_oil;
}

void Crude_oil::set_next_node(Crude_oil*& next_next_node) {
    next_Crude_oil = next_next_node;
}

void Crude_oil::insert_first(Crude_oil*& new_node) {
    new_node->next_Crude_oil = NULL;
}

void Crude_oil::insert_last(Crude_oil*& new_node) {
    this->next_Crude_oil = new_node;
    new_node->next_Crude_oil = NULL;
}

string Crude_oil::get_type() {
    return type;
}

float Crude_oil::get_api_gravity() {
    return api_gravity;
}

float Crude_oil::get_Sulfur() {
    return sulfur;
}

class Gas : public Energy {
    string type;
    float pressure, temperature; 
    Gas* next_Gas;
public:
    Gas* move_next();
    void set_next_node(Gas*&);
    void insert_first(Gas*&);
    void insert_last(Gas*&);
    string get_type();
    float get_pressure();
    float get_temperature();
    Gas(string, float, float, string, float, float);
    ~Gas();
};

Gas::Gas(string typ, float pre, float tem, string Ent, float vol, float pri) :Energy(Ent, vol, pri) {
    type = typ;
    pressure = pre;
    temperature = tem;
    next_Gas = NULL;
}

Gas::~Gas() { }
string Gas::get_type() {
    return type;
}
float Gas::get_pressure() {
    return pressure;
}

float Gas::get_temperature() {
    return temperature;
}

Gas* Gas::move_next() {
    return next_Gas;
}

void Gas::set_next_node(Gas*& next_next_node) {
    next_Gas = next_next_node;
}

void Gas::insert_first(Gas*& new_node) {
    new_node->next_Gas = NULL;
}

void Gas::insert_last(Gas*& new_node) {
    this->next_Gas = new_node;
    new_node->next_Gas = NULL;
}