#include "time.h"
#include<iostream>
using namespace std;
using std::cout;



//cody Webb

int main()
{
  int first_clock_loop = 1;
  int second_clock_loop = 1;
  int hour,minute,second, fh,sh,fm,sm,fs,ss;

//first clock
cout<<"Creating firstClock object using the default constructor"<<endl;
  Clock firstClock(0,0,0); //init first clock
  cout<<"first clock time: "<< firstClock.printClock()<<endl;
  //10 ticks first clock
  cout<<"ticking firstClock object\n"<<endl;
  while (first_clock_loop < 11) {
    firstClock.tick();
    cout<< "tick: "<< first_clock_loop<<" time: "<<firstClock.printClock()<<"\n"<<endl;
    first_clock_loop++;
  }


//second clock
cout<<"Creating secondClock object using the second constructor"<<endl;
  cout<<"Enter value for  hour: ";
  cin>>hour;

  cout<<"Enter value for minutes: ";
  cin>>minute;

  cout<<"Enter value for seconds: ";
  cin>>second;
cout<<"\n"<<endl;
  Clock secondClock(hour,minute,second); //init second clock
  cout<<"second clock time: "<< secondClock.printClock()<<endl;
  //10 ticks 2nd clock
  cout<<"ticking secondClock object\n"<<endl;
  while (second_clock_loop < 11) {
      secondClock.tick();
      cout<< "tick: "<< second_clock_loop<<" time: "<<secondClock.printClock()<<"\n"<<endl;

      second_clock_loop++;
    }



  //third clock
  Clock thirdClock(0,0,0); //init  third clock
  cout<< "Adding the time in the firstClock object to the time in the secondClock object to produce the thirdClock object"<<endl;
  thirdClock.addClocks(firstClock.getHour(),firstClock.getMinute(),firstClock.getSecond() ,secondClock.getHour(),secondClock.getMinute(),secondClock.getSecond());
  cout<<"third clock time: "<< thirdClock.printClock()<<"\n"<<endl;



  //changing first clock time to hours = 7, minutes = 23, seconds = 15
  cout<< "Changing the time in firstClock object to be"<<endl;
  firstClock.setHour(07);
  firstClock.setMinute(23);
  firstClock.setSecond(15);
  cout<< "time: "<<firstClock.printClock()<<"\n"<<endl;

  //checking first clock against third clocks
  cout<< "comparing times in firstclock and secondclock object" <<endl;
  cout<< "first clock time: "<<firstClock.printClock()<<endl;
  cout<< "second clock time: "<<secondClock.printClock()<<endl;

  fh = firstClock.getHour();
  fm = firstClock.getMinute();
  fs = firstClock.getSecond();

  sh = secondClock.getHour();
  sm = secondClock.getMinute();
  ss = secondClock.getSecond();

  if ( (fh == sh ) && (fm==sm) && (fs==ss) ){cout << "firstClock and secondClock do have the same time \n ";}
  else{cout<<"firstClock and secondClock do not have the same time\n ";}




  return 0;
}
