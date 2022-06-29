
#include <iostream>
#include<string.h>
using namespace std;

struct stack
{
     char arr[50];
     int top;
}s;
void push( char c)
{
    s.top++;
    s.arr[s.top]= c;
}
void pop()
{
    char c;
    c=s.arr[s.top];
    s.top--;
    cout<<c<<" ";
}
int main()
{
    char a[30];
    int len,i;
    int top =-1;
    cout<<"ENTER THE STRING";
    cin>>a;
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        cout<<a[i]<<" ";
    }
    for(i=0;i<len;i++)
    {
        push(a[i]);
    }
     
    cout<<endl;
    cout<<endl;
     for(i=0;i<len;i++)
    {
        pop();
    }
    
}

