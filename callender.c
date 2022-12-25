/******************************************************************************

                  CALLENDER PROJECT 
                    
    in this project .. there are 3 imp operations to be done and they are as follows
    
    1. finding a day using given data of date,month,year..
    2. The whole callender will be displayed if we give input as month,year and also we can navigate the month using keys..
    3. we can have imp note with corresponding days...
     
*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
int monthcode(int);
int days(int, int, int);
int month_code(int);                                         
int cen_code(int);
char lol(int);
void getday(void);
void getpreviousnnextmth(void);
int verificatin(int,int,int);
int specialdates(void);
int get_1st_weekday(int year);
int findingmoths(void);

struct
{
    int dd;
    int mm;
    int yyyy;
} date;
char lol(int o)
{
    int choice = o;
    switch (choice)
    {
    // char a[15];
    case 0:
        printf("the day is :: saturday");
        break;
    case 1:
        printf("the day is :: sunday");
        break;
    case 2:
        printf("the day is :: monday");
        break;
    case 3:
        printf("the day is :: tuesday");
        break;
    case 4:
        printf("the day is :: wednesday");
        break;
    case 5:
        printf("the day is :: thursday");
        break;
    case 6:
        printf("the day is :: friday");
        break;
    default:
        printf("invalid argument is passed in the lol() function::");
    }
}
int cen_code(int year)
{
    int codeyear;
    if (1500 <= year && year <= 1599)
    {
        codeyear = 0;
        return codeyear;
    }
    if (year >= 1600 && year <= 1699)
    {
        codeyear = 6;
        return codeyear;
    }
    if (year >= 1700 && year <= 1799)
    {
        codeyear = 4;
        return codeyear;
    }
    if (year >= 1800 && year <= 1899)
    {
        codeyear = 2;
        return codeyear;
    }
    if (year >= 1900 && year <= 1999)
    {
        codeyear = 0;
        return codeyear;
    }
    if (year >= 2000 && year <= 2099)
    {
        codeyear = 6;
        return codeyear;
    }
}
int month_code(int mm)
{
    int choice, day;
    choice = mm;
    switch (choice)
    {
    case 1:
        day = 1;
        return (day);
        break;
    case 2:
        day = 4;
        return (day);
        break;
    case 3:
        day = 4;
        return (day);
        break;
    case 4:
        day = 0;
        return (day);
        break;
    case 5:
        day = 2;
        return (day);
        break;
    case 6:
        day = 5;
        return (day);
        break;
    case 7:
        day = 0;
        return (day);
        break;
    case 8:
        day = 3;
        return (day);
        break;
    case 9:
        day = 6;
        return (day);
        break;
    case 10:
        day = 1;
        return (day);
        break;
    case 11:
        day = 4;
        return (day);
        break;
    case 12:
        day = 6;
        return (day);
        break;
    }
}
int days(int dd, int mm, int yyyy)
{
    int res = 0;
    int y, s, c, l;
    y = yyyy % 100;
    s = y / 4;
    l = month_code(mm);
    c = cen_code(yyyy);
    res = y + s + l + dd + c;
    res = res % 7;
    return res;
}

 int verificatin(int d,int m,int yyy)
 {
     int mm,dd,yyyy;
    if((dd>1)||(dd<31)||(mm<11)||(mm>12))
     {
     return 1;
     }

    if((yyyy%400==0)||((yyyy%100==0)&&(yyyy%4==0)))
    {
        printf("this is a leap year\n");
        
    }


 }
void getday(void) // func defination
{
    // Write C code here
    int dd, mm, yyyy,y;
    char daycode;
    char ans;
    printf("enter the date::\n");
    scanf("%d", &dd);
    printf("enter the month::\n");
    scanf("%d", &mm);
    printf("enter the year::\n");
    scanf("%d", &yyyy);
    verificatin(dd,mm,yyyy);

   {
    daycode=days(dd,mm,yyyy);
    printf("%c",lol(daycode));// function call

}
}

int get_1st_weekday(int year)
{
    int day;
    day=(((year-1)*365)+(year-1)/4-((year-1)/100)+((year-1)/400)+1)%7;
    return day;
}
int findingmoths(void)
{
    // Write C code here
    int month,day,daysinmonth,weekday=0,startingday;
    int year;
    char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int monthdays[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if((year%400==0)||((year%4==0)&&(year%100==0)))
    {
        monthdays[1]=29;
    }
    printf("enter the year of your desired year::\n");
    scanf("%d",&year);
    startingday=get_1st_weekday(year);
    for(month=0;month<12;month++)
    {
        daysinmonth=monthdays[month];
        printf("\n\n-----------%s----------\n",months[month]);
        printf("\n  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
        for(weekday=0;weekday<startingday;weekday++)
        {
            printf("     ");
        }
        for(day=1;day<=daysinmonth;day++)
        {
            printf("%5d",day);
            if(++weekday>6)
            {
                printf("\n");
                weekday=0;
            }
            startingday=weekday;
        }
    }

    return 0;
}

int specialdates(void)
{
   
printf("enter the month to display special occasions of the month\n");
scanf("%d",&date.mm);
switch(date.mm)
{
   case 1:
   printf("*******************JANUARY***********************\n");
   printf("1st New year's day\n25th Burns Night\n26th Republic day\n");
   break;
   case 2:
   printf("*******************FEBRUARY**********************\n");
   printf("14th Valentines day\n16th shrove tuesday\n17th kindness day\n");
   break;
   case 3:
   printf("*******************MARCH*************************\n");
   printf("1st st davids day\n8th Women's day\n14th Mothers day\n");
   break;
   case 4:
   printf("*******************APRIL*************************\n");
   printf("1st April fool's day\n21st Queens birthday\n");
   break;
   case 5:
   printf("*******************MAY**************************\n");
   printf("1st May day\n3rd spring bank holiday"); 
   break;
   case 6:
   printf("******************JUNE**************************\n");
   printf("5th World Environment day\n20th Fathers day\n");
   break;
   case 7:
   printf("******************JULY*************************\n");
   printf("11th world population day\n");
   break;
   case 8:
   printf("******************AUGUST**********************\n");
   printf("9th Quit India day\n15 Independence day\n19th Photography day\n29th National sports day\n");
   break;
   case 9:
   printf("********************SEPTEMBER******************\n");
   printf("5th Teacher's day\n8th International literacy day\n15th ENGINEERS DAY\n29th World health day\n");
   break;
   case 10:
   printf("********************OCTOBER*******************\n");
   printf("1st International elderly day\n2nd Gandhi jayanthi;International day of non-violence\n8th Indian Army day\n9th World post office day\n15th World students day\n16th World food day\n31st National unity day");
   break;
   case 11:
   printf("*******************NOVEMBER******************\n");
   printf("5th World tsunami day\n7th National cancer day\n14th Children's day\n21th World Television day\n27th MY BIRTHDAY\n");
   break;
   case 12:
   printf("*******************DECEMBER******************\n");
   printf("1st World AIDS day\n2nd National pollution day\n4th Indian Navy day\n10th International children's day\n22nd National Mathematics day\n25th Christmas day");
   break;
   default:
   printf("invalid input");
}

}
int main()
{
    printf("****************************   AGENDA   **************************************************\n");
    printf(" 1. finding the day using given data\n");
    printf(" 2. print all the days of the month corresponding to the month and year\n");
    printf(" 3. Adding the note for special days\n");
    printf(" 4. Exit the program \n  ");
    printf("************ ENTER THE CHOICE *************** \n");
    int choice, n;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("finding the day using given data\n");
        getday();
        break;
    case 2:
        printf("printing all the days of the month corresponding to the month and year\n");
        findingmoths();
        break;
    case 3:
        printf("Adding the note for special days\n");
        specialdates();
        break;
    case 4:
        printf(" |EXIT| \n  ");
        exit(0);
        break;
    default:
        printf("invalid input\n");
        break;
    }

}



