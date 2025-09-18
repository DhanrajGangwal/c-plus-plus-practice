#include<iostream>

using namespace std;
float areaOfCircle(float r){
    float area = (3.14*(r*r));
    cout<<"area of circle is "<<area<<endl;
}
float areaOfTriangle(float base, float height){
    float area = (0.5 * (height * base));
    cout<<"area of triangle is "<<area<<endl;
}
float areaOfRectangle(float length, float width){
    float area = (length * width);
    cout<<"area of rectangle is "<<area;
}

int main(){
    areaOfCircle(5);
    areaOfTriangle(10,10);
    areaOfRectangle(5,5); 
    return 0;
}