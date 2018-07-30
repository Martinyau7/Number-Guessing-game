#include "Taylor.h"
#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

Taylor::Taylor()
{
//    correctage = ctime
    cout << "when was little Taylor born?" << endl;
    cout << "input year \n";
    cin >> year;
    cout << endl;
    cout << "input month \n";
    cin >> month;
    cout << endl;
    cout << "input day \n";
    cin >> day;
    cout << endl;

    cout << "based on your input.. her birthday is " << age << endl;

}
