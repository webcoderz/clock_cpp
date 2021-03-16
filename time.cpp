#include <iostream>
using std::cout;
using namespace std;

#include "time.h"


Clock::Clock(int hr,int min, int sec){
  //constructor to init  private data (default set at 0)
  setTime(hr,min,sec);
}


void Clock::setTime(int h,int m, int s){
//sets values of hour mins and seconds
setHour(h);
setMinute(m);
setSecond(s);

}


//sets hour h
void Clock::setHour(int h){
  hour = (h >=0 && h < 24) ? h : 0 ;
}

//sets minute m
void Clock::setMinute(int m){
  minute= (m >0 && m < 60) ? m : 0 ;
}
//sets seconds s
void Clock::setSecond(int s){
  second = (s >=0 && s <60) ? s : 0 ;
}


//get hour values
int Clock::getHour()  {
   return hour;
 }

//get minute values
int Clock::getMinute()  {
   return minute;
 }

//get second values
int Clock::getSecond()  {
   return second;
  }



void Clock::tick() {
    second = ((getSecond() + 1 ) % 60);
    if ( getSecond()==0){
      minute = ((getMinute() + 1) % 60);
      if (getMinute() == 0){
        hour = ((getHour() % 24) +1);}
        }
    return setTime(hour,minute,second);

  }



//adds clock objects
void Clock::addClocks(int fh = 0 , int fm = 0 , int fs = 0, int sh= 0 , int sm = 0 , int ss= 0){
  hour = (fh+sh %24 );
  minute = (fm+sm %60);
  second = (fs+ss %60);
  return setTime(hour,minute,second);
}


//print standard Clock
char Clock::printClock() {
    hour=getHour();
    minute=getMinute();
    second = getSecond();
    cout << ( ( hour == 12 ) ? 12 : hour % 12 ) << ":"
    << ( minute < 10 ? "0" : "" ) << minute << ":"
    << ( second < 10 ? "0" : "" ) << second
    << ( hour < 12 ? " AM" : " PM" );
}


//prints mil-Clock
void Clock::printMilitary() const{
  cout << ( hour < 10 ? "0" : "" ) << hour << ":"
  << ( minute < 10 ? "0" : "" ) << minute <<"\n" ;
}

//print standard Clock
void Clock::printStandard() const {
  cout << ( ( hour == 12 ) ? 12 : hour % 12 ) << ":"
  << ( minute < 10 ? "0" : "" ) << minute << ":"
  << ( second < 10 ? "0" : "" ) << second
  << ( hour < 12 ? " AM" : " PM" );
}
