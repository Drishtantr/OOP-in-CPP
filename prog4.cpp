#include <iostream>
using namespace std;

class Year
{
    public:
    int date;
    Year()
    {
        date = 2020;
    }
};

int main()
{
    Year y;
    cout << y.date;
}