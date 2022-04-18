#include "Lorry.h"
#include <iostream>

using namespace std;

int main()
{
    Car c1;
    cin >> c1;
    cout << c1 << endl;
    cout << "count = " << Car::Count() << endl;
    {
        Lorry l1;
        cin >> l1;
        cout << l1 << endl;
        cout << "count = " << Lorry::Count() << endl;
    }
    cout << "count = " << Object::Count() << endl;

    return 0;
}
