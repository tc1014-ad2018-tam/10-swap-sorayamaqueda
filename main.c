/*
 * This program is for arranging three given numbers by the user in ascending order.
 *
 * Problem Analysis.
 * Problem: Order in ascending order three numbers that the user gives us. Then display them.
 *
 * Input: number 1, number 2, number 3
 *
 * Process/Calculations: Compare the values of the numbers to determine which one is the smallest and which one is the
 * largest so that we can order them from smallest to largest.
 *
 * Output: Numbers ordered in ascending order.
 *
 * Author: soraya_maqueda@hotmail.com
 * Date: 13.09.2018
 * Contact: soraya_maqueda@hotmail.com
 */

#include <stdio.h>

//This is the algorithm to determine the order of the numbers
void ascendant(int *first, int *second, int *third) {
    int num1 = *first;
    int num2 = *second;
    int num3 = *third;

    if (num1 <= num2 && num1 <= num3 && num2 <= num3) {
        *first = num1;
        *second = num2;
        *third = num3;
    } else {
        if (num1 <= num2 && num1 <= num3 && num3 <= num2) {
            *first = num1;
            *second = num3;
            *third = num2;
        } else {
            if (num2 <= num1 && num2 <= num3 && num1 <= num3) {
                *first = num2;
                *second = num1;
                *third = num3;
            } else {
                if (num2 <= num1 && num2 <= num3 && num3 <= num1) {
                    *first = num2;
                    *second = num3;
                    *third = num1;
                } else {
                    if (num3 <= num1 && num3 <= num2 && num1 <= num2) {
                        *first = num3;
                        *second = num1;
                        *third = num2;
                    } else {
                        if (num3 <= num1 && num3 <= num2 && num2 <= num1) {
                            *first = num3;
                            *second = num2;
                            *third = num1;
                        }
                    }
                }
            }
        }
    }
}

//The main function is for displaying the user the numbers already ordered.
int main() {
    int first;
    int second;
    int third;

    printf("Give me the first number:");
    scanf("%i", &first);
    printf("Give me the second number:");
    scanf("%i", &second);
    printf("Give me the third number:");
    scanf("%i", &third);

    ascendant(&first, &second, &third);
    printf("The order of the numbers that you introduced are:\n");
    printf("%i, %i, %i", first, second, third);

    return 0;
}