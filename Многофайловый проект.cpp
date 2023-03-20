#include <iostream>
#include "Sum.h"
#include "MyClass.h"

using namespace std;

int main()
{
    
    int result = Sum(2, 3);
    cout << result << endl;
    MyClass m;
    m.PrintMessage("Hello World!");

}

