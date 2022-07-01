/*Given an array, find the nearest smaller element G[i] for every element A[i] in the array such that the element has an index smaller than i.

More formally,

    G[i] for an element A[i] = an element A[j] such that 
    j is maximum possible AND 
    j < i AND
    A[j] < A[i]

Elements for which no smaller element exist, consider next smaller element as -1.*/
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
         while(s.top!=-1&&peek()>=a[i])
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
