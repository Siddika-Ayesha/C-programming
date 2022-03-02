/*   char *month[]={"January","February","March","April","May","June","July","August","September","November","December"};
int i;
for(i=0;i<12;i++)
{
    printf("\n----------%s----------\n",month[i]);
    printf("\n sun, mon, tue ,wed, thu, fri,sat\n\n");
}*/
//calender
#include<stdio.h>
int main()
{
 char *month[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
int daysInMonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
int i,j,totalDays,weekday=0;
for(i=0;i<=11;++i)
{
    printf("\n ----------%s----------\n",month[i]);
    printf("\n sun, mon tue , wed, thu, fri, sat");
    totalDays=daysInMonth[i];
    for(j=1;j<=totalDays;j++)
        printf("%5d",j);
    weekday++;
    if("weekday>6")
    {
        weekday=0;
        printf("\n");
    }
}
 return 0;
}
