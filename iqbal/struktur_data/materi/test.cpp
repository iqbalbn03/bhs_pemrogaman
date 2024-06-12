#include <iostream>
#include <limits>
using namespace std;


int main()
{
    int a = 1;

    cout << a << endl;
    cout << sizeof(a) << "byte" << endl;
    cout << numeric_limits<int>::max() << endl;

    
    return 0;
}