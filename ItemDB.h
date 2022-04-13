#include "ItemClass.h"

class VideogamesDataBase{
public:
    
VideogamesDataBase();
void readgames();
void printArrayToScreen();
void adds ();
void removegame(int x);
void printO (int num);
void printArrayToFile();
void insert();
int num();

private:

enum {MAX_RABBITS=200};
Videogames games[MAX_RABBITS];
char fileName[MAX_RABBITS];
int numGames;




};