#include <iostream>
#include <cstddef>

#include "./Player.cpp"
#include "./Enemy.cpp"

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

int getSize()
{
    int i = 0;
    int r;

    for (; i <= size_t(a); i++)
    {
        r = i;
        cout << "R" << r
             << endl;
        cout << i
             << endl;
    }

    return r;
}

int main(int argc, char *argv[])
{

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

    cout << getSize()
         << endl;

    return 0;
}