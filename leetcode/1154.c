#include<stdio.h>
#include<stdlib.h>

int dayOfYear(char * date)
{
  int year = atoi(date);
  int month = atoi(date + 5 );
  int day = atoi(date + 8);
  int smonth[12]={31,29,31,30,31,30,31,31,30,31,30,31};
  int monthnormal[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  int answer =0;
  if(year%4 == 0 && year %100 != 0 || year%400 == 0)
  {
   
    for(int i=0;i<month-1;++i)
    {
      answer += smonth[i];
    }
  }
  else
  {
    
    for(int i=0;i<month-1;++i)
    {
      answer += monthnormal[i];
    }

  }
  return answer +day;
}