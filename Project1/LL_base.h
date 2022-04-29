#pragma once
#ifndef LL_BASE_H
#define LL_BASE_H
class LL_Energy {
protected:
    int sum_company;
    float sum_energy;
public:
    float get_sum_energy();
    int get_size();
    void write_history_csv(string, string, string, float, float);
    LL_Energy();
    ~LL_Energy();
};

LL_Energy::LL_Energy() {
    sum_energy = 0;
    sum_company = 0;
}

LL_Energy::~LL_Energy() { }

int LL_Energy::get_size() { return sum_company; }

float LL_Energy::get_sum_energy() { return sum_energy; }

void LL_Energy::write_history_csv(string buy_or_sell, string Username, string Energy_type_current, float volume, float expense) {
    // keep value that user cliked for string type
    ofstream file;

    file.open("file/History.csv", ios_base::app); // append instead of overwrite
    if (file)
    {
        file << buy_or_sell << "," << Username << "," <<
            Energy_type_current << "," << volume << "," << expense << "\n";
    }
    file.close();
}

#endif