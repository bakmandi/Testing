#include <iostream>
using namespace std;

int main ()
{
    int a,b,tmp;
    a=0;
    b=0;

cout<< "masukan angka inisial : ";
cin>> a;
tmp=a;
while (a!=9999)
{
cout<< "masukan angka bebaz : ";
cin>> a;
if (tmp>>a)
    tmp=a;
}
cout<<"angka minimum : "<<tmp;
}
