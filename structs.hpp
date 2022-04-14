#ifndef STRUCTS_HPP_
#define STRUCTS_HPP_

#include <cstdlib>
#include <stdlib.h>

using namespace std;

typedef struct
{
  string save_data;
} GameData;

typedef struct
{
  int life;
  string name;
  string attrs[100];
  string role;
} Player_data;

#endif // STRUCTS_HPP_
