#include<stdio.h>

struct time{
	int hours;
	int minutes;
};

void showTime(struct time *ptr);
void showTime2(struct time t);

int main(){
	struct time now, *ptr;
	ptr = &now;
	ptr -> hours = 9;
	(*ptr).minutes = 40;
	printf("%d時%d分\n", now.hours, now.minutes);
	showTime(ptr);
	showTime2(now);
}
void showTime(struct time *ptr){
	if(ptr -> hours >= 12)
		printf("PM %d時:", ptr -> hours - 12);
	else
	    printf("AM %d時:", ptr -> hours); 
	printf("%d分\n", ptr -> minutes);

}
void showTime2(struct time t){
	if(t.hours >= 12)
	    printf("PM %d時:", t.hours - 12);
	else
	    printf("AM %d時:", t.hours); 
	printf("%d分\n", t.minutes);
}
