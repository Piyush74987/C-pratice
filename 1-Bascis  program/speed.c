#include <stdio.h>
int main() {
    float distance, time, speed;
    printf("Enter Distance (in km) and Time (in hours): ");
    scanf("%f %f", &distance, &time);
    speed = distance / time;
    printf("Speed: %.2f km/hr\n", speed);
    return 0;
}

