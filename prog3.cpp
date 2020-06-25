#include <iostream>
using namespace std;

class Area
{
    private:
       int radius;

    public:
       // Constructor
       Area(): radius(10.0){ }

       void FindRadius()
       {
           cout << "Enter radius: ";
           cin >> radius;
       }

       float FindArea()
       { 
           return (3.14 * radius * radius);
       }

       void ShowArea(float rad)
       {
           cout << "Area of circle with user input: " << rad;
       }
};

int main()
{
    Area A1, A2;
    float rad;

    A1.FindRadius();
    rad = A1.FindArea();
    A1.ShowArea(rad);

    cout << endl << "Area of circle when radius is automatically initialized: ";

    rad = A2.FindArea();
    A2.ShowArea(rad);

    return 0;
}