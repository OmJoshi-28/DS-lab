#include <iostream>
using namespace std;
int main()
{
    int student[5];
    int searchRno;

    cout << "enter 5 student roll nos.:-" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> student[i];
    }

    cout << "\nenter searchRno:-" << endl;
    cin >> searchRno;

    for (int i = 0; i < 5; i++)
    {
        if (student[i] == searchRno)
        {
            cout << "student found!\n";
            return 0;
        }
    }
    cout << "student not found\n";
    return 0;
}
