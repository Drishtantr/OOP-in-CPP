#include <iostream>
using namespace std;
class Player 
{        
    public:          // Access specifier
    string name;  // Attribute
    int age;      // Attribute
    Player(string x) // Constructor with parameters
    {  
      name = x;
    }
};

int main() 
{
  Player p1("Messi"); //Object for Constructor
  Player p2("Ronaldo"); //Object for Constructor
  Player p3("Bale");

  // Print values
  cout << p1.name;
  cout << p2.name;
  cout << p3.name;
  return 0;
}


