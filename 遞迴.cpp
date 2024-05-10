#include<iostream>
#include<cstdlib>
using namespace std;

int f(int a, int b, int level)//層數多一層，用於數字大
{
    if (b == 0)
        return a;
    else
        return f(b, a % b, level + 1);
}

int f2(int a, int b, int level)//層數少，用於數字小，較易懂
{
    int c = a % b;

    if (c == 0)
        return b;
    else
        return f2(b, c, level + 1);
}

int main()
{
    int a = 78;
    int b = 34;

    int gcd = f(a, b, 1);
    cout << gcd << endl;

    return 0;
}