#include <stdio.h>
int Carrybelt() {
  float motors_capacity = 5.6;
  int motors;
  float total_weight;
  printf("How many motors do we work with? \n");
  scanf("%d", &motors);

  printf("What is the total weight of packages? \n");
  scanf("%f", &total_weight);

  float MAX_capacity = motors * motors_capacity;

  if (total_weight <= MAX_capacity) {
    printf("YES! Carrybelt can do the work :D \n");
  } else if (total_weight > MAX_capacity) {
    printf("NO! Carrybelt can't do the work D: \n");
  }
  return 0;
}

int main() { Carrybelt(); }