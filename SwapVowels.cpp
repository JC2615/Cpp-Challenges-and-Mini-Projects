#include <iostream>
#include <string>
using namespace std;

int main() {
  string phrase;
  cout << "Enter a phrase: " << endl;
  getline(cin, phrase);
  cout << "Original Phrase: " << phrase << endl;

  char vowels[65] = {};
  int vowelCount = 0;
  
  
  for(int i = 0; i < phrase.length(); i++)
  {
    if (phrase[i] == 'a' || phrase[i] == 'e' || phrase[i] == 'i' || phrase[i] == 'o' || phrase[i] == 'u'
        || phrase[i] == 'A' || phrase[i] == 'E' || phrase[i] == 'I' || phrase[i] == 'O' || phrase[i] == 'U'){
      
      vowels[vowelCount] = phrase[i];
      vowelCount++;

    }
  }

  vowelCount--;

  for(int i = 0; i < phrase.length(); i++)
  {
    if (phrase[i] == 'a' || phrase[i] == 'e' || phrase[i] == 'i' || phrase[i] == 'o' || phrase[i] == 'u'
        || phrase[i] == 'A' || phrase[i] == 'E' || phrase[i] == 'I' || phrase[i] == 'O' || phrase[i] == 'U'){
      
      phrase[i] = vowels[vowelCount];
      //cout << vowelCount << endl;
      vowelCount--;

    }
  }

  cout << "New phrase: " << phrase << endl;
}