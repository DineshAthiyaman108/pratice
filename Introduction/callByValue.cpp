#include <iostream>
using namespace std;
int callByValue(int *add);
int pointerInArray();
int main()
{
int age =10;
callByValue(&age);
cout<<age;
pointerInArray();
}
int callByValue(int *add)
{
// *add=*add+1;
*(add)++;
}

//using pointer in the array

int pointerInArray()
{
    int age[4]={1,2,3,4};
    int *ptr = &age[0];
    cout<<*ptr;
}