
#include <iostream>
#include <ctype.h>
#include<string.h>
using namespace std;
struct stack
{
    char arr[50];
    int top;
}s;
void push(char c)
{
    s.top++;
    s.arr[s.top]=c;
}
char pop()
{
    char x=s.arr[s.top];
    s.top--;
    return x;
}
int pri(char a)
{
    if(a =='^')
    {
        return (6);
    }
    else if(a =='*'||a =='/')
    {
        return (3);
    }
    else if(a =='+'||a =='-')
    {
        return (1);
    }
    else 
    {
        return (0);
    }
}
int prs(char a)
{
    if(a =='^')
    {
        return (5);
    }
    else if(a =='*'||a =='/')
    {
        return (4);
    }
    else if(a =='+'||a =='-')
    {
        return (2);
    }
    else 
    {
        return (0);
        
    }
}
int main()
{
    s.top=-1;
    char infix[50],prefix[50],ele,ch;
    int i=0 ,k=0;
    cout<<"ENTER THE INFIX EXPRESSION : ";
    cin>>infix;
    push('#');
    i =strlen(infix)-1;
    while(i>=0)
    {    
        ch=infix[i];
        if(ch==')')
        {
            push(ch);
        }
        else if(isalnum(ch))
        {
            prefix[k++]=ch;
        }
        else if(ch=='(')
        {
            while(s.arr[s.top]!=')')
            {
                prefix[k++]=pop();
                
            }
            ele=pop();
        }
        else
        {
            while(pri(ch)<prs(s.arr[s.top]))
            {
                prefix[k++]=pop();
                
            }
            push(ch);
        }
        i--;
         
    }
    
    while(s.arr[s.top]!='#')
    {
        prefix[k++]=pop();
        
    }
    prefix[k]='\0';
    cout<<"PREFIX EXPRESSION IS"<<"  "<<prefix<<endl;
    int d=strlen(prefix)-1;
    for(int c=d;c>=0;c--)
    {
        cout<<prefix[c];
    }
  
    
    
}
