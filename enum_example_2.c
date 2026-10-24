#include <stdio.h>
enum Signal { RED, YELLOW, GREEN };
int main() {
enum Signal light = GREEN;
if(light == RED)
printf("STOP!\n");
else if(light == YELLOW)
printf("WAIT!\n");
else printf("GO!\n");
return 0;
}