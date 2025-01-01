#include <iostream>  
using namespace std;

void num(int x)
{
    cout << "Integer: " << x << endl; 
}

void num(double x)
{
    cout << "Double: " << x << endl; 
}

int main()
{
    num(9);

    num(65.88);

    return 0; 
}
