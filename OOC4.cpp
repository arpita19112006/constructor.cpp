#include<iostream>
using namespace std;
class rectangle{
    private:
    float length;
    float width;
    public:
     rectangle(float l,float w){
        length =l;
        width=w;
        cout<<"constructor called..."<<endl;
     }
     ~rectangle(){
        cout<<"destructor called..."<<endl;
    }
    float area(){
        return length*width;
    }
    float perimeter(){
        return 2*(length+width);
    }
};
int main(){
    float l,w;
    cout<<"Enter length: ";
    cin>>l;
    cout<<"enter width: ";
    cin>>w;
    rectangle rect(l,w);
    cout<<"area= "<<rect.area()<<endl;
    cout<<"perimeter= "<<rect.perimeter()<<endl;
    return 0;
}

