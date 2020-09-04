
#include <iostream>

using namespace std;

class Stack 
{
    int *arr;
    int nextIndex;
    int capacity;
    
    public:
    Stack()
    {
        arr = new int[10];
        nextIndex = 0;
        capacity = 10;
    }
    Stack(int size)
    {
        arr = new int[size];
        nextIndex = 0;
        capacity = size;
    }
    
    bool isEmpty()
    {
        if(nextIndex==0)
            return true;
        return false;
    }
    void push(int num)
    {
        if(nextIndex==capacity)
        {
            cout<<"Stack overflow"<<endl;     
        }
        else
        {
            arr[nextIndex] = num;
            nextIndex++;
        }
    }
    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack underflow"<<endl;
        }
        else
         nextIndex--;
    }
    int top()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty";
            return -1;
        }
        else
        {
         return arr[nextIndex-1];;
        }   
    }
};

int main()
{
   Stack st(2);
   st.push(10);
   st.push(12);
   st.push(13);
   st.push(14);
   cout<<st.top()<<endl;
   st.pop();
   st.push(15);
   cout<<st.top()<<endl;
   st.pop();
   cout<<st.top()<<endl;
   st.pop();
   st.pop();

    return 0;
}

/*
Output 

Stack overflow
Stack overflow
12
15
10
Stack underflow
*/
