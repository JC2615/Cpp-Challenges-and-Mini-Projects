#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

void printHashtags(int num){
  for(int i = 0; i < num; i++){
    cout << '#';
  }
}

void Square(){
  int length;
  cout << "Length:";
  cin >> length;
  
  cout << "Area: " << length * length << endl;
}

void Rect(){
  int length;
  int width;
  
  cout << "Length: ";
  cin >> length;
  cout << "Width: ";
  cin >> width;
  
  cout << "Area: " << length * width << endl;
}

void Circ(){
  int radius;
  
  cout << "Radius: ";
  cin >> radius;
  
  cout << "Area: " << 2 * 3.14 * (radius * radius) << endl;
}

void Rando(){
  unsigned int seed = time(0);
  srand(seed);
  cout << "Random Number: " << rand() % 1000 << endl;
}

void header(string title){
  cout << endl;
  printHashtags(33);
  cout << endl;
  cout << "#" << endl;
  cout << "#    " << title << endl;
  cout << "#" << endl;
  printHashtags(33);
  cout << endl;
}

int main() {
  while(true){
    char input;
    
    cout << "\nS: Area of a Square" << endl;
    cout << "R: Area of a Rectangle" << endl;
    cout << "C: Area of a Circle" << endl;
    cout << "W: Whatever? A random number." << endl;
    cout << "Q: Quit" << endl;
    
    cin >> input;
    
    switch(input){
      case 's':
      case 'S':
        header("Area of a Square");
        Square();
        break;
      case 'r':
      case 'R':
        header("Area of a Rectangle");
        Rect();
        break;
      case 'c':
      case 'C':
        header("Area of a Circle");
        Circ();
        break;
      case 'w':
      case 'W':
        header("Whatever");
        Rando();
        break;
      case 'q':
      case 'Q':
        header("You quit.");
        return 0;
    }
  }
}