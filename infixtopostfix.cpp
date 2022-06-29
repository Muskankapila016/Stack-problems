#include <iostream>
#include <cstring>
using namespace std;
#define max 6

class stack
{
   public:
   int arr[max];
    int top;
    stack()
    {
        arr[max];
        top=-1;
    }
    void push(int x)
   {
    if(top==max-1)
    {
        cout<<"OVERFLOW"<<endl;
    }
    top++;
    arr[top]=x;
    
   }
   int pop()
   {
       if(top==-1)
       {
        
           return -1;
       }
       
       int res=arr[top];
       top--;
       return res;
       
   }
  void isEmpty()
   {
       if(top==-1)
       {
           cout<<"EMPTY"<<endl;
       }
       else 
       {
           cout<<"NOT EMPTY";
       }
       
   }
   int size()
   {
       return top+1;
   }
   int peek()
   {
        if(top==-1)
       {
           return -1;
          
       }
        int res =arr[top];
       return res;
       
   }
   void display()
   {
       for(int i=0;i<=top;i++)
       {
           cout<<i<<" ELEMENT IS==> "<<arr[i]<<endl;
       }
   }
}s;

int pri(char ch)
{
    if(ch=='^') return 6;
    else if(ch=='*'||ch=='/') return 3;
    else if(ch=='+'||ch=='-') return 1;
    else return 0;
}
int prs(char ch)
{
    if(ch=='^') return 5;
    else if(ch=='*'||ch=='/') return 4;
    else if(ch=='+'||ch=='-') return 2;
    else return 0;
}

int main()
{
    
  char infix[20],output[20];
  int ch,count=0;
 cout<<"ENTER THE INFIX EXPRESSION==>";
 cin>>infix;
 int len=strlen(infix);
 for(int i=0;i<len;i++)
 {
     ch=infix[i];
     if(ch=='(') 
     {
         s.push(ch);
     }
     else if(isalnum(ch))
     {
         output[count++]=ch;
     }
     else if(ch==')')
     {
         while(s.peek()!=')')
         {
             output[count++]=s.pop();
         }
         s.pop();
     }
     else
     {
         while(pri(ch)<=prs(s.peek()))
         {
             output[count++]=s.pop();
         }
         s.push(ch);
     }
     
 }
 while(s.top!=-1)
 {
     output[count++]=s.pop();
 }
 cout<<"the postfix expression is==>"<<output;
 
}
