#include <stdio.h>
#include <conio.h>
#include "iostream"
#include<math.h>
//#include <iostream>
using namespace std;

class Complex{

private:
float real;
float imag;

public:
Complex operator+(Complex c );
Complex operator+(float x) ;
Complex operator-(float x);

friend Complex operator+(float x,Complex c) ;
friend Complex operator-(float x,Complex c);

Complex operator+=(Complex c );
int operator==(Complex c );

Complex operator++();
Complex operator++(int);


operator float();




Complex(){
//cout<<"hello from constractor1"<<endl;
}
Complex(float r){

cout<<"hello from constractor2"<<endl;
real=r;

}
Complex(float r, float i){

cout<<"hello from constractor3"<<endl;
real=r;
imag=i;

}

void setReal(float r){
real=r;

}
void setImag(float i){

imag=i;

}

void setComplex(int r,int i){

real=r;
imag=i;


}




float getReal(){

return real;

}
float getImag(){
return imag;
}


Complex add(Complex c){
Complex a;
a.real=(this->real)+c.real;
a.imag=(this->imag)+c.imag;

return a;

}
Complex sub(Complex c){
Complex a;
a.real=(this->real)-c.real;
a.imag=(this->imag)-c.imag;

return a;



}
void print(){
if(imag<0) {
cout<<real<<" - "<<fabs(imag)<<"i"<<endl; }
else
{
cout<<real<<" + "<<imag<<"i"<<endl; }



}





~Complex(){

//cout<<"this obj will be finished soon"<<endl;

}




};



Complex Complex::operator+(Complex a )
{
Complex b;
b.real = real + a.real;
b.imag = imag + a.imag;
return b;
}

Complex Complex::operator+(float x)
{
Complex b;
b.real = real + x;
b.imag = imag;
return b;
}

Complex Complex::operator-(float x)
{
Complex b;
b.real = real - x;
b.imag = imag;
return b;
}



Complex operator+(float x,Complex c)
{
Complex b;
b.real = c.real + x;
b.imag = c.imag;
return b;
}

Complex operator-(float x,Complex c)
{
Complex b;
b.real = x-c.real;
b.imag = c.imag;
return b;
}


//any problem may occure?

Complex Complex::operator+=(Complex c ){

this->real=real+c.real;
this->imag=imag+c.imag;

return *this;


}


int Complex::operator==(Complex c ){
if(real==c.real&& imag==c.imag)
    return 1;


return 0;



}





Complex Complex::operator++(){
Complex temp;
temp.real=++real;
temp.imag=this->imag;

return temp;

}

//post fix
Complex Complex::operator++(int){
Complex t;
t.real=real;
t.imag=imag;
real++;

return t;

}

//casting to float
Complex::operator float(){

real=(float)real;

return real;
}





int main ()
{
cout<<"hello from main"<<endl;
Complex c1;
Complex c2(5.5);
Complex c3(6.6,7.7);
Complex c4(3,6.7);
c1=c2+c3;
cout<<"sum of two object are :";
c1.print();
c4=c4+3;
cout<<"\nc4 + 3 are =";
c4.print();
cout<<"\nc4 - 2 are =";
c4=c4-2;
c4.print();
cout<<"\n 3+c4 are =";
c4=3+c4;
c4.print();
cout<<"\n 10-c4 are =";
c4=10-c4;
c4.print();
Complex c6;
c6=c4++;
cout<<"\nc6= c4 bef c4 increas=";
c6.print();
cout<<"\nc1= c4 aft c4 increas=";
c1=++c4;
c1.print();

c1+=c2;
cout<<"c1 after increased by c2 =";
c1.print();

if(c1==c2){
 cout<<" 'yes' the content of two objects are equal"<<endl;
}else{
 cout<<" 'no'the content of two objects are not equal"<<endl;

}

float result_real=(float)c3;
cout<<"casting real attribute of c3 is:"<<result_real;


return 0;
}
