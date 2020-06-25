#include <iostream>

using namespace std;

class Example 
{     
    public:  //Access Specifier
    Example() // Constructor
    {     
      cout << "I am in a constructor"; //Body of the constructor
    }
};

int main()
{
  Example ExampleObject;    // Create an object(ExampleObject) of class(Example), which will call the constructor.
  return 0;
}