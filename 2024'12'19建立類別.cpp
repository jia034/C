#include<iostream>
using namespace std;

class myTime{
	public:
		int hour;
		int minutes;
		void printTime();
};

void myTime::printTime(){
	cout<<hour<<":"<<minutes<<"\n";
}
int main(){
	myTime now, open;
	now.hour = 8;
	now.minutes = 18;
	cout<<"現在時間:";
	now.printTime();
	open.hour = 9;
	open.minutes = 10;
	cout<<"開門時間:";
	open.printTime();
	
	
}
	
