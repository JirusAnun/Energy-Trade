#pragma once
class Energy {
protected:
    string Enterprise;
    float volume, price;
public:
    //get_value_fuction
    float get_volume();
    float get_price();
    string get_enterprise();
    //method and fuction
    float user_select_sell(float);
    float user_select_buy(float);
    Energy(string, float, float);
    ~Energy();
};

Energy::Energy(string Ent, float vol, float pri) {
    Enterprise = Ent;
    volume = vol;
    price = pri;
}
Energy::~Energy() { }

string Energy::get_enterprise() {
    return Enterprise;
}

float Energy::get_volume() { return volume; }

float Energy::get_price() {
    return price;
}


float Energy::user_select_sell(float user_input) {
    float expense = roundValue(price * user_input * 0.8);
    return expense;
}


float Energy::user_select_buy(float user_input) {
    float expense = roundValue(price * user_input);
    return expense;
}