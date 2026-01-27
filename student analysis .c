#include <stdio.h>

int main() {
    int mood, stress;
    float studyHours, productivity;

    printf(" Student Productivity Analysis \n");

    printf("Enter Mood Level (1-5): ");
    scanf("%d", &mood);

    printf("Enter Stress Level (1-5): ");
    scanf("%d", &stress);

    printf("Enter Study Hours: ");
    scanf("%f", &studyHours);

    if (stress == 0) {
        printf("Stress cannot be zero!\n");
       return 0;
    }

    productivity = (mood * studyHours) / stress;

    printf("\n Daily Report  \n");
    
    printf("Mood Level       : %d\n", mood);
    printf("Stress Level : %d\n", stress);
    printf("Study Hours      : %.2f\n", studyHours);
    printf("Productivity  : %.2f\n", productivity);

    if (productivity >= 4) {
        printf("Excellent! well done, You are doing great \n");
    } 
    else if (productivity >= 2)
    {
        printf("Good! keep it up \n");
    } 
    else {
        printf("Low productivity. you are in  Relax mood &  you need to good planning and hardworking  \n");
    }

    return 0;
}