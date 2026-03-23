#include <stdio.h>
#define target_temp 22.0
int greenhouse_func(double,double);
int main(){
	/*Q4: A smart greenhouse system monitors environmental conditions and makes decisions based on temperature and humidity.
The system uses the following variables:
*Temperature (in °C)
*Humidity (in %)
*Target temperature = 22.0
The system operates according to the following rules:
1. If temperature < target temperature, it displays:"Heating required" ,otherwise, it displays:"Temperature is sufficient"
2. If 0 ≤ temperature < 30:
    o If humidity >= 50, then action level = 5
    o Otherwise, action level = 3
   If not 0 ≤ temperature < 30:
    o action level = 2
3. After determining actionLevel:
    o If action level <= 3, display:"Normal operation", otherwise, display:"High activity mode"
Write a function that implements the rules above. Given the following values:
*Temperature = 18.0;
*Humidity = 40.0;
a) What messages will be displayed? b) What is the final value of action level? */

int final_action_level;
double temp = 18.0, humidity = 40.0;
printf("Welcome to SMART GREENHOUSE SYSTEM!\n");
printf("Your current temperature is %.3lf °C\n",temp);
printf("Your current humidity is %.3lf %% \n",humidity);

final_action_level = greenhouse_func(temp,humidity);
printf("Your Final Action Level is %d.\n",final_action_level);

return 0;
}
int greenhouse_func(double temp,double humidity){
	int action_level;
	if(temp<target_temp){
		printf("Heating required.\n");
	}
	else{
		printf("Temperature is sufficient.\n");
	}
	if(temp>=0 && temp<30){
		if(humidity>=50){
			action_level=5;
		}
		else{
			action_level=3;
		}
	}
	else{
	    	action_level=2;
	}
	if(action_level<=3){
		printf("Normal operation.\n");
	}
	else{
		printf("High activity mode.\n");
	}
	return action_level;
}

