/*
 * Converts `day_of_year` (1–366) for a given `year` into its equivalent
 * month (1–12) and day (1–31), storing them via `month` and `day` pointers.
 */
#include<stdio.h>
#include<stdbool.h>

bool leap_year(unsigned int year);
void split_date(int day_of_year, int year, int *month, int *day);

int main(){
    int month, day;
    split_date(74, 2026, &month, &day);
    printf("Date: %d-%d-2026", day, month);
    return 0;
}

bool leap_year(unsigned int year){
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

void split_date(int day_of_year, int year, int *month, int *day){
    int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31}, i = 0;

    if(leap_year(year)){
        days[1] = 29;
    }   
    
    while (day_of_year > days[i]){
        day_of_year -= days[i];
        i += 1;
    }
    *day = day_of_year;
    *month = i+1;
}
