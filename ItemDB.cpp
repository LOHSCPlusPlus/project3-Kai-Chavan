#include "ItemDB.h"


#include <iostream>
#include <fstream> 
#include "ReadUtils.h"


VideogamesDataBase :: VideogamesDataBase (){
  numGames = 0;
  readgames();
}



void VideogamesDataBase :: readgames() {
    ifstream gameFile("videogames.txt");
    numGames = 0;
    
    while(gameFile.peek() != EOF && numGames < 200) {
        games[numGames].read(gameFile);
        numGames++;
    }
    
    
}

void VideogamesDataBase :: printArrayToScreen() {
  // cout << "here" << endl; 
    for (int index = 0; index < numGames; index++) {
        cout << "Index " << index << ": ";
        games[index].printV(cout);
    }
}


void VideogamesDataBase :: adds (){
  games[numGames].addgame();
  numGames++;
}

void VideogamesDataBase :: removegame(int x){

  for (int z = x; z < numGames -1  ; z++){
 games[z] = games[z+1];
    
    }
  numGames--;
  cout << numGames;
  }
void VideogamesDataBase :: printO (int num){
   string Eorigin = "";
  cout <<"Enter Developer: ";
  getline(cin,Eorigin);


    for (int x = 0; x < num; x++){
   
      if (games[x].getDev() == Eorigin){
      
         games[x].printV(cout);
        cout << endl;
}
}
}

void VideogamesDataBase ::  printArrayToFile() {
  //cout << "here" << endl; 
  ofstream outFile(fileName);
    for (int index = 0; index < numGames; index++) {
        games[index].printV(outFile);
    }
}

void VideogamesDataBase :: insert(){
  int count;
if (numGames < 200){
  cout << "Enter insert index";
  cin >> count;
  if (count < 200){
    for (int x = numGames-1; x > count; x--){
      games[x+1] = games[x];
    }
    games[count].addgame();
  numGames++;
    }

  
}


  
}
int VideogamesDataBase :: num(){
  return numGames;
}
