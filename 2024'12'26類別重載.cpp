#include<iostream>
using namespace std;

class myTime{
	private:
		int hour;
		int minute;
	public:
		myTime();
		myTime(int h, int m = 30);
		void setTime(int h, int m);
	    void printTime();

};

myTime::myTime(){
	hour = 9; minute = 0;
}
myTime::myTime(int h, int m){
	setTime(h, m);
}
void myTime::setTime(int h, int m){
	hour = h;
	minute = m;
}
void myTime::printTime(){
	cout<<hour<<":"<<minute<<"\n";
}
main(){
	myTime open;
	myTime close(21);
	myTime close1(21, 25);
        cout<<"開門時間:";
	open.printTime();
	cout<<"關門時間(1):";
	close.printTime();
	cout<<"關門時間(2):";
	close1.printTime();
	
}
	

