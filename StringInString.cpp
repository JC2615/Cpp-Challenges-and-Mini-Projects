#include <iostream>
#include <string>
using namespace std;

int main() {
  int l = 0;
  int F = 0;
  string str;
  string phrase;
  string text;
  bool isInPhrase = false;
  cout << "Enter phrase:\n";
  getline(cin, phrase, '\n');
  
  cout << "Find substring:\n";
  getline(cin, str, '\n');

  for (int i = 0; i < phrase.length(); i++){
      if (F == str.length() - 1 && isInPhrase == true){
                  break;
              }
      if (phrase[i] == str[0]){
          l = i;
          for (int f = 0; f < str.length(); f++){
              if (phrase[l] == str[f]){
                  isInPhrase = true;
              }
              else{
                  isInPhrase = false;
              }
              l++;
              F = f;
          }
      }
  }

  if (isInPhrase){
      text = "True";
  }
  else{
      text = "False";
  }

  cout << "Is \"" << str << "\" in phrase \"" << phrase << "\" : " << text << endl;
  
}