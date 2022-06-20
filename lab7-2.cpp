#include <stdio.h>
#include <conio.h>
#include <iostream>
#include "math.h"
using namespace std;


class Stack_cl
{
private:
    int max_size;
    int top;
    int * pointer_arr;
    static int stackNum;
    friend void view_content(Stack_cl &c);
public:
//static int stackNum;

    Stack_cl()
    {

        cout<<"hello from constractor1\n default size for your Stack is 5"<<endl;
        stackNum++;
        max_size=5;
        pointer_arr= new int(max_size);
        top=0;

    }

    Stack_cl(int size)
    {

        cout<<"hello from constractor2\n  size for your Stack is"<<size<<endl;
        stackNum++;
        max_size=size;
        pointer_arr= new int(max_size);
        top=0;

    }

    void push_method(int value)
    {
        if(top!=max_size)
        {
            pointer_arr[top]=value;
            top++;
            cout<<"done! your item is added"<<endl;
        }
        else
        {
            cout<<"sorry you cann't add this item 'stack is full'"<<endl;
        }

    }

    int pop_method()
    {
        int value;
        if(top>0)
        {

            top=top-1;

            value=pointer_arr[top];

        }
        else
        {
            cout<<"sorry you cann't delete stack is empty"<<endl;
            value= -1;
        }
        return value;

    }

    static void get_stackNum()
    {
        cout<<"stack numbers are:"<<stackNum<<endl;

    }




    ~Stack_cl()
    {
        if(pointer_arr!=NULL)
        {
            delete[]pointer_arr;
            cout<<"your object will delete soon"<<endl;
        }



         stackNum--;


    }



};

int Stack_cl::stackNum=0;

void view_content(Stack_cl &cc)
{
    cout<<"top of this obj is "<<cc.top<<endl;
    cout<<"size of this obj is "<<cc.max_size<<endl;
    for(int i=0; i<cc.top; i++)
    {
        cout<<"item\t"<<i+1<<"="<<cc.pointer_arr[i]<<endl;

    }

}


int main ()
{
    cout<<"hello from main"<<endl;
    Stack_cl::get_stackNum();
    Stack_cl c1;
    Stack_cl::get_stackNum();
    c1.push_method(1);
    c1.push_method(2);
    c1.push_method(3);
    c1.push_method(4);
    c1.push_method(5);
    c1.push_method(6);
    Stack_cl c2(2);
    Stack_cl::get_stackNum();

    c2.push_method(3);

    c2.push_method(4);

    int value;
    for(int i=0; i<3; i++)
    {
        value =c2.pop_method();
        if(value!=-1)
        {
            cout<<"value of pop item is:"<<value<<endl;
        }


    }

    view_content(c1);
    int result= c1.pop_method();
  if(result!=-1)
    cout<<"result is "<<result<<endl;

    return 0;
}
