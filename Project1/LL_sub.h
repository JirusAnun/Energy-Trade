//electric
class LL_Electric :public LL_Energy {
private:
    Electric* head_Electric;
public:
    void add_node(Electric*&);
    void delete_node(string, string);
    void buy_fuction(string, string, float);
    void sell_fuction(string, string, float);
    Electric* search_string(string, string);
    Electric* search_string(string, Electric*);
    string search_string_type(string, Electric*);
    Electric* get_head();
    void write_csv();
    LL_Electric();
    ~LL_Electric();
};

void LL_Electric::buy_fuction(string com_name, string com_type, float volum_buy) {
    float expense;
    expense = this->search_string(com_name, com_type)->user_select_buy(volum_buy);
    this->search_string(com_name, com_type)->adjust_volume(-volum_buy);
    sum_energy -= volum_buy;
    write_history_csv("buy", glob_user, com_name, volum_buy, expense);
}

void LL_Electric::sell_fuction(string com_name, string com_type, float volum_sell) {
    float expense;
    expense = this->search_string(com_name, com_type)->user_select_sell(volum_sell);
    this->search_string(com_name, com_type)->adjust_volume(volum_sell);
    sum_energy += volum_sell;
    write_history_csv("sell", glob_user, Energy_type_current, volum_sell, expense);
}

LL_Electric::LL_Electric() { head_Electric = NULL; }

LL_Electric::~LL_Electric() {
    Electric* t = head_Electric;
    int i;
    for (i = 0; i < sum_company; i++) {
        head_Electric = head_Electric->move_next();
        delete t;
        t = head_Electric;
    }
    sum_company = 0;
}

Electric* LL_Electric::get_head() { return head_Electric; }

void LL_Electric::add_node(Electric*& new_node) {
    Electric* t = head_Electric;

    if (!head_Electric)
    {
        head_Electric = new_node;
        head_Electric->insert_first(new_node);
    }
    else
    {
        while (t->move_next())
        {
            t = t->move_next();
        }
        t->insert_last(new_node);
    }
    sum_company++;
    sum_energy += new_node->get_volume();
}

//this use get pointer where both company's name and its type is then show information 
Electric* LL_Electric::search_string(string name_to_show, string type_to_show) {
    Electric* t = head_Electric;
    for (int i = 0; i < sum_company; i++) {
        if (name_to_show == (t->get_enterprise())
            && type_to_show == (t->get_genre())) {
            return t;
        }
        else { t = t->move_next(); }
    }
    return t;// this is NULL
}

/*
get_volume()
get_price()
get_enterprise()
*/

//This is for search its location of all company's name in node
//then use in "search_string_type"
Electric* LL_Electric::search_string(string to_search, Electric* current_point) {
    Electric* t = head_Electric;
    for (t = current_point; t; t = t->move_next())
    {
        if (to_search == (t->get_enterprise())) { return t; }
    }
    return t;// this is NULL
}

//this use for get all type of company's name to fill up dropdown type
string LL_Electric::search_string_type(string to_search, Electric* current_point) {
    // first inpit head
    Electric* t = search_string(to_search, current_point);// get where enterpise is
    if (t) {
        string temp_type;
        temp_type = t->get_genre();// keep type of that location
        search_string_type(to_search, t->move_next());// recursive
        return temp_type; // get type
    }
    else { return "There is no type to get anymore\n"; }
}




void LL_Electric::delete_node(string com_delete, string type_delete) {
    Electric* t = head_Electric;
    Electric* pret = NULL;
    Electric* next = NULL;
    for (int i = 0; i < sum_company; i++) {
        if ((com_delete == (t->get_enterprise()))
            && (type_delete == (t->get_genre()))) {
            goto deleteNodeCode;
        }
        else {
            pret = t;
            t = t->move_next();
        }
    }
deleteNodeCode:
    sum_energy -= t->get_volume();
    sum_company--;
    if (!pret) {
        head_Electric = t->move_next();
        delete t;
    }
    else if (!t) { sum_company++; }
    else {
        next = t->move_next();
        pret->set_next_node(next);
        delete t;
    }
}

void LL_Electric::write_csv() {
    fstream file;
    file.open("Electric.csv", ios::out);
    if (file)
    {
        string gen, sub, lic, ent;
        float vol, pri;
        Electric* t = head_Electric;
        for (int i = 0; i < sum_company; i++)
        {
            gen = (t->get_genre());
            sub = (t->get_Substations());
            lic = (t->get_license());
            ent = (t->get_enterprise());
            vol = (t->get_volume());
            pri = (t->get_price());
            t = t->move_next();
            file << gen << "," << sub << "," << lic << "," << ent <<
                "," << vol << "," << pri << "\n";
        }
    }
    file.close();
}

//oil
class LL_Crude_oil :public LL_Energy {
private:
    Crude_oil* head_Crude_oil;
public:
    void add_node(Crude_oil*&);
    void delete_node(string, string);
    void buy_fuction(string, string, float);
    void sell_fuction(string, string, float);
    Crude_oil* search_string(string, string);
    Crude_oil* search_string(string, Crude_oil*);
    string search_string_type(string, Crude_oil*);
    Crude_oil* get_head();
    void write_csv();
    LL_Crude_oil();
    ~LL_Crude_oil();
};

void LL_Crude_oil::buy_fuction(string com_name, string com_type, float volum_buy) {
    float expense;
    expense = this->search_string(com_name, com_type)->user_select_buy(volum_buy);
    this->search_string(com_name, com_type)->adjust_volume(-volum_buy);
    sum_energy -= volum_buy;
    write_history_csv("buy", glob_user, com_name, volum_buy, expense);
}

void LL_Crude_oil::sell_fuction(string com_name, string com_type, float volum_sell) {
    float expense;
    expense = this->search_string(com_name, com_type)->user_select_sell(volum_sell);
    this->search_string(com_name, com_type)->adjust_volume(volum_sell);
    sum_energy += volum_sell;
    write_history_csv("sell", glob_user, Energy_type_current, volum_sell, expense);
}


LL_Crude_oil::LL_Crude_oil() { head_Crude_oil = NULL; }

LL_Crude_oil::~LL_Crude_oil() {
    Crude_oil* t = head_Crude_oil;
    int i;
    for (i = 0; i < sum_company; i++) {
        head_Crude_oil = head_Crude_oil->move_next();
        delete t;
        t = head_Crude_oil;
    }
    sum_company = 0;
}


Crude_oil* LL_Crude_oil::get_head() { return head_Crude_oil; }

void LL_Crude_oil::add_node(Crude_oil*& new_node) {
    Crude_oil* t = head_Crude_oil;

    if (!head_Crude_oil)
    {
        head_Crude_oil = new_node;
        head_Crude_oil->insert_first(new_node);
    }
    else
    {
        while (t->move_next()) { t = t->move_next(); }
        t->insert_last(new_node);
    }
    sum_company++;
    sum_energy += new_node->Energy::get_volume();
}

//this use get pointer where both company's name and its type is then show information 
Crude_oil* LL_Crude_oil::search_string(string name_to_show, string type_to_show) {
    Crude_oil* t = head_Crude_oil;
    for (int i = 0; i < sum_company; i++) {
        if (name_to_show == (t->get_enterprise())
            && type_to_show == (t->get_type())) {
            return t;
        }
        else { t = t->move_next(); }
    }
    return t;// this is NULL
}


//This is for search its location of all company's name in node
//then use in "search_string_type"
Crude_oil* LL_Crude_oil::search_string(string to_search, Crude_oil* current_point) {
    Crude_oil* t = head_Crude_oil;
    for (t = current_point; t; t = t->move_next())
    {
        if (to_search == (t->get_enterprise())) { return t; }
    }
    return t;// this is NULL
}

//this use for get all type of company's name to fill up dropdown type
string LL_Crude_oil::search_string_type(string to_search, Crude_oil* current_point) {
    // first inpit head
    Crude_oil* t = search_string(to_search, current_point);// get where enterpise is
    if (t) {
        string temp_type;
        temp_type = t->get_type();// keep type of that location
        search_string_type(to_search, t->move_next());// recursive
        return temp_type; // get type
    }
    else { return " "; }
}




void LL_Crude_oil::delete_node(string com_delete, string type_delete) {
    Crude_oil* t = head_Crude_oil;
    Crude_oil* pret = NULL;
    Crude_oil* next = NULL;
    for (int i = 0; i < sum_company; i++) {
        if ((com_delete == (t->get_enterprise()))
            && (type_delete == (t->get_type()))) {
            goto deleteNodeCode;
        }
        else {
            pret = t;
            t = t->move_next();
        }
    }
deleteNodeCode:
    sum_energy -= t->get_volume();
    sum_company--;
    if (!pret) {
        head_Crude_oil = t->move_next();
        delete t;
    }
    else if (!t) { sum_company++; }
    else {
        next = t->move_next();
        pret->set_next_node(next);
        delete t;
    }
}

void LL_Crude_oil::write_csv() {
    fstream file;
    file.open("Crude_oil.csv", ios::out);
    if (file)
    {
        string typ, ent;
        float gra, sul, vol, pri;
        Crude_oil* t = head_Crude_oil;
        for (int i = 0; i < sum_company; i++)
        {
            typ = (t->get_type());
            gra = (t->get_api_gravity());
            sul = (t->get_sulfer());

            ent = (t->get_enterprise());
            vol = (t->get_volume());
            pri = (t->get_price());
            t = t->move_next();
            file << typ << "," << gra << "," << sul << "," << ent << "," << vol << "," << pri << "\n";
        }
    }
    file.close();
}

//gas
class LL_Gas :public LL_Energy {
private:
    Gas* head_Gas;
public:
    void add_node(Gas*&);
    void delete_node(string, string);
    void buy_fuction(string, string, float);
    void sell_fuction(string, string, float);
    Gas* search_string(string, string);
    Gas* search_string(string, Gas*);
    string search_string_type(string, Gas*);
    Gas* get_head();
    void write_csv();
    LL_Gas();
    ~LL_Gas();
};

LL_Gas::LL_Gas() { head_Gas = NULL; }

LL_Gas::~LL_Gas() {
    Gas* t = head_Gas;
    int i;
    for (i = 0; i < sum_company; i++) {
        head_Gas = head_Gas->move_next();
        delete t;
        t = head_Gas;
    }
    sum_company = 0;
}

void LL_Gas::buy_fuction(string com_name, string com_type, float volum_buy) {
    float expense;
    expense = this->search_string(com_name, com_type)->user_select_buy(volum_buy);
    this->search_string(com_name, com_type)->adjust_volume(-volum_buy);
    sum_energy -= volum_buy;
    write_history_csv("buy", glob_user, com_name, volum_buy, expense);
}

void LL_Gas::sell_fuction(string com_name, string com_type, float volum_sell) {
    float expense;
    expense = this->search_string(com_name, com_type)->user_select_sell(volum_sell);
    this->search_string(com_name, com_type)->adjust_volume(volum_sell);
    sum_energy += volum_sell;
    write_history_csv("sell", glob_user, Energy_type_current, volum_sell, expense);
}

Gas* LL_Gas::get_head() {
    return head_Gas;
}

void LL_Gas::add_node(Gas*& new_node) {
    Gas* t = head_Gas;

    if (!head_Gas)
    {
        head_Gas = new_node;
        head_Gas->insert_first(new_node);
    }
    else
    {
        while (t->move_next())
        {
            t = t->move_next();
        }
        t->insert_last(new_node);
    }
    sum_company++;
    sum_energy += new_node->get_volume();
}

//this use get pointer where both company's name and its type is then show information 
Gas* LL_Gas::search_string(string name_to_show, string type_to_show) {
    Gas* t = head_Gas;
    for (int i = 0; i < sum_company; i++) {
        if (name_to_show == (t->get_enterprise())
            && type_to_show == (t->get_type())) {
            return t;
        }
        else { t = t->move_next(); }
    }
    return t;// this is NULL
}

//This is for search its location of all company's name in node
//then use in "search_string_type"
Gas* LL_Gas::search_string(string to_search, Gas* current_point) {
    Gas* t = head_Gas;
    for (t = current_point; t; t = t->move_next())
    {
        if (to_search == (t->get_enterprise())) { return t; }
    }
    return t;// this is NULL
}

//this use for get all type of company's name to fill up dropdown type
string LL_Gas::search_string_type(string to_search, Gas* current_point) {
    // first inpit head
    Gas* t = search_string(to_search, current_point);// get where enterpise is
    if (t) {
        string temp_type;
        temp_type = t->get_type();// keep type of that location
        search_string_type(to_search, t->move_next());// recursive
        return temp_type; // get type
    }
    else { return " "; }
}




void LL_Gas::delete_node(string com_delete, string type_delete) {
    Gas* t = head_Gas;
    Gas* pret = NULL;
    Gas* next = NULL;
    for (int i = 0; i < sum_company; i++) {
        if ((com_delete == (t->get_enterprise()))
            && (type_delete == (t->get_type()))) {
            goto deleteNodeCode;
        }
        else {
            pret = t;
            t = t->move_next();
        }
    }
deleteNodeCode:
    sum_energy -= t->get_volume();
    sum_company--;
    if (!pret) {
        head_Gas = t->move_next();
        delete t;
    }
    else if (!t) { sum_company++; }
    else {
        next = t->move_next();
        pret->set_next_node(next);
        delete t;
    }
}

void LL_Gas::write_csv() {
    fstream file;
    file.open("Gas.csv", ios::out);
    if (file)
    {
        string typ, ent;
        float pre, tem, vol, pri;
        Gas* t = head_Gas;
        for (int i = 0; i < sum_company; i++)
        {
            typ = (t->get_type());
            pre = (t->get_pressure());
            tem = (t->get_temperature());

            ent = (t->get_enterprise());
            vol = (t->get_volume());
            pri = (t->get_price());
            t = t->move_next();
            file << typ << "," << pre << "," << tem << "," << ent <<
                "," << vol << "," << pri << "\n";
        }
    }
    file.close();
}