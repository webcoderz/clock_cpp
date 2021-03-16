#ifndef TIME_H
#define TIME_H

class Clock{
public:
  Clock( int = 0 , int = 0 , int= 0);

  void setTime(int,int,int);
  void setHour(int);
  void setMinute(int);
  void setSecond(int);


  int getHour() ;
  int getMinute() ;
  int getSecond() ;

  void printMilitary() const;
  void printStandard() const;
  char printClock() ;
  void tick() ;
  void addClocks(int, int , int,int  , int  , int);

private:
  int hour;
  int minute;
  int second;


};


#endif
