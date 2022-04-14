#ifndef Player_HPP
#define Player_HPP

#include <iostream>
#include <cstring>
#include <string.h>
#include <vector>
#include <random>

using namespace std;

class Player
{
protected:
    typedef vector<string> vec;

protected:
    int size1;

private:
    string player_name;
    string player_attributes[60];
    string player_role;
    float player_life;
    float player_damage;

public:
    virtual void attack()
    {
        cout << getName() << "!!" << endl;
        cout << getLife() << endl;
        cout
            << endl;
    }

    virtual void setName(string name)
    {
        player_name = name;
    }

    string getName()
    {
        return player_name;
    }

    virtual void setAtributes(string name[80], int size)
    {
        int i = 0;

        while (i <= size)
        {
            player_attributes[i] += name[i];
            cout << player_attributes[i] << endl;

            i++;
        }
        cout << "Atributes " << player_attributes[2] << endl;
    }

    void getAtributes()
    {
        // for (int i = 0; i >= size1; i++)
        // {
        //     cout << player_attributes[i] << endl;
        // }
    }

    virtual void setLife(float life)
    {
        player_life = life;
    }

    float getLife()
    {
        return player_life;
    }

    virtual void setRole(string role){
      player_role = role;
    }
};

#endif
