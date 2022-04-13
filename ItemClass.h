#include <ostream>
#include "ReadUtils.h"
#include <fstream> 
using namespace std;
class Videogames{
    public:
Videogames();    

void readgames();
void read(ifstream &inFile);
void printV(ostream &out);
void addgame();
string getDev();
    

  
    private:

enum {MAX_CHAR_LEN=100};
char title [200];
double Numsales;
char plat[200];
char date [200];
char dev [200];
char publisher[200];
bool isValid;
};
