#include<iostream>
using namespace std;

const double PI = 3.14159265358979;

inline double calarea(double radius){
	return PI*radius*radius;
}  

int main(){
	double r = 3.0;
	double area = calarea(r);
	cout<<area<<endl;
	return 0;
}