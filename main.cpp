#include <iostream>
using namespace std;
int main()
{
    int mark;
    char grade;
    cout << "Enter Your Mark";
    cin >> mark;

    if (mark >= 80 && mark <= 100)
    {
        cout << "A";
        grade = 65;
    }
    else if (mark >= 65 && mark <= 79)
    {
        cout << "B";
        grade = 66;
    }
    else if (mark >= 50 && mark <= 64)
    {
        cout << "C";
        grade = 67;
    }
    else if (mark >= 31 && mark <= 49)
    {
        cout << "D";
        grade = 68;
    }
    else if (mark >= 0 && mark <= 30)
    {
        cout << "F";
        grade = 69;
    }
    else
        cout << "Invalid!";

    switch (grade)
    {
    case 65:
        cout << "\n Excellent";
        break;
    case 66:
        cout << "\n Good";
        break;
    case 67:
        cout << "\n Pass";
        break;
    case 68:
        cout << "\n Warning";
        break;
    case 69:
        cout << "\n Fail";
        break;

    default:
        break;
    }

    cout << endl;
    return 0;
}