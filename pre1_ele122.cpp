#include <stdio.h>
void informations();
int compute_departure_time(int arrival_time, double distance, double avg_speed);
int main()
{
/*Q3:Write a function that computes the departure time required to arrive at a destination by a specified time. Assume that the arrival occurs later on the same day as the departure. The function inputs are:
* The arrival time as an integer in 24-hour HHMM format (e.g., 8:30 PM = 2030),
* The distance to the destination in kilometers,
* The average speed in km/h.
The function should return the required departure time (rounded to the nearest minute) as an integer in 24-hour HHMM format.*/
	informations();
	int arrival_time;
	double distance, avg_speed;

    printf("Please enter your arrival time> \n");
    scanf("%d",&arrival_time);
    printf("Please enter your distance> \n");
    scanf("%lf",&distance);
    printf("Please enter your average speed> \n");
    scanf("%lf",&avg_speed);

	compute_departure_time(arrival_time, distance, avg_speed);
	
    printf("Your departure time is %04d", compute_departure_time(arrival_time,distance,avg_speed));

    return 0;
}
void informations()
{
	 printf(" Welcome!\n");
	 printf("This program has been designed to compute your departure time");
	 printf(" required to arrive at a destination by a specified time.\n");
	 printf(">Please enter the arrival time information on HHMM (e.g., 8:30PM => 2030),\n");
 	 printf(">Distance to your destination in kilometers,\n");
 	 printf(">Average speed information in kilometers/hours format.\n");
	 printf("Thanks for your collaboration!\n");	 
}
int compute_departure_time(int arrival_time, double distance, double avg_speed)
{
	double travel_time_min = (distance / avg_speed) * 60.0;
	
	int travel_min_rounded = (int)(travel_time_min + 0.5);
	
	int arrival_hours = arrival_time / 100;
	int arrival_min = arrival_time % 100;
	
	int total_arrival_min = (arrival_hours * 60) + arrival_min;
	int total_departure_min = total_arrival_min - travel_min_rounded;
	
	int departure_hours = total_departure_min / 60;
	int departure_min = total_departure_min % 60;
	
	return (departure_hours * 100) + departure_min;
}
