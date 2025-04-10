#include <stdio.h>
int main() {
 float num1, num2, result;
 char operation;
 printf("Enter first number: ");
 scanf("%f", &num1);
 printf("Enter operation (+, -, *, /): ");
 scanf(" %c", &operation);
 printf("Enter second number: ");
 scanf("%f", &num2);
 if (operation == '+') {
 result = num1 + num2;
 } else if (operation == '-') {
 result = num1 - num2;
 } else if (operation == '*') {
 result = num1 * num2;
 } else if (operation == '/') {
 if (num2 != 0) {
 result = num1 / num2;
 } else {
 printf("Error: Division by zero!\n");
 return 1;
 }
 } else {
 printf("Error: Invalid operation!\n");
 return 1;
 }
 printf("Result: %.2f\n", result);
 return 0;
}
