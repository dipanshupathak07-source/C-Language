
#include <stdio.h>

int main() {
    int s1, s2, s3, s4;
    float total, percentage;

    printf("Enter marks of 4 subjects (out of 40):\n");
    scanf("%d %d %d %d", &s1, &s2, &s3, &s4);

    total = s1 + s2 + s3 + s4;
    percentage = (total / 160) * 100;

    printf("Total Marks = %.0f/160\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}