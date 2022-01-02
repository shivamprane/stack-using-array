#include<iostream>
using namespace std;
#define MAX 5

class stack{
    int top;
    
    public:
    int array[MAX];
    stack(){
        top=-1;
    }
    void push( int data)
    {
        if(top == MAX-1)
        {
            cout << "stack overflow" << endl;
        }
        else{
            top++;
            array[top]=data;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout << "stack underflow" << endl;
        }
        else{
            top--;
        }
        
    }
    void display()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << array[i] << endl;
        }        
    }
};

int main()
{
    stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.display();
    cout << "POP" << endl;
    s1.pop();
    s1.display();
    return 0;
}
