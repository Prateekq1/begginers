#include<iostream>
using namespace std;
int main()
{
    cout<<"menu\n";
    cout<<"1.add\n"<<"2.sub\n";
    int option;
    cout<<"enter choice\n";
    cin>>option;
    int a,b,c;
    cout<<"enter two numbers\n";


    switch(option)
    {
        case 1:c=a+b;
        break;
        case 2:c=a-b;
        break;
    }
    return 0;
}