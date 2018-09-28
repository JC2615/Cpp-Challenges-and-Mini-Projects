/**
 * Author: josh Curry
 * Description: Tic-tac-toe
 */

//Headers
#include <iostream>
#include <map>
using namespace std;

int main() {
  //Map that contains the places where X's and O's go
  map <int, char> places; 
  places[1] = '1';
  places[2] = '2';
  places[3] = '3';
  places[4] = '4';
  places[5] = '5';
  places[6] = '6';
  places[7] = '7';
  places[8] = '8';
  places[9] = '9';
  
  //Variable declaration
  int tie = 0;
  bool isX = true;
  int input;
  
  //Loop that keeps the game running until someone wins or ties
  while(true){
    
    //Game board
    cout << "   |   " << "  |" << endl;
    cout << places[1] << "  |  " << places[2] << "  | " << places[3] << endl;
    cout << "___|___" << "__|___" << endl;
    cout << "   |   " << "  |" << endl;
    cout << places[4] << "  |  " << places[5] << "  | " << places[6] << endl;
    cout << "___|___" << "__|___" << endl;
    cout << "   |   " << "  |" << endl;
    cout << places[7] << "  |  " << places[8] << "  | " << places[9] << endl;
    cout << "   |   " << "  |" << endl;
    //Win condition
    if(places[1] == places[2] && places[2] == places[3] || places[2] == places[5] && places[5] == places[8] 
      || places[3] == places[5] && places[5] == places[7] || places[4] == places[5] && places[5] == places[6]
      || places[7] == places[8] && places[8] == places[9] || places[1] == places[5] && places[5] == places[9]
      || places[1] == places[4] && places[4] == places[7] || places[3] == places[6] && places[6] == places[9]){
      if(isX == true){
        cout << "Player O, you win!!!" << endl;
      }
      else{
        cout << "Player X, you win!!!" << endl;
      }
      break;
    }
    //Tie condition
    else if(places[1] != '1' && places[2] != '2' && places[3] != '3' && places[4] != '4' && places[5] != '5'
          && places[6] != '6' && places[7] != '7' && places[8] != '8' && places[9] != '9'){
            cout << "It's a tie!" << endl;
            break;
  }
    //X's turn
    if(isX){
      cout << "Player X, input a number.";
      cin >> input;
      if(input < 1 || input > 9 || places[input] == 'X' || places[input] == 'O'){
        cout << "Invalid input. Try again." << endl;
        isX = true;
      }
      else{
        places[input] = 'X';
        isX = false;
      }
    }
    //O's turn
    else if(!isX){
      cout << "Player O, input a number.";
      cin >> input;
      if(input < 1 || input > 9 || places[input] == 'X' || places[input] == 'O'){
        cout << "Invalid input. Try again." << endl;
        isX = false;
      }
      else{
        places[input] = 'O';
        isX = true;
      }
    }
  }
}