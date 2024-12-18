#include <stdio.h>
#include <stdlib.h>


int is_leap_year( int year );


int main(){

int year, confirmed;


printf("Hello! Please put in desired year!");

scanf("%d", &year);

printf("remainder %d",  2052 % 400);

printf("remainder divided by 100 %d", 2052 % 100);
confirmed = is_leap_year(year);


printf("%d \n", confirmed);
}



int is_leap_year( int year ){

if(( year%100 == 0)&& (year%400==0 )){
printf("true");

}else if(year%4==0){
printf("true");
}else{

printf("false");

}

}
