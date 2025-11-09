#include<iostream>
using namespace std;
class Rectangle{
    void area(){
        cout<<"Rectangle area"<<endl;
    }
};
class cuboid:public Rectangle{
    public:
    void volume(){
        cout<<"volume of cuboid"<<endl;
    }
};
int main(){
    cuboid c;
    Rectangle *p=&c;
    p->area();
    //p->volume();
}