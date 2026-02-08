#include <stdio.h>

int main()
{
    int length;
    int width;
    printf("Enter Length\n");
    scanf("%d", &length);

    printf("Enter Width\n");
    scanf("%d", &width);

    printf("The area of Rectangle is %d", length*width);
    return 0;
}

#include<stdio.h>

int main(){
    int r = 6;
    printf("The area of circle %d is %f ",r,3.14*r*r);
    return 0;
}

#include<stdio.h>

int main(){
    int r,h;
    r = 5;
    h = 6;
    printf("Volume of the cylinder with radius %d & height %d is %f", r, h, 3.14*r*r*h);
    return 0;
}

#include <stdio.h>

int main()
{
    int r, h;
    printf("Radius of the Cylinder:\t");
    scanf("%d", &r);

    printf("Height of the Cylinder:\t");
    scanf("%d", &h);

    printf("The Volume of the Cylinder with Radius %d & Height %d is: %f", r, h, 3.14 * r * r * h );

    printf("\nThe Area of the Circle with Radius %d is: %f", r, 3.14 * r * r);
    return 0;
}

#include<stdio.h>

int main(){
    int celcius;
    printf("Enter Celcius: ");
    scanf("%d", &celcius);

    printf("%d∘C is = %f ∘F", celcius,(1.8 * celcius)+ 32 );
    return 0;
}

#include<stdio.h>

int main(){
  int p, r, t, i;
    p = 4500;
    r = 2;
    t = 2;

    i = (p*r*t)/100;
    printf("Simple Interest will be %d: ", i);
    return 0;
}

#include<stdio.h>

int main(){
    int a;
    float b;
    int i = 10;
    int j = i;
    int a = 2
    , b = 3, c = 4, d = 5;
    int ji = a+j-i;
    int a, b, c, d;
    a = b = c = d = 30;

    printf("%d", a);
    return 0;
}

#include<stdio.h>

int main(){
   int i = 6;
    int j = i;

    printf("%d", j);
    return 0;
}

#include<stdio.h>

int main()
{
int a = 2, b = 5;
int z = a*b;   //Legal Operation
// a*b = z;  //Illegal Operation(Not Allowed)

printf("%d\n", z);
return 0;

printf("The Remainder of b/a is %d", b%a);
}

#include<stdio.h>

int main()
{
    int a = 3, b = 7;
    printf("Remainder: %d", b%a);

}

#include<stdio.h>

int main(){
    int k = 3.0/9;
    printf("%d", k);
    return 0;
}

#include<stdio.h>

int main(){
    int a = 3;
    int b = 6;
    int c = 9;

    printf("The value is %d\n", a*b/c + 7);
    printf("The value is %d", 3*b/2*c + 7*a);

    // 3*b/2*c + 7*a
    // 3*b/2*c + 21
    // 18/2*c + 21
    // 9*c + 21
    // 81 + 21
    // 102
    return 0;
}

 #include<stdio.h>

 int main(){
    int n = 45;
    float m = 23.45;
    n = (int) m; //convert the data type to int
    printf("%d\n", n);
    return 0;
 }

----------------------------- IF ELSE OPERATORS-------------------------
#include<stdio.h>
int main()
{
    int age = 14;
    if (age>10)
    {
       printf("You are older than 10\n");
    }

    if (age%7==0);  //
    {
        printf("Yes You are Right. Your age is divisible by 7 \n");
    }

    return 0;
}

#include<stdio.h>

int main(){
    int age = 16;
    if (age>15)
    {
        printf("You are older than me..\n");
    }
    else{
        printf("HAHA! You are not older than me..\n");
    }

    return 0;
}

#include<stdio.h>

int main(){
    if(4){
        printf("This if is executed!\n");
    }
    if(3.98){
        printf("This float if is executed!\n");
    }
    if('c'){
        printf("This character if is executed!\n");
    }
    if(0){
        printf("This zero if is executed!\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int a = 1;
    int b = 1;
    printf("The Value of a and b is %d\n", a && b);
    printf("The Value of a and b is %d\n", a || b);
    printf("The Value of not(a) is %d\n", !a);
    printf("The Value of not(a) is %d\n", !b);

    if (a && b)
    {
        printf("This is true \n");
    }

    return 0;
}

#include<stdio.h>

int main(){
    int age = 15;

    if (age>60)
    {
        printf("You can drive.");
    }

    else if(age>18){
        printf("You can Drive & You are a senior citizen.");
    }
    else{
        printf("You cannot Drive.");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 13) {
        printf("You are a child.\n");
    }
    else if (age < 20) {
        printf("You are a teenager.\n");
    }
    else if (age < 60) {
        printf("You are an adult.\n");
    }
    else {
        printf("You are a senior citizen.\n");
    }

    return 0;
}

-------------------TERNARY OPERATORS-------------

  #include<stdio.h>

  int main(){
    int a = 345;
    int b = 645;
    a>b?printf("a is greater.."):printf("b is greater");
    return 0;
  }

----------SWITCH CASE CONTROL-----------------

#include<stdio.h>

int main(){
    int a;
    printf("Enter A: ");
    scanf("%d", &a);
    switch(a){
        case 1:
        printf("You entered 1\n");
        break;

        case 2:
        printf("You entered 2\n");
        break;

        case 3:
        printf("You entered 3\n");
        break;

        case 4:
        printf("You entered 4\n");
        break;

        default:
        printf("Nothing Matched");
    }

    return 0;
}

-------------

#include<stdio.h>

int main(){
    int a = 10;
    if(a == 11)
    printf("I am 11");

    else
    printf("I am not 11");
    return 0;
}

#include<stdio.h>

int main(){
    int marks1, marks2, marks3;
    printf("Enter Your Maths Marks: ");
    scanf("%d", &marks1);

    printf("Enter Your Physics Marks: ");
    scanf("%d", &marks2);

    printf("Enter Your Chemistry Marks: ");
    scanf("%d", &marks3);

    printf("Your Marks in Maths, Physics & Chemistry is %d, %d, %d\n", marks1, marks2, marks3);

    if (marks1 < 33 || marks2 < 33 || marks3 < 33)
    {
        printf("You are failed because of low marks in indivisual subject.");
    }

    else if((marks1 + marks2 + marks3)/3 < 40)
    {
        printf("You are failed due to low percentage.");
    }

    else{
        printf("Congrats! You are passed.");
    }

    return 0;
}

#include<stdio.h>

int main(){
    int year;
    printf("Enter Year: ");
    scanf("%d", &year);

    if(year%4==0 && year%100!=0 || year%400==0)
    {
        printf("This is Leap Year");
    }

    else{
        printf("This is not Leap Year");
    }
    return 0;
}

----------------- USING FOR & WHILE LOOPS -------------------

#include<stdio.h>

int main()
{
    int i = 1;
    while (i<11)
    {
        printf("%d. Happy Birthday!\n", i);

         i = i + 1;
    }

    // i++;

    return 0;
}

------------- INCREAMENT AND DECREAMENT OPERATORS --------------

#include<stdio.h>
int main()
{
    int i = 5;

    i = i + 5;
    printf("The Value of i is %d\n", i);

    i++;
    printf("The Value of i is %d\n", i);

    printf("The Value of i is %d\n", ++i); //First Increament i & Then Print i(Pre Increament Operator)
    printf("The Value of i is %d\n", i++); //First Print i & Then Increament i(Post Increament Operator)
    printf("The Value of i is %d\n", i);

    return 0;
}

------------ DO-WHILE LOOP -------------------

#include<stdio.h>
int main()
{
    int i=5;
    do{
        printf("Value of i is %d\n", i);
        i++;
    }while(i<4);
    return 0;
}

#include<stdio.h>

int main(){
    int i = 1, n;
    printf("Enter Number: ");
    scanf("%d", &n);

   do
   {
    printf("%d\n", i);
    i++;
   } while (i<=n);

    return 0;
}

-------------- Solving Same Problem using while Loop ------------------
#include<stdio.h>

int main(){
    int n, i = 1;

    printf("Enter Number: ");
    scanf("%d", &n);
    while (i<=n)
    {
       printf("%d\n", i);
       i++;
    }

    return 0;
}

------------------For Loop ------------------

#include<stdio.h>

int main(){

    int i;
    for(i=1; i<4; i++){
        printf("%d\n", i);
    }
    return 0;
}

         QUICK QUIZ

#include<stdio.h>

int main(){
    int i, n=8;
for(i=1; i<=n; i++)
printf("%d\n", i);
    return 0;
}

-------------DECREMENTING FOR LOOP ------------------------

#include<stdio.h>

int main(){
    int n = 2, i;
    for(i = 7; i>=n ; i--){
        printf("%d\n", i);
    }
    return 0;
}

#include<stdio.h>

int main(){
    for(int i=5; i; i--){
        printf("%d", i);
    }
    return 0;
}

<--------------- Break Statement in C------------------------>

#include<stdio.h>

int main(){
    int n = 10;
  for(int i = 0; i < n; i++)
  {

      printf("i is %d\n", i);
      if (i==5)
      {
          break;
      }
  }

    return 0;
}

<--------------Continue Statement in C------------->
#include<stdio.h>

int main(){
    for(int i = 0; i<10; i++){
        if (i==5)
        {
            continue;
        }

        printf("i is %d\n", i);
    }
    return 0;
}

<-------------- Practice Set Chapter 4 ---------------->

Q1. Write multiplication of Given Number n;

#include<stdio.h>

int main(){
    int n, i, table;
    printf("Enter a Number: ");
    scanf("%d", &n);

    for(i=1; i<=10; i++){
        table = n*i;

        printf("%d X %d = %d\n", n, i, table);
    }
    return 0;
}

Q2. Write Multiplication table of 10 in reverse order

#include<stdio.h>

int main(){
    int n, i, table;

    printf("Enter a Number: ");
    scanf("%d", &n);

    for(i=10; i>=1; i--){
        table = n*i;
        printf("%d X %d = %d\n", n, i, table);
    }
    return 0;
}

Q5. Write a program to sum first ten natural numbers using while loop.

#include<stdio.h>

int main(){
    int i=1, sum=0;

while (i<=10)
{
   sum+=i;
    i++;
}

printf("Sum of first 10 natural numbers is: %d", sum);

    return 0;
}

Q6. Write a Program to implement program 5 using 'for' and do-while' loop.

a. Using do-while Loop..

#include <stdio.h>

int main()
{
    int i = 1, sum = 0;

    do
    {
        sum += i;
        i++;
    } while (i <= 10);

    printf("Sum of first 10 natural numbers is: %d", sum);

    return 0;
}

b. Using for loop...

#include<stdio.h>

int main(){
    int i, sum=0;

    for(i=1; i<=5; i++){
        sum+=i;
    }

    printf("Sum of First 5 Numbers is: %d", sum);
    return 0;
}

Q7. Write a program to calculate the sum of the numbers occuring the multiplication table of 8. (consider 8 X 1 to 8 X 10).

#include<stdio.h>

int main(){
    int n, table, i, sum=0;
    printf("Enter a Number: ");
    scanf("%d", &n);

    for(i=1; i<=10; i++){
        table = n*i;
        sum += table;
    }
    printf("Sum of the table of %d is: %d", n, sum);
    return 0;
}

 Q8. Write a program to calculate the factorial of a given number using for loop.

#include<stdio.h>

int main(){
    int n, fact = 1;

    printf("Enter a Number: ");
    scanf("%d", &n);

    if(n==0){
        printf("Factorial of %d is: %d", n, fact);
    }
    else{
    for(int i=1; i<=n; i++){
        fact *= i;
    }

    printf("Factorial of %d is: %d", n, fact);
}
    return 0;
}

Q9. Repeat 8 using while loop.

#include<stdio.h>

int main(){
    int n, fact = 1, i=1;
    printf("Enter a Number: ");
    scanf("%d", &n);
    while(i<=n){
        fact *= i;
        i++;
    }
    printf("Factorial of %d is: %d", n, fact);
    return 0;
}

Q10. Write a Program to check wether a given number is Prime or not using for loop.

#include <stdio.h>

int main()
{
    int n, isprime = 1;
    printf("Enter a Number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Given Number is not Prime.");
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isprime = 0;
                break;
            }
        }

        if (isprime == 0)
        {
            printf("Given Number is not Prime.");
        }
        else
        {
            printf("Given Number is Prime");
        }
    }
    return 0;
}

<-------------- Syntax to Write Function --------------------->

#include<stdio.h>
// int sum(int, int); // Not Necessary to wrirte

int sum(int x, int y){
printf("The sum is %d\n", x+y);
}

int main(){
    int a = 4;
    int b = 6;
    sum(a,b);
    int a1 = 7;
    int b1 = 5;
sum(a1,b1);
    int a2 = 8;
    int b2 = 92;
sum(a2,b2);
    return 0;
}

 <-----------------  Quick Quiz  ------------------------->

1. Good Morning Function Which print "Good Morning", "Good AfterNoon", "Good Evening".

#include<stdio.h>

void good_morning();
void good_afternoon();
void good_evening();

void good_morning(){
    printf("good morning\n");
}
void good_afternoon(){
    printf("good afternoon\n");
}
void good_evening(){
    printf("good evening\n");
}
int main(){
    good_morning();
    good_afternoon();
    good_evening();
    return 0;
}

<----------------  Calculating Factorial Using Recursion  ------------------>

#include<stdio.h>
int factorial(int n){
    if(n==0 || n==1){  // Base Condition
        return 1;
    }
    else{
    return factorial(n-1)*n;
    }
}

int main(){
    int a = 6;
    printf("Factorial of %d is %d", a, factorial(a));
    return 0;
}

<---------------- Practice Set 5 ------------------------------>

Q1. Write a Program using function to find average of three nimbers.

#include<stdio.h>
float average(int a, int b, int c){
    return (a+b+c)/3.0;
}
int main(){
    int x = 5, y = 5, c = 6;
    printf("Average of %d, %d and %d is: %.2f", x, y, c, average(x,y,c));
    return 0;
}

Q2. Write a function to convert Celcius temperature into Fahrenheit.

#include<stdio.h>
float convert(float a){
    return (a*1.8)+32.0;
}
int main(){
    float x;
    printf("Enter Celcius Value: ");
    scanf("%f", &x);
    printf("%.2f Celcius will be %.2f Fahrenheit.", x, convert(x));
    return 0;
}

Q3. Write a function to calculate force of attraction on a body of mass'm' exerted by earth. Consider g = 9.8m/s^2.

#include<stdio.h>

float force(float m){
return m*9.8;
}
int main(){
    int a;
    printf("Enter mass of a body: ");
    scanf("%d", &a);

    printf("Force of attraction will be %.2f", force(a));
    return 0;
}

Q4. Write a program using recursion to calculate n^th element of Fibonacci series.

#include<stdio.h>
int fibo(int n){
    if(n==1 || n==2){
        return n-1;
    }
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int a;
    printf("Enter a Number: ");
    scanf("%d", &a);
    printf("The %d^th term in Fibonacci Series is %d", a, fibo(a));
    return 0;
}

Q5. What will the following line produce in C program:

int a = 4;
    printf("%d %d %d", a, ++a, a++);

#include<stdio.h>

int main(){
    int a = 4;
    printf("%d %d %d", a, ++a, a++);
    return 0;
}

Q6. Write a recursive function to calculate the sum of first 'n' natural numbers.

#include<stdio.h>

int sum_natural(int n){
    if(n==1){
        return 1;
    }

    return sum_natural(n-1)+n;
}

int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    printf("Sum of First %d Natural number is: %d", n, sum_natural(n));
    return 0;
}

Q7. Write a program using function to print * pattern (till n lines).

#include<stdio.h>
int main(){
    int n, i, j;
    printf("Enter Number of terms: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        for(j=0; j<2*i+1; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

   <------------------ POINTERS ---------------------->

#include<stdio.h>
int main(){
    int i = 5;
int j = 6;
int k = 6;
printf("The address of i is: %u\n", &i);
printf("The address of j is: %u\n", &j);
    return 0;
}

#include<stdio.h>

int main(){
    int a = 6;
    int *b = &a;
    printf("%p", b);
    return 0;
}

<-------------------- A Program to Demonstrate Pointers --------------------------->

#include<stdio.h>

int main(){
    int i = 8;
    int *j;
    j = &i;
    printf("add i = %u\n",  &i);
    printf("add i = %u\n", j);
    printf("add j = %u\n", &j);
    printf("value i = %d\n", i);
    printf("value i = %d\n", *(&i));
    printf("value i = %d\n", *j);
    return 0;
}

<----------------- Changing Variable value by Call by Reference ----------------->

#include<stdio.h>
int sum(int* a, int* b){
    *a = 7;
return *a+*b;
}

int main(){
    int x = 2, y = 3;
    printf("The sum of 2 & 3 is %d\n", sum(&x, &y));
    printf("The value of x is %d", x);
    return 0;
}

<----------------- Swapping two variables values using function ----------------->

#include<stdio.h>

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 6;
    int y = 7;
    swap(&x, &y);

    printf("x is %d and value is %d", x, y);
    return 0;
}

<-------------------------- PRACTICE SET - 6 -------------------------------->

Q1. Write a Program to print the address of a variable and use this address to get the value of the variable

#include<stdio.h>

int main(){
    int x = 5;
    int *ptr = &x;
    printf("The address of x is %u\n", &x);
    printf("The address of x is %u\n", *ptr);
    return 0;
}

Q2. Write a program having a variable 'i'. Print the address of 'i'. Pass the variable to a function and print its address. Are these address same? Why?

#include<stdio.h>

int address(int *ptr){
    printf("Value of ptr is %d\n", ptr);
    printf("Value at ptr is %d\n", *ptr);
    return 5;
}

int main(){
    int i = 8;
    int *ptr = &i;
    printf("Address of i is %u\n", &i);
    address(ptr);
    return 0;
}

Q3. Write a program to change the value of a variable to ten times of its current value.

#include<stdio.h>
void multiply(int* a){
    *a = *a*10;
}
int main(){
    int x = 10;
    printf("Value of x is %d\n", x);
    multiply(&x);
    printf("Value of x is %d\n", x);
    return 0;
}

Q5. Write a program using function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().

#include<stdio.h>

int* sum(int a, int b){
    int s = a+b;
    int *ptr = &s;
    printf("sum is %d\n", s);
    return ptr;
}

float* average(int a, int b){
    float avg = (a+b)/2.0;
    float *ptr = &avg;
    printf("The average is %.2f\n", avg);
    return ptr;
}
int main(){
    int x = 5, y = 7;
    int *ptr1;
    float *ptr2;

    ptr1 = sum(x,y);
    ptr2 = average(x,y);
    printf("The address of sum is %u and of average is %u", ptr1, ptr2);
    return 0;
}

<---------------------------CHAPTER - 7 ---------------------------------->
<----------------------------- ARRAYS ------------------------------------>

<------------- Taking array input from user ------------------->

#include<stdio.h>
int main(){
    int marks[5];
    printf("Enter marks of 5 students: ");
    for(int i = 0; i<5; i++){
        scanf("%d", &marks[i]);
    }

    for(int i = 0; i<5; i++){
        printf("Marks at index %d is %d\n", i, marks[i]);
    }
    return 0;
}

<----------------------------POINTER ARITHMETIC -------------------------->

#include<stdio.h>
int main(){
int a = 5;
int *ptr = &a;
printf("The address of a is %u\n", &a);
printf("The address of a is %u\n", ptr);
ptr++;
printf("The value of a is %u\n", ptr);

    char a = 'A';
    char *ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    ptr++;
    printf("The value of a is %u\n", ptr);
    return 0;
}

#include<stdio.h>

int main(){
    int arr[5];
    printf("Enter marks of 5 students: ");
    for(int i = 0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    for(int j=0; j<5; j++){
        printf("The address of index %d is %u\n", j, &arr[j]);
    }

    return 0;
}

#include<stdio.h>

int main(){
    int marks[] = {12, 23,45, 56};
    int *ptr = &marks[0];
    for(int i=0; i<4; i++){
printf("The marks at index %d is %d\n", i, marks[i]);
        printf("The marks at index %d is %d\n", i, *ptr);
        ptr++;
    }
    return 0;
}

Q. Take a 2-D array as a input from user and print that array

#include<stdio.h>

int main(){
    int arr[3][2];

    for (int i = 0; i < 3; i++)
    {
        for(int j=0; j<2; j++){
            printf("Enter the value of arr[%d][%d]\n", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i<3; i++){
        for(int j=0; j<2; j++){
            printf("The value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
        }
    }
    return 0;
}

<------------------- CHAPTER - 7 PRACTICE SET ----------------->

Q1. Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array.

#include<stdio.h>

int main(){
    int a[] = {1,2,34,5,6,7,8,9,10};
    int *ptr = a;

    printf("The value at address %u is %d", ptr+3, *(ptr+3));
    return 0;
}

Q2. Write a program to create an array of 10 integers and store multiplication table of 5 in it.

#include<stdio.h>

int main(){
    int arr[10];

    for(int i=0; i<10; i++){
        arr[i]=5*(i+1);
    }

    for(int i = 0; i<10; i++){
        printf("The value of 5 X %d is %d\n", i+1, arr[i]);
    }
    return 0;
}

Q3. Repeat problem 2 for general input provided by the user using scanf.

#include<stdio.h>

int main(){
    int n, arr[10];
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 0; i<10; i++){
        arr[i] = n*(i+1);
    }

    for(int i = 0; i<10; i++){
        printf("The value of %d X %d is %d\n", n, i+1, arr[i]);
    }
    return 0;
}

Q4. Write a program containing a function which reverse the array passed to it.

#include<stdio.h>
void printArray(int a[], int n){
for(int i = 0; i<n; i++){
    printf("%d ", a[i]);
}
printf("\n");
}

Method 1 to reverse
void reverse(int a[], int n){
    for(int i=n-1; i>=0; i--){
        printf("%d ", a[i]);
    }
    printf("\n");
}

Method 2 to reverse

void reverse(int a[], int n){
    int temp;
    for(int i = 0; i<n/2; i++){
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    printArray(arr, 6);
    reverse(arr, 6);
    printArray(arr, 6);
    return 0;
}

Q5. Write a program containing functions which counts the number of postive integers in array.

#include<stdio.h>
int count(int a[], int n){
    int count = 0;
    for(int i = 0; i<n; i++){
        if(a[i]>0){
            count++;
        }
    }
   return count;
}
int main(){
    int arr[5] = {-1,-2,-3,4,5};
    printf("Total positive Integers are %d", count(arr, 5));
    return 0;
}

Q6. Create an array 3x10 containing multiplication tables of the numbers 2, 7 and 9 respectively.

#include<stdio.h>

int main(){
    int arr[3][10];
    int multi[] = {2,7,9};

    for(int i = 0; i<3; i++){
        for(int j = 0; j<10; j++){
            arr[i][j] = multi[i]*(j+1);
        }
    }

    for(int i = 0; i<3; i++){
        for(int j = 0; j<10; j++){
            printf("The value if arr[%d][%d] is %d\n", i, j, arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

Q7. Repeat problem 6 for a custom input given by user.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n][10];
    int multi[n];

    for(int i=0; i<n; i++){
        printf("Enter %d element: ", i+1);
        scanf("%d", &multi[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<10; j++){
            arr[i][j] = multi[i]*(j+1);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<10; j++){
            printf("The value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

Create a three-dimensional array and print the address of its elements in increasing order.

#include <stdio.h>

int main()
{
    int arr[2][3][4];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("%u ", &arr[i][j][k]);
            }
        }
    }

    return 0;
}


<------------------- CHPATER - 8 STRING -------------------->

#include<stdio.h>

int main(){
    char st[] = {'A', 'P', 'P', 'L', 'E'};
    char st[] = "APPLE";
    for(int i=0; i<5; i++){
        printf("%c\n", st[i]);
    }

    printf("%s", st);
    return 0;
}

Taking string as input from user using scanf

#include<stdio.h>

int main(){
    int st[4];
    printf("Enter a name: ");
    scanf("%s", st);

   printf("%s", st);
    return 0;
}


Taking multi-line string input from user using gets() and puts()

#include<stdio.h>

int main(){
    char st[30];
    printf("Enter a string: ");
    gets(st);
    puts(st);  //Automatically adds new line 
    printf("Hello World");
    return 0;
}


String Length(strlen) and String copy to Target(strcpy)

#include<stdio.h>
#include<string.h>

int main(){
    char st[] = "Hello World";
    printf("%d", strlen(st));

    char target[30];

    strcpy(target, st); // Copy source in target

    printf("%s %s", st, target);
    return 0;
}


Adding two Strings (strcat)

#include<stdio.h>
#include<string.h>

int main(){
    char s1[] = "Hello ";
    char s2[] = "World ";
    char s3[] = "Guys";

    strcat(s1, s2); // Add s1 and s2 and store result in s1

    printf("%s", s1);
    return 0;
}


<----------------- CHAPTER - 8  PRACTICE SET ----------------------->


Q1. Write a program to take string as an input from user using %c and %s confirm that the strings are equal


#include<stdio.h>

int main(){
    char st[6];

    // scanf("%s", st);

    for(int i=0; i<5; i++){
        scanf("%c", &st[i]);
        fflush(stdin);
    }
    st[6] = '\0';
    printf("%s", st);
    return 0;
}


Q2. Write your  own version of strlen function from <string.h>

#include<stdio.h>

int strlen(char st[]){
    int i = 0, count;
    char c = st[i];

    while(c!='\0'){
        c = st[i];
        i++;
    }
    count = i-1;
return count;
}

int main(){
    char st[] = "Hello World";
    printf("%d", strlen(st));
    return 0;
}


Q3. Write a function slice() to slice a string. It should change the original string such that it is now the sliced string. take 'm' and 'n' as the start and ending position of slice.

#include<stdio.h>
char* slice(char str[], int m, int n){
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];

    str = ptr1;
    str[n] = '\0';
    return str;
}
int main(){
    
    char str[] = "Hello World";

    printf("%s", slice(str, 1, 7));
    return 0;
}


