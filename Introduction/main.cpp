#include <iostream>

using namespace std;

int PrintData(int one);
enum  days{ monday,tuesday};
int main()
{
    //variable 
    int a = 10;
    const int b = 10;
    float cpg = 10.5;
    double salary =10000.333;
    char initialLetter = 'A';
    string name ="Dinesh";
    bool flag= true;
    int numbers[4] = {1,2,3,4};
    cout<<numbers[1]<<endl;
    days obj = monday;
    PrintData(10);
}
int PrintData(int one) // if we declared the function below the main function we have to declared the fuction
{                      // in the globol 
cout<<one;
}
