#include <iostream>
using namespace std;
class Player 
{        
  public:          // Access specifier
    string name;  // Attribute
    string club;  // Attribute
    int age;      // Attribute
    Player(string x, string y, int z) // Constructor with parameters
    {  
      name = x;
      club = y;
      age = z;
    }
};

int main() 
{
  Player p1("Messi", "Barcelona", 33); //Object for Constructor
  Player p2("Ronaldo", "Juventus", 35); //Object for Constructor

  // Print values
  cout << p1.name<< " " << p1.club << " " << p1.age << "\n";
  cout << p2.name<< " " << p2.club << " " << p2.age << "\n";
  return 0;
}


