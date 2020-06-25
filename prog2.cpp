#include <iostream>
using namespace std;
class Example 
{     
  public:  
  Example(); // Constructor declaration
};
Example::Example() // Constructor Definition
{
    cout << "I am in a constructor"; //Body of the constructor
};
int main()
{
  Example ExampleObject;    
  return 0;
}