// Check even/odd

#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "even";
    }
    else
    {
        cout << "odd";
    }
}

// Check prime number

#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int flag = 1;

    if (a <= 1)
    {
        flag = 0;
    }
    else
    {
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag)
    {
        cout << "prime";
    }
    else
    {
        cout << "not prime";
    }

    return 0;
}

// Find largest number

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a >= b && a >= c)
    {
        cout << a;
    }
    else if (b >= a && b >= c)
    {
        cout << b;
    }
    else
    {
        cout << c;
    }
}

// Check leap year

#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        cout << "Leap year";
    }
    else
    {
        cout << "Not leap";
    }
}

// Grading system

#include <iostream>
using namespace std;
int main()
{
    int marks;
    cin >> marks;
    if (marks >= 90 && marks <= 100)
    {
        cout << "A";
    }
    else if (marks >= 80 && marks <= 89)
    {
        cout << "B";
    }
    else if (marks >= 70 && marks <= 79)
    {
        cout << "C";
    }
    else if (marks > 60 && marks <= 69)
    {
        cout << "D";
    }
    else if (marks <= 60)
    {
        cout << "F";
    }
}

// consonant vowel

#include <iostream>
using namespace std;
int main()
{
    char alpha;
    cin >> alpha;
    if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u' || alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U')
    {
        cout << "vowel";
    }
    else
    {
        cout << "consonant";
    }
}

// check if char is alpha, digit or spl char

#include <iostream>
using namespace std;
int main()
{
    char alpha;
    cin >> alpha;
    if ((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z'))
    {
        cout << "alphabet";
    }
    else if (alpha >= '0' && alpha <= '9')
    {
        cout << "digit";
    }
    else
    {
        cout << "spl char";
    }
}