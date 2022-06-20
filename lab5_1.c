#include <stdio.h>
#include <conio.h>
#include "iostream"
//#include <iostream>
using namespace std;

class Complex{

private:
float real;
float imag;

public:
Complex(){
cout<<"hello from constractor1"<<endl;
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

cout<<"this obj will be finished soon"<<endl;

}




};




int main ()
{
cout<<"hello from main"<<endl;
Complex c1;
Complex c2(5.5);
Complex c3(6.6,7.7);




return 0;
}
