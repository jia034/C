#include<iostream>
using namespace std;

class myTime{
	private:
		int hour;
		int minute;
		bool validTime(int h, int m);
	public:
		bool setTime(int h, int m);
		int getHour(){return hour;}
		int getMinute(){return minute;}
		void printTime();
			
}; 
bool myTime::validTime(int h, int m){
	if(h < 0 || h > 23) return false;
	if(m < 0 || m > 59) return false;
    return true;
}
bool myTime::setTime(int h, int m){
	if(validTime(h,m)){
		hour = h;
		minute = m;
		return true;
	}
	else return false;

}
void myTime::printTime(){
	cout<<hour<<":"<<minute<<"\n";
}
main(){
	myTime open, close, now;
	int h, m;
	open.setTime(10, 30);
	close.setTime(17, 30);
	now.setTime(13, 28);
	cout<<"開門時間:";
	open.printTime();
	cout<<"關門時間:";
	close.printTime();
	h = now.getHour();
	m = now.getMinute();
	cout<<"現在時間:";
	cout<<h<<":"<<m<<"\n";

}
