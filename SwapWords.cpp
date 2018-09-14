#include <iostream>
#include <string>
using namespace std;

int main() {
  string phrase;
  cout << "Enter a phrase: " << endl;
  getline(cin, phrase);
  cout << "Original Phrase: " << phrase << endl;

  string words[100] = {};
  int wordCount = 0;

  for(int i = 0; i < phrase.length(); i++)
  {
    
    if (phrase[i] != ' ') {
        words[wordCount] += phrase[i];
    }
    else{
        wordCount++;
    }
    
  }
  
  for(int i = wordCount; i >= 0; i--)
  {
    cout << words[wordCount] << " ";
    wordCount--;
  }
    
}
  
  
  