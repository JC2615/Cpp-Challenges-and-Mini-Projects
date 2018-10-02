#include <iostream>
#include <cstdlib>
#include <map>
#include <string>
using namespace std;

string class1(){
    unsigned int seed = time(0);
    srand(seed);

    map <int, string> class1;
    class1[0] = "Adetowo Ademiluyi";
    class1[1] = "Amietee Fuonding";
    class1[2] = "Blair Newman Jr";
    class1[3] = "Darren Giles";
    class1[4] = "Dei'Ray Ceaser";
    class1[5] = "Dominic Ducre";
    class1[6] = "Donald Moore";
    class1[7] = "Hassan Thomas";
    class1[8] = "Jabari Morris";
    class1[9] = "James Washington";
    class1[10] = "Jeremiah Larivaux";
    class1[11] = "Kai Adams";
    class1[12] = "Kofi Ford";
    class1[13] = "Paul Lockett";
    class1[14] = "Reese Robinson";
    class1[15] = "Reginald Abron";
    class1[16] = "Tiwong Nance Jr";
    class1[17] = "Tyler Lumpking";
    class1[18] = "Xavier Durant";
    class1[19] = "Chase Christmas";

    return "The chosen one is: " + class1[rand() % 20] + ".\n";
}

string class2(){
    unsigned int seed = time(0);
    srand(seed);

    map <int, string> class2;
    class2[0] = "Aaron Shelby";
    class2[1] = "Adrian Baron-Hyppolite";
    class2[2] = "Isaiah Colbert";
    class2[3] = "Jonathan Russ";
    class2[4] = "Josh Curry";
    class2[5] = "Julian Parker";
    class2[6] = "Klay Brown";
    class2[7] = "Kyle Brown";
    class2[8] = "Langston Harris";
    class2[9] = "Nicholaus Moreno";
    class2[10] = "Tyler Hill";
    class2[11] = "Zayd Zori";

    return "The chosen one is: " + class2[rand() % 12] + ".\n";
}

main(){
    
    cout << class1();    
    cout << class2();
}
