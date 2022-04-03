#include <iostream>

using namespace std;

class Enemy
{
private:
    string enemy_name;
    float enemy_life;
    float enemy_attack_damage;

public:
    Enemy(){};

    virtual void setName(string name)
    {
        enemy_name = name;
    }

    string getName()
    {
        return enemy_name;
    }

    virtual void setLife(float life)
    {
        enemy_life = life;
    }

    float getLife()
    {
        return enemy_life;
    }

    void setDamage(float damage)
    {
        enemy_attack_damage = damage;
    }

    float getDamage()
    {
        return enemy_attack_damage;
    }

    virtual void attack()
    {
        cout << "Enemy!!" << endl;
        cout << "Name " << enemy_name << endl;
        cout << "Life " << enemy_life << endl;
        cout << "Attack Damage " << enemy_attack_damage << endl;
    };
};

class Ninja : public Enemy
{
public:
    void attack()
    {
        cout << getName() << "!!" << endl;
        cout << getLife() << endl;
        cout << getDamage() << endl;
    }
};

class Moster : public Enemy
{
public:
    void attack()
    {
        cout << getName() << "!!" << endl;
        cout << getLife() << endl;
        cout << getDamage() << endl;
    }
};

int main(int argc, char *argv[])
{

    Ninja n;
    Moster m;
    Enemy e;
    Enemy *e1 = &n;
    Enemy *e2 = &m;
    Enemy *e3 = &e;

    // Ninja Atributes
    n.setName("Ninja");
    n.setLife(41.3);
    n.setDamage(15.2);

    // Moster Atributes
    m.setName("Moster");
    m.setLife(61.2);
    m.setDamage(24.2);

    // Enemy Atributes
    e.setName("Enemy");
    e.setLife(6.2);
    e.setDamage(67.2);

    e1->attack();
    e2->attack();
    e3->attack();

    return 0;
}
