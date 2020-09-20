/*Create a class ‘shape’. Derive three classes from it: Circle, Triangle and Rectangle. 
Include the relevant data members and functions in all the classes. 
Find the area of each shape and display it*/
#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

class shape{
    protected:
        float area;
    public:
        void get(){
            cout<<area<<endl;
        }
};

class circle:private shape{
    float radius;
    public:
        void set(float r){
            radius=r;
        }
        void cal(){
            area=3.14*radius*radius;
        }
        void get(){
            cout<<"Area of circle: ";
            shape::get();
        }
};

class trinagle:private shape{
    float s1;
    float s2;
    float s3;
    public:
        void set(float sd1,float sd2,float sd3){
            s1=sd1;
            s2=sd2;
            s3=sd3;
        }
        void cal(){
            float sp=(s1+s2+s3)/2.0;
            area=sqrt((sp*(sp-s1)*(sp-s2)*(sp-s3)));
        }
        void get(){
            cout<<"Area of triangle: ";
            shape::get();
        }
};

class rectangle:private shape{
    int l;
    int b;
    public:
        void set(int ln,int bh){
            l=ln;
            b=bh;
        }
        void cal(){
            area=l*b;
        }
        void get(){
            cout<<"Area of rectangle: ";
            shape::get();
        }
};

int main(){
    circle c;
    trinagle t;
    rectangle r;
    c.set(2.5);
    c.cal();
    c.get();
    t.set(2.5,3.5,4.5);
    t.cal();
    t.get();
    r.set(20,30);
    r.cal();
    r.get();
    return 0;
}
