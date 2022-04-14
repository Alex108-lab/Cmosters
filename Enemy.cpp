#ifndef Enemy_HPP
#define Enemy_HPP

#include <iostream>

using namespace std;

class Enemy
{
private:
    string enemy_name;
    int enemy_level;
    float enemy_life;
    float enemy_attack_damage;

public:
    Enemy(){};
    // ~Enemy()
    // {
    //     cout << "Destructor" << endl;
    // };

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

    void setLevel(int level)
    {
        enemy_level = level;
    }

    int getLevel()
    {
        return enemy_level;
    }

    void attack()
    {
        cout << "Name " << getName() << endl;
        cout << "Life " << getLife() << endl;
        cout << "Attack Damage " << getDamage() << endl;
        cout << "Level " << getLevel() << endl;
        cout
            << endl;
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
    // void attack()
    // {
    //     cout << getName() << "!!" << endl;
    //     cout << getLife() << endl;
    //     cout << getDamage() << endl;
    // }
};

class Slime : public Enemy
{
public:
    // void attack()
    // {
    //     cout << getName() << "!!" << endl;
    //     cout << getLife() << endl;
    //     cout << getDamage() << endl;
    // }
};

#endif
