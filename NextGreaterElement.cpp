/*Given an array, print the Next Greater Element (NGE) for every element.
The Next greater Element for an element x is the first greater element on the right side of x in the array.
Elements for which no greater element exist, consider the next greater element as -1*/

#include <iostream>
#include<string.h>

using namespace std;

struct stack
{
   int arr[10];
   int top;
}s;

void push(int c)
{
    s.top++;
    s.arr[s.top]=c;
}
void pop()
{
    
    int c=s.arr[s.top];
    s.top--;
    
}
int peek()
{
    int c=s.arr[s.top];
    return c;
}

int main()
{
    s.top=-1;
    int i ,a[23],n;
    cout<<"NO OF ELEMENTS";
    cin>>n;
    cout<<"PRINT  "<<n<< "  elements";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
     for(i=0;i<n;i++)
     {
         while(s.top!=-1&&peek()<=a[i])
         {
             pop();
         }
         if(s.top==-1)
        {
        cout<<"-1"<<"  ";
       }
        else
        {
            cout<<peek()<<"  ";
        }
        push(a[i]);
     }
 
}
