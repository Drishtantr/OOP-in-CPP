#include <iostream>
using namespace std;

class Player
{
    public:
    int no;
    string name;
    // first constructor
    Player(int x)
    {
        no = x;
        name = "None";
        cout<<no<<" "<<name;
    }
    // second constructor
    Player(int x, string str)
    {
        no = x;
        name = str;
        cout<<endl<<no<<" "<<name;
    }
};

int main()
{
    // P1 initialized with no 105 and name None
    Player P1(105);
    
    // P2 initialized with no 11 and name Bale
    Player P2(11, "Bale");
}