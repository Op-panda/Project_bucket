// program to calculate the perimeter and area of a circle, given that user has to give radius input

#include<iostream>
using namespace std;
#include<stdlib.h>

int main()
{   system("cls");
    double radius,area,perimeter;
    cout<<"Enter radius of the circle:/n";
    cin>>radius;
    perimeter=2*3.14*radius;
    area=3.14*radius*radius;
    cout<<"the perimeter of the circle/n";
    cout<<perimeter;
    cout<<"the area of the circle/n";
    cout<<area;
    return 0;
}
