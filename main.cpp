#include <iostream>
#include <string.h>
#include <cstddef>

#include "./Player.cpp"
#include "./Enemy.cpp"
#include "./structs.hpp"
#include "./save.hpp"
#include "./read_data.hpp"

using namespace std;

string a[] = {
    "exp * 2",
    "inmortalidad",
    "fire magic",
    "fire magic",
    "fire magic",
    "fire magic",
    "fire magic",
    "ice magic",
    "Invocation magic",
};

int main(int argc, char *argv[])
{
    Player_data dat;

    Player p;

    Ninja n;
    Moster m;
    Slime s;
    Enemy e;

    Player *p1 = &p;

    Enemy *e1 = &n;
    Enemy *e2 = &m;
    Enemy *e3 = &e;
    Enemy *e4 = &s;

    p1->setName("Alex");
    p1->setLife(65);
    p1->setAtributes(a, 19);
    p1->attack();

    // Ninja Atributes
    n.setName("Ninja");
    n.setLife(41.3);
    n.setDamage(15.2);
    n.setLevel(1);

    // Moster Atributes
    m.setName("Moster");
    m.setLife(61.2);
    m.setDamage(24.2);
    m.setLevel(1);

    s.setName("Slime");
    s.setLife(6);
    s.setDamage(3);
    s.setLevel(1);

    // Enemy Atributes
    e.setName("Enemy");
    e.setLife(6.2);
    e.setDamage(67.2);
    e.setLevel(1);

    e1->attack();
    e2->attack();
    e3->attack();
    e4->attack();

    // getchar();

    cout << "Size " << a->length()
         << endl;
    cout << "Size " << a->length() * 3
         << endl;

    dat.name = p1->getName();
    dat.life = p1->getLife();
    save_data(dat);

    Player_data *data1;
    int nums_data;

    data1 = read_data(&nums_data);

    if (nums_data == 0)
    {
        printf("\n\tThe file is emtpy!\n");
        getchar();
    }
    else
    {
        cout << "dat1 " << data1->name << endl;
        cout << "dat1 " << data1->life << endl;
    }

    cout << "dat " << dat.name << endl;
    cout << "dat " << dat.life << endl;
    
    return 0;
}
