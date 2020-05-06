#include<iostream>
using namespace std;

class Point{
private:
	double X,Y;
public:
	Point(double a,double b){
		X=a;
		Y=b;
	}
	/*Point(Point &p){
		X=p.GetX();
		Y=p.GetY();
	}*/
	double GetX(){
		return X;
	}
	double GetY(){
		return Y;
	}
};

class Line{
private:
	Point A,B;
	double length;
public:
    Line(Point p1,Point p2){
		A=p1;
	    B=p2;
    length=sqrt(pow(A.GetX()-B.GetX(),2)+pow(A.GetY()-B.GetY(),2));
	}
	double GetLength(){
		return length;
	}
};

int main(){
	point a(0,2);
	Point b(2,3);
	Line line(a,b);
	cout<<"The distance of two points:"<<line.GetLength()<<endl;
	return 0;
}