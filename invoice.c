// Done by Won Ki "Eugene" Lee of IPC144-S1A
// Question 2 - Number 5: Invoice.c

// All the values were given by the assignment already, so I declared the values at the beginning.
// I used INT for Quantity(qty) value because there's no floating value involved.
// Original plan was to state the values and calculations seperate, so the compiler can calculate them all at the end, but this didn't work out well.
// I removed all "scanf_s" in order to simplify the calculation.
// The result is lovely!
// Screenshot is included to show you the result.

#include<stdio.h>

int main()
{
	int qty = 57; float price = 12.67; float subtotal = qty*price; float GST = 0.05*subtotal; float PST = 0.08*subtotal; float gtotal=GST+PST+subtotal;

	//subtotal = qty*price;
	//gtotal = subtotal+GST+PST;
	
	printf("Quantity of the items sold: %d\n\n", qty);
	//scanf_s("%d", &qty);
	printf("Price of the item: %.2lf\n\n", price);
	//scanf_s("%.2lf", &price);
	printf("PST: %.2lf\n\n", PST);
	//scanf_s("%.2lf", &PST);
	printf("GST: %.2lf\n\n", GST);
	//scanf_s("%.2lf", &GST);
	printf("Subtotal: %.2lf\n\n", subtotal);
	//scanf_s("%.2lf", &subtotal);
	printf("Grand Total: %.2lf\n\n", gtotal);
	//scanf_s("%.2lf", &gtotal);
}
