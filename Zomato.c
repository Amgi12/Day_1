//
// Created by Amgith on 17-02-2025.
//
#include <stdio.h>
#include <stdlib.h>
void main() {
    while (1) {
        printf("Zomato order tracking\n");
        printf("1.Order placed\n2.Preparing food\n3.Out of delivery\n4.Delivered\n");
        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:printf("Your order has been placed wait for some time for the confirmation\n");
            break;
            case 2:printf("Your is being prepared\n");
            break;
            case 3:printf("Your order is out for delivery\n");
            break;
            case 4:printf("Your order has been delivered.Enjoy your meal!\n");
            break;
            default:printf("Invalid status.Please enter a number between 1-4\n");
            break;
        }
    }
}
