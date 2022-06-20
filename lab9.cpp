#include <stdio.h>
#include <conio.h>
#include <iostream>
#include "math.h"
using namespace std;

class Geoshape
{
private:
protected:
    float d1,d2;

public:
    Geoshape()
    {
        cout<<"hello from c1 for geo"<<endl;
        d1=0;
        d2=0;

    }

    Geoshape(float x)
    {
        cout<<"hello from c2 for geo"<<endl;
        d1=x;
        d2=x;

    }



    Geoshape(float x,float y)
    {
        cout<<"hello from c3 for geo"<<endl;
        d1=x;
        d2=y;
    }

    void setd1(int x)
    {
        d1=x;
    }
    float getd1()
    {
        return d1;
    }
    void setd2(int x)
    {
        d2=x;
    }
    float getd2()
    {
        return d2;
    }
    void setdata(int x,int y)
    {
        d1=x;
        d2=y;
    }



    float calarea()
    {

        return 0;
    }

    ~Geoshape()
    {
        cout<<"hello from de of base class geo your obj will terminate soon"<<endl;
    }



};


class Triangle: public Geoshape
{

public:

    Triangle():Geoshape()
    {
        cout<<"hello from c1 for tri"<<endl;

    }




    Triangle(float x,float y):Geoshape(x,y)
    {
        cout<<"hello from c2 for tri"<<endl;

    }
//override fun
    float calarea()
    {

        return 0.5*d1*d2;
    }




    ~Triangle()
    {
        cout<<"hello from de for tri class your obj will terminate soon"<<endl;

    }



};


//class Circle:private Geoshape
class Circle:public Geoshape
{

public:

    Circle():Geoshape()
    {
        cout<<"hello from c1 for circle"<<endl;

    }

    Circle(float x):Geoshape(x)
    {
        cout<<"hello from c2 for circle"<<endl;
    }

    void set_radius(int x)
    {
        d1=d2=x;
    }

    float get_radius()
    {
        return d1;
    }


//override fun
    float calarea()
    {

        return 3.14*d1*d2;
    }




    ~Circle()
    {
        cout<<"hello from de for circle class your obj will terminate soon"<<endl;

    }


};



class Rect:public Geoshape
{

public:

    Rect():Geoshape()
    {
        cout<<"hello from c1 for rect"<<endl;

    }


    Rect(float x,float y):Geoshape(x,y)
    {
        cout<<"hello from c2 for rect"<<endl;

    }
//override fun
    float calarea()
    {

        return d1*d2;
    }




    ~Rect()
    {
        cout<<"hello from de for rect class your obj will terminate soon"<<endl;

    }



};



class Square:private Rect

{

public:

    Square():Rect()
    {
        cout<<"hello from c1 for rect"<<endl;

    }


    Square(float x):Rect(x,x)
    {
        cout<<"hello from c2 for rect"<<endl;

    }

    void set_dim(float x)
    {
        d1=d2=x;
    }

    float get_dim()
    {
        return d1;
    }



//override fun
    float calarea()
    {

        return Rect::calarea();
    }




    ~Square()
    {
        cout<<"hello from de for Square class your obj will terminate soon"<<endl;

    }



};

///*
//logical
float calculateSum(Circle c1,Rect r,Square s)
{
    float result;
    result= c1.calarea()+r.calarea()+s.calarea();

return result;

}

//*/


//zero sum
float calSum(Geoshape c1,Geoshape r)
{
    float result;

    result= c1.calarea()+r.calarea();

return result;

}







int main ()
{
    cout<<"hello from main"<<endl;
    Circle c1(3.0);
    cout<<"area of circle is\t"<<c1.calarea()<<endl;

    Rect r(3.0,4.0);
    cout<<"area of rectangle is\t"<<r.calarea()<<endl;

    Square s(4.0);
    cout<<"area of Square is\t"<<s.calarea()<<endl;

    Triangle t(4.0,6.0);

    cout<<"area of Triangle is\t"<<t.calarea()<<endl;
cout<<"result is "<<calculateSum(c1,r,s)<<endl;

 cout<<"result is "<<calSum(c1,r)<<endl;

    return 0;
}
