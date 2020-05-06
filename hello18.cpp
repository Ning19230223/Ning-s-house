#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;

class Girl;

class Boy{
private:
	char *name;
	int age;
public:
	Boy(char N[],int a):age(a){
		name=new char [strlen(N)+1];
		strcpy_s(name,strlen(N)+1,N);
	}
	~Boy(){
		delete [] name;
	}
	void print(){
		cout<<"boy's name:"<<name<<endl;
		cout<<"boy's age:"<<age<<endl;
	}
//	void VisitGirl(Girl & girl){
//		cout<<"girl's name:"<<girl.name<<endl;
//		cout<<"girl's age:"<<girl.age<<endl;
//	}
//	friend Girl;
//	friend void VisitBoyGirl(Boy & boy,Girl & girl);
};

class Girl{
private:
	char *name;
	int age;
public:
	Girl(char N[],int a):age(a){
		name=new char [strlen(N)+1];
		strcpy_s(name,strlen(N)+1,N);
	}
	~Girl(){
		delete [] name;
	}
	void print(){
		cout<<"girl's name:"<<name<<endl;
		cout<<"girl's age:"<<age<<endl;
	}
//	void VisitBoy(Boy & boy){
//		cout<<"boy's name:"<<boy.name<<endl;
//		cout<<"boy's age:"<<boy.age<<endl;
//	}
//	friend Boy;
//	friend void VisitBoyGirl(Boy & boy,Girl & girl);
};

//void VisitBoyGirl(Boy & boy,Girl & girl){
//	cout<<"boy's name:"<<Boy.name<<endl;
//	cout<<"boy's age:"<<Boy.age<<endl;
//	cout<<"girl's name:"<<Girl.name<<endl;
//	cout<<"girl's age:"<<Girl.age<<endl;
//}

int main(){
	Boy boy("Marin",19);
	Girl girl("Suzy",19);
	boy.print();
	girl.print();
//	boy.VisitGirl(girl);
//	girl.VisitBoy(boy);
//	VisitBoyGirl(boy,girl);
	system("pause");
	return 0;
}