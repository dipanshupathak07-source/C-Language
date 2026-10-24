#include <stdio.h>
 #include <stdbool.h> // Required for bool, true, false
 int main() {
 bool isRaining = true;
 bool isSunny = false;
 if (isRaining) {
 printf("Take an umbrella!\n");
 } else {
 printf("No need for umbrella.\n");
 }
 if (isSunny) {
 printf("Wear sunglasses.\n");
 } else {
 printf("It's cloudy today.\n");
 }
 // bool works like int internally
 printf("Value of isRaining: %d\n", isRaining); // prints 1
 printf("Value of isSunny: %d\n", isSunny); // prints 0
 return 0;
 }