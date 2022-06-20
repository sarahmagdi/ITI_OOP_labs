#include <stdio.h>
#include <conio.h>
#include <iostream>
#include "math.h"
using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    Point()
    {
    }

    Point(int x,int y)
    {
        this->x=x;
        this->y=y;

    }

    void set_x(int x)
    {
        this->x=x;
    }

    void set_y(int y)
    {
        this->y=y;
    }

    int get_x()
    {
        return x;
    }

    int get_y()
    {
        return y;
    }
    ~Point(){
    }


};


class Line
{
    /*private:
      Point start;
        Point pend;*/

public:
    Point start;
    Point pend;

    Line():start(),pend()
    {
        cout<<"hello from cons1 of line"<<endl;
    }

    Line(int x1,int y1,int x2,int y2):start(x1,y1), pend(x2,y2)
    {
        cout<<"hello from cons2 of line"<<endl;
    }




    void print_line()
    {
        int line_value;
        cout<<"start point in("<<start.get_x()<<","<<start.get_y()<<")"<<endl;
        cout<<"end point in("<<pend.get_x()<<","<<pend.get_y()<<")"<<endl;
        int line_sqr=pow((pend.get_x()-start.get_x()),2)+pow((pend.get_y()-start.get_y()),2);

        line_value=pow(line_sqr,0.5);
        cout<<"line value is :"<<line_value<<endl;

    }

   ~Line(){
}


};



class Rec
{
private:
    Point start_p;
    Point end_p;
public:

   Rec():start_p(),end_p(){
   }
   Rec(int x1,int y1,int x2,int y2):start_p(x1,y1),end_p(x2,y2){
       cout<<"hello from cons2 of rec"<<endl;

   }

   void print_rec()
    {
        int line_value;
        int line_sqr;

        int l_sqr;
        int l;

        int w_sqr;
        int w;



        cout<<"start point in("<<start_p.get_x()<<","<<start_p.get_y()<<")"<<endl;
        cout<<"end point in("<<end_p.get_x()<<","<<end_p.get_y()<<")"<<endl;
        line_sqr=pow((end_p.get_x()-start_p.get_x()),2)+pow((end_p.get_y()-start_p.get_y()),2);

        line_value=pow(line_sqr,0.5);
        cout<<"diameter value of rec  is :"<<line_value<<endl;

        Point pp(start_p.get_x(),end_p.get_y());
        Point ee(end_p.get_x(),start_p.get_y());

        cout<<"start point for length in("<<start_p.get_x()<<","<<start_p.get_y()<<")"<<endl;
        cout<<"end point for for width in("<<end_p.get_x()<<","<<end_p.get_y()<<")"<<endl;
        l_sqr =pow((end_p.get_x()-pp.get_x()),2)+pow((end_p.get_y()-pp.get_y()),2);
        l=pow(l_sqr,0.5);
        cout<<"length value of rec is :"<<l<<endl;

        w_sqr=pow((ee.get_x()-pp.get_x()),2)+pow((ee.get_y()-pp.get_y()),2);
        w=pow(w_sqr,0.5);
        cout<<"width value of rec is :"<<l<<endl;





    }

   ~Rec(){
   }



};




class Cir
{
private:
    Point center;
    int re;

public:
    Cir():center(){

    }
    Cir(int x, int y,int z):center(x,y){
    re=z;
    }
    void print_rec()
    {
    cout<<"center point for circle in("<<center.get_x();
    cout<<","<<center.get_y()<<")"<<endl;
     cout<<"radius point for circle is"<<re<<endl;



    }


    ~Cir(){

    }

};



class Pict
{
private:
    int c_num,l_num,r_num;

    Cir *p_cir;
    Rec *p_rec;
    Line *p_li;



public:
    Pict(){
        c_num=0;
        l_num=0;
        r_num=0;

     p_cir=NULL;
    p_rec=NULL;
    p_li=NULL;


    }

    Pict(int x,int y, int w,Cir *p_1,Rec *p_2, Line *p_3){

    c_num=x;
    l_num=y;
    r_num=w;

       p_cir=p_1;
      p_rec=p_2;
       p_li=p_3;


    }

    ~Pict(){

    if(p_cir!=NULL)
        {delete[]p_cir;}

    if(p_rec!=NULL)
        {delete[]p_rec;}

     if(p_li!=NULL)
        {delete[]p_li;}


    cout<<"your object will delete soon"<<endl;
    }


      void ass_fun_rec(int i,Cir *v){
      c_num=i;
      p_cir=v;

      }

     void print_p(){
     int j;
     for(j=0;j<=l_num;j++){

        p_li[j].print_line();
     }

     for(j=0;j<=c_num;j++){

        p_cir[j].print_rec();

     }
     for(j=0;j<=r_num;j++){

        p_rec[j].print_rec();
     }





     }





};















int main ()
{
    cout<<"hello from main"<<endl;

    Line l2(10,5,4,4);
    l2.print_line();
    Line l1;
    l1.start.set_x(3);
    l1.start.set_y(3);
    l1.pend.set_x(4);
    l1.pend.set_y(4);
    l1.print_line();

    Rec r1(0,0,10,10);
    r1.print_rec();

    Cir c1(3,3,5);
    c1.print_rec();
    Pict p1(1,1, 1,&c1,&r1,&l2);
    p1.print_p();
/*
   Line *l;
   l= new Line[3];
    for(int i=0;i<3;i++){
       l[i]=Line(10,5,4,4);

    }

    Pict p2(1,1, 3,&c1,&r1,l);


*/



    return 0;
}
