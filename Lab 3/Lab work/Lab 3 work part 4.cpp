#include <iostream> 
using namespace std;
int main ()
{
        int a, b;
        cout << "Enter first integer number : \n"; 
        cin >> a;
        cout << "Enter second integer number : \n"; 
        cin >> b; 
		if (a > b)
        cout << a << "-" << b <<"= " << a - b;
        else
        cout << b << " - " << a << " = " << b - a;

        return 0;
}