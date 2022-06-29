#include <iostream>
using namespace std;
#define max 6
#include <stdlib.h>

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
    void push()
   {
       int x;
       cout<<"ENTER THE ELEMENT TO BE INSERTED==>";
       cin>>x;
    if(top==max-1)
    {
        cout<<"OVERFLOW"<<endl;
    }
    top++;
    arr[top]=x;
    cout<<"INSERTED ELEMENT IS==>"<<x<<endl;
   }
   void pop()
   {
       if(top==-1)
       {
           cout<<"UNDERFLOW<"<<endl;
           return;
       }
       
       int res=arr[top];
       top--;
       cout<<"DELETED ELEMENT IS==>"<< res<<endl;
       
   }
  void isEmpty()
   {
       if(top==-1)
       {
           cout<<"EMPTY"<<endl;
       }
       else 
       {
           cout<<"NOT EMPTY"<<endl;
       }
       
   }
   void size()
   {
       cout<<"TOTAL NUMBER OF ELEMENTS : "<< top+1;
   }
   void peek()
   {
        if(top==-1)
       {
           cout<<"STACK IS EMPTY"<<endl;
          
       }
        int res =arr[top];
        cout<<"ELEMENT AT TOP IS==> "<<res<<endl; 
       
   }
   void display()
   {
       for(int i=0;i<=top;i++)
       {
           cout<<i<<" ELEMENT IS==> "<<arr[i]<<endl;
       }
   }
};


int main()
{
  stack s;
  
   int choice;
  do{
      
  
   cout<<"\n1: push an element into stack";
   cout<<"\n2: pop an element from stack";
   cout<<"\n3: check whether the stack is empty";
   cout<<"\n4: Element At Top? ";
   cout<<"\n5: Total Number Of Elements In Stack";
   cout<<"\n6: display all the elements in stack";
   cout<<"\n7: exit from program";
   cout<<"\nenter your choice(1-7)==>";
   cin>>choice;
         
             switch(choice)
             {
                 case 1:s.push();
                 break;
                 case 2:s.pop();
                  break;
                 case 3:s.isEmpty();
                 break;
                 case 4:s.peek();
                  break;
                 case 5:s.size();
                  break;
                 case 6:s.display();
                    break;
                 case 7: exit(0);
                    break;
                 default: 
                cout<<"wrong choice try again";
                    break;
                
             }
      }while(choice!=7);
}
