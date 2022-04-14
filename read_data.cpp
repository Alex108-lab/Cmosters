#include <iostream>
#include <string.h>
#include <cstring>

#include "./structs.hpp"
#include "./read_data.hpp"

Player_data *read_data(int *n)
{
    FILE *file;
    int i;
    Player_data data;
    Player_data *datas; // Dinamic vector

    file = fopen("gamedata.dat", "rb");

    if (file == NULL)
    {
        *n = false;
        datas = NULL;
    }
    else
    {
        fseek(file, 0, SEEK_END);
        *n = ftell(file) / sizeof(Player_data);

        datas = (Player_data *)malloc((*n) * sizeof(Player_data));

        fseek(file, 0, SEEK_SET);
        fread(&data, sizeof(data), 1, file);

        i = 0;

        while (!feof(file))
        {
            datas[i++] = data;
            fread(&data, sizeof(data), 1, file);
        }

        fclose(file);
    }

    return datas;
}
