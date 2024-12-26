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
void setTime(int h, int m){
	hour = h;
	minute = m;
}
void printTime(){
	cout<<hour<<":"<<minute<<"\n";
}
main(){
	

