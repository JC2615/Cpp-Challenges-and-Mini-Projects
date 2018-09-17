/**
 * Author: Josh Curry
 * Description: A program that finds the first character in a string that doesn't repeat.
 */

#include <iostream>
#include <string>
using namespace std;


int main() {
  
  //Variable declarations
  string str;
  string phrase;
  int j;
  
  //Prompt user
  cout << "Enter phrase:\n";
  getline(cin, phrase, '\n');
  
  //Checks string for repetition
  for(int i = 0; i < phrase.length(); i++){
    j = i;
    for(int i = (j + 1); i < phrase.length(); i++){
      if(phrase[j] == phrase[i]){
        
      }
      else{
        str = phrase[j];
        return 0;
      }
    }
  }
  
  //Outputs the character
  cout << str << endl;
}