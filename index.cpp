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
