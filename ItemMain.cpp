#include <iostream>
#include "ItemDB.h"
#include <fstream> 
#include "ReadUtils.h"
using namespace std;

int main() {
VideogamesDataBase db;
  
  string in = "";
  int ind;
  int numb = 0;
  db.readgames();
  
  while (numb != -1){
    cout << '\n';
    cout << "Enter 1 to remove game" << endl;
    cout << "Enter 2 to add game" << endl;
     cout << "Enter 3 to display games by developers " << endl;
     cout << "Enter 4 to display games" << endl;
    cout << "Enter 5 to save changes to the file" << endl;
    cout << "Enter 6 to reload datatbase" << endl;
    cout << "Enter 7 to insert a number" << endl;
    cout << db.num() << endl;
     numb = readInt( "Enter -1 to leave");
     cout << endl;
    
     cin.ignore(100,'\n');


    if (db.num() < 200 && numb == 2){
  db.adds();

  }
  if (db.num() < 200 && numb ==1){
    cout << "Enter index to remove";
    cin >> ind;
db.removegame(ind);
  
  
}  
  if (db.num() < 200 && numb == 3){
    db.printO(db.num());

}
    if (db.num() < 200 && numb == 4){
db.printArrayToScreen();
      }

    if (db.num() < 200 && numb == 6){
  db.readgames();
      }
  if (db.num() < 200 && numb == 5){
  db.printArrayToFile();
      }
    if (db.num() < 200 && numb == 7){
      db.insert();
    }
    
  
}
  } 
