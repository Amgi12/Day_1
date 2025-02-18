# Day_1

#Scenario 1: Zomato Order Tracking System
Zomato provides real-time tracking of food delivery orders. The order status changes
dynamically as the delivery progresses through different stages:
1. Order Placed
2. Preparing Food
3. Out for Delivery
4. Delivered
Problem Statement:
Write a C program that simulates a Zomato order tracking system. The user should
input a number (1-4) corresponding to the order status, and the program should
display the current status message.
Example Output:
Enter order status (1-4): 2
Your food is being prepared.
Enter order status (1-4): 4
Your order has been delivered. Enjoy your meal!
If the user enters an invalid number, display an error message:
&quot;Invalid status. Please enter a number between 1 and 4.&quot;


#Scenario 2: Printing a Right-Angled Triangle
Write a C program that takes an integer N as input and prints a right-angled triangle
of ‘*’with N rows. Example for N = 5:



#Scenario 3: Payment Gateway Simulation
Problem Statement:
A payment gateway processes online transactions with the following steps:
1. Enter Payment Method:

1. User selects a payment method:
1. 1 for Credit/Debit Card
2. 2 for UPI
3. 3 for Net Banking

Payment Processing:

1. If the user selects an invalid option, show an error message.
2. If a valid method is chosen, the system asks for further details:
1. For Credit/Debit Card, enter a 16-digit card number.
2. For UPI, enter a valid UPI ID (e.g., user@upi).
3. For Net Banking, select a bank from predefined options (e.g., 1
for SBI, 2 for HDFC).

Transaction Confirmation:

1. If the details are correct, display &quot;Payment Successful!&quot;
2. Otherwise, prompt &quot;Transaction Failed. Please try again.&quot;

Case 1: Successful UPI Payment:
Select Payment Method (1-3): 2
Enter your UPI ID: user@upi
Payment Successful!
Case 2: Invalid Option Selected
Select Payment Method (1-3): 5
Invalid payment method. Please try again.
