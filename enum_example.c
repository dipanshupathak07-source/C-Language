#include <stdio.h>
int main() {
enum Weekday { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday,
Saturday };
enum Weekday today;
today = Wednesday;
printf("Day number = %d\n", today);
return 0;
}