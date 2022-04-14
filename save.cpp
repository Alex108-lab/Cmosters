#include <iostream>
#include <string.h>
#include <cstring>

#include "./structs.hpp"

char save_data(Player_data data){
  
    FILE *file;
    char saved;

    file = fopen("gamedata.dat", "ab"); // Open file if not exit the create

    if (file == NULL)
    {
        saved = false;
    }
    else
    {
        fwrite(&data, sizeof(data), 1, file);

        saved = true;

        fclose(file);
    }

    return saved;

}
