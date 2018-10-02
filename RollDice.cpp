#include <iostream>
#include <cstdlib>
using namespace std;

void diceOne(){
  cout << ",---------," << endl;
  cout << "|         |" << endl;
  cout << "|    O    |" << endl;
  cout << "|         |" << endl;
  cout << "'---------'" << endl;
}

void diceTwo(){
  cout << ",---------," << endl;
  cout << "| O       |" << endl;
  cout << "|         |" << endl;
  cout << "|       O |" << endl;
  cout << "'---------'" << endl;
}

void diceThree(){
  cout << ",---------," << endl;
  cout << "| O       |" << endl;
  cout << "|    O    |" << endl;
  cout << "|       O |" << endl;
  cout << "'---------'" << endl;
}

void diceFour(){
  cout << ",---------," << endl;
  cout << "| O     O |" << endl;
  cout << "|         |" << endl;
  cout << "| O     O |" << endl;
  cout << "'---------'" << endl;
}

void diceFive(){
  cout << ",---------," << endl;
  cout << "| O     O |" << endl;
  cout << "|    O    |" << endl;
  cout << "| O     O |" << endl;
  cout << "'---------'" << endl;
}

void diceSix(){
  cout << ",---------," << endl;
  cout << "| O     O |" << endl;
  cout << "| O     O |" << endl;
  cout << "| O     O |" << endl;
  cout << "'---------'" << endl;
}

void printDice(int num){
    
    switch (num)
    {
        case 1:
            diceOne();
            break;
        case 2:
            diceTwo();
            break;
        case 3:
            diceThree();
            break;
        case 4:
            diceFour();
            break;
        case 5:
            diceFive();
            break;
        case 6:
            diceSix();
            break;
    }
}

int main() {
  unsigned int seed = time(0);
  srand(seed);
  
  for(int i = 0; i < 7; i++)
  {
    printDice(rand() % 6);
  }
  
}