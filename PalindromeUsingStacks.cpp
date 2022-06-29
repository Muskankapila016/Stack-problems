
#include <iostream>
#include <string.h>
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

int main()
{
char ch[50];
int len;
cout<<"input the string :  ";
cin>>ch;
len=strlen(ch);

int i=0;

while(i<len)
{
    push(ch[i]);
    i++;
}
i=0;
while(i<len)
{
    if(ch[i]!=pop())
    {
        break;
    }
    i++;
}
if(i==len)
{
    cout<<"PALINDROME";
}
else
{
    cout<<"NOT A PALINDROME";
}

    return 0;
}
