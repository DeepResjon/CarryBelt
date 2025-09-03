#include <stdio.h>
int Carrybelt() {
  float motor_capacity = 5.6; // in kg
  int motors;
  float total_weight;

  printf("Enter the number of motors: \n ");
  scanf("%d", &motors);

  printf("Enter the amount of weight: \n"); // in kg
  scanf("%f", &total_weight);

  int Max_capacity = motor_capacity * motors;

  if (total_weight <= Max_capacity) {
    printf("Yes! The carrybelt does the job :DD");
  } else if (total_weight > Max_capacity) {
    printf("No! The carrybelt can't to the job");
  }

  return 0;
}
int main() { Carrybelt(); }