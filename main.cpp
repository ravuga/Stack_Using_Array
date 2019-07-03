#include <iostream>
#include <conio.h>
using namespace std;
void push(int *, int);
void pop(int *);
void peek(int *);
int top = -1; //initializing top variable
int size = 3; //setting size or capacity of stack
int main()
{
    int val, choice, arr[size];
    while(1)
    {
        cout<<"\n**** Enter choice: ****" <<endl;
        cout<<"1 : Push" <<endl;
        cout<<"2 : Pop" <<endl;
        cout<<"3 : Peek" <<endl;
        cout<<"4 : Exit" <<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter value to push: ";
                cin>>val;
                push(arr, val);
                break;
            case 2:
                pop(arr);
                break;
            case 3:
                peek(arr);
                break;
            case 4:
                exit(1);
                break;
            default:
                cout<<"Wrong choice..." <<endl;
        }
    }
    getch();
    return 0;
}
void push(int arr[], int val)
{
    if(top==size-1) //checking if stack is full and comparing with (size-1) as array starts from 0 index;
    {
        cout<<"Overflow..." <<endl;
    }
    else
    {
        top++; //incrementing top variable
        arr[top] = val;
    }
}
void pop(int arr[])
{
    if(top==-1) //checking if stack is empty
    {
        cout<<"Underflow..." <<endl;
    }
    else
    {
        cout<<"Value poped is: " <<arr[top] <<endl;
        top--; //decrementing top variable
    }
}
void peek(int arr[])
{
    int p = top;
    cout<<"\n Elements in stack are: " <<endl;
    while(p!=-1)
    {
        cout<<arr[p] <<endl;
        p--;
    }
    cout<<"NULL" <<endl;
}