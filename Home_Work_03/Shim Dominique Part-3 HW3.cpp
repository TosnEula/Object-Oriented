#include <iostream>

using namespace std;

template <typename T>
T add (T arr[], int size )
{
    T sum=0;
    
    for (int x=0;x<=size;x++)
    {
        if (x%2 ==1 )
        sum +=arr[x];
    }
    
    return sum;
    
}

int main ()
{
    int b[] = {2,4,5,6 };
    double x [] = {1.2,3.5,6.8};

    cout << "sum of x: " << add(x,4)<< endl;
    cout << "sum of b: " << add(b,3);
}