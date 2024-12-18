
#include <stdio.h>
#include <stdlib.h>
/*
* Programmer Name: Colden Jeanmonod
* Course name nd description: 1057 section 004 fall 2023
*Assignment Name: Day Of Year
*  Due Date: Oct 18th 2023
*/


int is_leap_year(int year);
int get_date();
int is_a_valid_date(int day,int  month, int  year);
int ordinal_date(int day,int  leap_year, int  month);
void  print_US_date(int year, int month, int day);
void  print_ordinal_date( int ordinal, int year);




int main(){

// Assorted Variables I need
int  day,  year, month, valid, ordinal_day, ordinal, leap_year;

printf("Please enter desired date! \n");
day = get_date();


printf("Please enter desired month! \n");
month  = get_date();


printf("Please enter desired year! \n");
year = get_date();


printf("Is it a valid date? \n");
valid = is_a_valid_date(day, month, year);

printf("It will print 1 for a valid date and 0 if it is not, %d \n", valid);

printf("Is it a leap year? \n");

leap_year = is_leap_year( year);

printf("It will print 1 for if it is a leap year and 0 if it is not, answer: %d \n", leap_year);



ordinal = ordinal_date(day, leap_year, month);

printf("The Ordinal date is %d \n", ordinal);

print_US_date(year,month,day);

print_ordinal_date(ordinal, year);

return EXIT_SUCCESS;
}

/*
*Function Name: Get Date
*Description: Gathers the day, month, and year then returns the user inputted day month and year
* preconditions: none
* post conditions: none
* Globals: none
*/

int get_date(){
// variavles inputted
int selector, day, month, year;


/* 
* this runs an if statement to gather the day month and year and return them
*/
printf("Enter 1 for day, 2 for month, 3 for year \n");

scanf("%d", &selector);


	if(selector == 1){
		printf("Please enter a day \n");
		scanf("%d", &day);
		return day;
	}else if( selector == 2){

		printf("Please enter a month \n");
		scanf("%d", &month);
		return month;

	}else if(selector == 3){

		printf("Please enter a year \n");
		scanf("%d", &year);
		return year;
	}

}

/*
*Function Name: is_a_valid_date
* Description: checks to see if the date inputted is a "valid date" according to the parameters that the lab demands
* Preconditions: day, month, year. those are the user inputted days months and years.
* Postconditions: the Validity statement
* Global: none
*/

int is_a_valid_date(int day, int month, int year){
//the only needed variable
int validity;
//The if statement that should take in the parameters for the inputted date.
	if((day<=31 && day >= 0) && (month <= 12 && month >=1) && (year <= 2200 && year >= 1900)){
		 validity = 1;
		return validity;
	}else{
		validity = 0;
		return validity;
	}
}


/*
* Function Name: is_leap_year
* Description: This function will take the year and see if it is evenly divisible by 400 and 100, then check if a year is divisible by 4,
* it should return 1 if it is true and 0 if it not
*  Preconditions: year, the user inputted year
* postcondition: Returns if it is actually a leap year
* Globals: None
*/

int is_leap_year( int year){

int valid_leap;

//This if statement will divide modulate based on the year to determine if it is in fact a leap year 
if(year%400==0){
valid_leap =1;

return valid_leap;
}else if(year %100 ==0){
valid_leap = 0;
 return valid_leap;
}else if( year % 4 == 0){

valid_leap = 1;
return valid_leap;
}else{
valid_leap  = 0;

return valid_leap;

}

}

/*
* Function Name: ordinal_date
* Description: This jus simply calculates the day in a ordinal date based off of the month and if it is a leap year
* Preconditions: The day, leap_year, and month
* Post conditions: returns the new date that is provided
* Globals: none
*/

int ordinal_date(int day, int leap_year, int month){
int month_start, new_date;

//I will admit that this could have been simplified, but i forgot how to use a switch case when i made it so this just calculates if it is a ordinal date
	if(month == 1){
   		 new_date = 0 + day;

	}else if( month ==2){
		   month_start = 31;

		   new_date = month_start + day;


	}else if( month ==3){
		if(leap_year==1){
		     new_date= 60 + day;

		}else{

			new_date = 59+ day;
		}

	}else if( month == 4){

		if( leap_year == 1){

			month_start = 91;
	
			new_date = month_start + day;
		}else{

			month_start = 90;
			new_date = month_start + day;
		}

}else if( month == 5){

	if(leap_year ==1){
	new_date = 121+day;
	}else{
	new_date = 120+day;
	}


}else if( month == 6){
	
	if(leap_year == 1){
	new_date = day +152 ;
	}else{
	new_date = day +151 ;

	}

}else if( month == 7){

	if(leap_year == 1){

	new_date = day +182 ;
	}else{

	new_date = day +181 ;
	}



}else if(month == 8){

	if(leap_year == 1){
	new_date = day +213 ;
	}else{
	new_date = day +212 ;
	}

}else if(month == 9){

	if(leap_year ==1){
	new_date = day +244 ;
	}else{
	new_date = day +243 ;
	}

}else if( month ==10){
	if(leap_year == 1){
	new_date = day +274 ;
	}else{
	new_date = day +273 ;
	}

}else if(month == 11){
	if(leap_year == 1){
	new_date = day +305 ;
	}else{
	new_date = day +304 ;
	}
}else if(month == 12){
	if(leap_year == 1){
	new_date = day +335 ;
	}else{
	new_date = day +334 ;
	}
}


return new_date;
}

/*
* Function name:print_us_date
* Description: prints the date in US terms so month/day/year
* Preconditions: month, day, year
* postconditions: none
* Globals: none
*/
void print_US_date(int year, int month, int day){



printf("The date in US terms is, %2d/%2d/%4d\n", month, day, year);



}

/*
* Function: print_ordinal_date
* Description: This just prints the date in a ordinal date, so yearday
* precondition: day, yea
*postcondition: none
* GLobals: none
*/
void print_ordinal_date(int ordinal, int year){

printf("The date in a Julianized calendar is %4d%3d\n", year, ordinal); 

}




