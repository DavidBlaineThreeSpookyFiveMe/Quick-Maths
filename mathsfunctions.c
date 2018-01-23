include<stdio.h>
 
int main() {

   int num1, num2, total;
 
   printf("\nAdd the two numbers : ");
   scanf("%d %d", &num1, &num2);

   total = num1 + num2;

   printf("The total is= %d", total);
	
   printf("\nSubtract the two numbers : ");
   scanf("%d %d", &num1, &num2);

   total = num1 - num2;

   printf("The total is= %d", total);

   printf("\nMultiply the two numbers : ");
   scanf("%d %d", &num1, &num2);

   total = num1 * num2;

   printf("The total is= %d", total);

   printf("\nDivide the two numbers : ");
   scanf("%d %d", &num1, &num2);

   total = num1 / num2;

   printf("The total is= %d", total);

}
