#include <iostream>
using namespace std;

int main()
{
    char grade[100];
    int marks = 0, subject = 0, flag = 0, count;
    int size = sizeof(grade) / sizeof(grade[0]);
    cout << "Enter Your Grades without Leaving Spaces \nAnd Total Number of subject " << endl;
    cin >> count ;
    for (int j = 0; j < count; j++)
    {
        cin >> grade[j] ;
    }
    
    for (int i = 0; grade[i] != '\0'; i++)
    {
        if (grade[i] == 'A' && grade[i + 1] == '+')
        {
            marks += 10;
            subject++;
            i++;
        }
        else if (grade[i] > 'E' && grade[1] < 'Z')
        {
            flag = 1;
        }
        else if (grade[i])
        {
            marks += 74 - grade[i];
            subject++;
        }
    }
        if (flag == 1)
        {
            cout << "Try Again" << endl;
        }
        else
        {
            float grades = ((float)marks / subject);
            cout << "CGPA :- " << grades << endl;
            cout << "Marks :- " << marks << endl;
            cout << "Subject :- " << subject << endl;
        }
    return 0;
}