#include <iostream>

using namespace std;

template <typename T>
T large (T a, T b, T c)
{
    if (a>b && a>c)
    return a;
    else if(b>c)
    return b;
    else 
    return c;
}

int main ()
{
int a=1,b=2,c=3;    
double d=3.3,e=6.4,f=3.5;    
string g="one",h="two",i="three";
    
cout << "The largest is : " << large(a,b,c) << endl;
cout << "The largest is : " << large(d,e,f) << endl;
cout << "The largest is : " << large(g,h,i) << endl;
 
    
}