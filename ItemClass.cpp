  #include <iostream>
#include <fstream>
#include <cstring>

#include "ItemClass.h"
#include <iostream>
#include <fstream> 
#include "ReadUtils.h"
const int MAX_GAME=200;
Videogames::Videogames() {
    for (int x = 0; x< 200; x++){
      title[x] = '\0';
      plat[x] = '\0';
      dev[x] = '\0';
      publisher[x] = '\0';
      date[x] = '\0';

      
    }
Numsales = 0.0;
  
}

void Videogames :: read(ifstream &inFile){
  
    
    inFile.get(title,(Videogames::MAX_CHAR_LEN),';');
    inFile.ignore(100,';');
   inFile >>(Numsales);
    inFile.ignore(100,';');
    inFile.get(plat,(Videogames::MAX_CHAR_LEN),';');
    inFile.ignore(100,';');
  inFile >>(date);
  inFile.ignore(100,';');
    inFile.get(dev,(Videogames::MAX_CHAR_LEN),';');
    inFile.ignore(100,';');
     inFile.get(publisher,(Videogames::MAX_CHAR_LEN),'\n');
    inFile.ignore(100,'\n');

    
    

}

void Videogames :: printV(ostream &out){
    out << title << ";";
    out << Numsales << ";";
    out <<plat << ";";
  out<<fixed;
  out << date << ";";
  out << dev << ";";
    out << publisher<< endl;
}

void Videogames :: addgame (){
   
cout << "Enter the details of the game" << endl;
cout << "Game Name :";
//cin.ignore(100, '\n');
cin.getline(title,200);

Numsales = readDouble("Game Sales : ");
      cin.ignore(100, '\n');
cout << "Game Platform :";
cin.getline(plat,200);
 cout << "Game Date :";
cin.getline(date,200);
 cout << "Game Developers:";
cin.getline(dev,200);
 cout << "Game publisher :";
cin.getline(publisher,200);

  
}

string Videogames :: getDev(){
  return dev;
}