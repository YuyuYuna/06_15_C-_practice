#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <windows.h>
using namespace std;

class Clock{
	private:
		int hour;
		int minute;
		int second;
		int h,m,s;
		
	public:
		Clock(){
			hour = 0;
			minute = 0;
			second = 0;
		}
		Clock(int h,int m,int s){
			hour = h;
			minute = m;
			second = s;
		}
		void SetTime(int h,int m,int s){
			hour = h;
			minute = m;
			second = s;
		}
		void Display(){
			printf("Time : %d:%d:%d",h,m,s);
		}
		void Update(){
			if(s<59){
				s++;
			}else{
				m++;
			}
			if(m<59){
				m++;
			}else{
				h++;
			}
			if(h>=24){
				h=0;
			}
			Sleep(1000);
		}
	};

int main(){
	int myClock,yourClock;
	myClock = new Clock::Clock(); 
	yourClock = new Clock::Clock(6,30,0);
}
 
