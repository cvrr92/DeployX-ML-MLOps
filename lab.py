# a = int(input("Enter a Number: "))
# b = int(input("Enter another Number: "))

# print("Sum is: ", a+b)
# print("Subtraction is: ", a-b)
# print("Multiplication is: ", a*b)
# print("Division is: ", a/b)
# print(a//b)
# print(a**b)
# print(a%b)


# Q1. Student total and Average marks

# sub1 = int(input("Enter Subject 1 Marks: "))
# sub2 = int(input("Enter Subject 2 Marks: "))
# sub3 = int(input("Enter Subject 3 Marks: "))


# print("Total Marks are ", sub1+sub2+sub3)
# print("Average Marks are ", (sub1+sub2+sub3)/3)


# Q2. Simple Interest Calculator

# principal = int(input("Enter Principal Amount: "))
# Rate = int(input("Enter Rate of Interest: "))
# Time = int(input("Enter Time(In Years): "))

# SI = (principal*Rate*Time)/100

# print("Simple Interest Amount is ", SI)


# Q3. Area of a Rectangle

# length = int(input("Enter the Length: "))
# breadth = int(input("Enter the Breadth: "))

# Area = length*breadth

# print("Area of Rectangle is ", Area)


# Q4. Employee Salary Calculation

# basic = int(input("Enter Basic Salary: "))

# gross_HRA = basic*(10/100)
# gross_DA = basic*(5/100)

# gross = basic+gross_HRA+gross_DA

# print("Gross Salary is ", gross)


# Q5. Temprature Conversion

# celcius = int(input("Enter Celcius: "))

# fahrenheite = celcius*(9/5) + 32

# print("Tempreture in Fahrenheit is ", fahrenheite)


# Q6. Bill Amount Calculation

# item1 = int(input("Enter Price of Item 1: "))
# item2 = int(input("Enter Price of Item 2: "))

# gst = (item1+item2)*(18/100)

# print("Total Amount is ",item1+item2+gst)


# Q7. Square and Cube of a Number

# num = int(input("Enter a Number: "))

# square = num**2
# cube = num**3

# print("Square is ", square)
# print("Cube is ", cube)


# Q8. Convert Minutes to Hours

# minutes = int(input("Enter Minutes: "))

# hours = minutes/60

# print("Hours is ", hours)


# Q9. Average of Two Numbers

# num1 = int(input("Enter First Number: "))
# num2 = int(input("Enter Second Number: "))

# avg = (num1+num2)/2

# print("Average is ", avg)


# Q10. Currency Conversion

# inr = int(input("Enter Amount in INR: "))

# usd = inr/83

# print("USD amount is ", usd)


# Q. Swapping Two Numbers

# a = 3
# b = 5

# a = a+b
# b = a-b
# a = a-b

# print(a, b)


# Q11. Circle Area and Circumference

# radius = float(input("Enter Radius of Circle: "))

# area = 3.14*radius**2
# circumference = 2*3.14*radius

# print("Area is ", area)
# print("Circumference is ", circumference)



# Q12. Total Working Hours

# hour = int(input("Enter Hours: "))
# minutes = int(input("Enter Minutes: "))

# total_hours = hour+(minutes/60)

# print("Total working Hours is ", total_hours)


#Q13.Convert Days into Years

# day = int(input("Enter Number of days: "))

# years = day/365

# print("Total Number of Years is  ", years)


#<------------- HARD LEVEL ------------------>

# Q1. Net Salary with multiple Allowances and Deductions

# basic_salary = float(input("Enter Basic Salary: "))

# total_salary = basic_salary+basic_salary*(20/100) + basic_salary*(10/100)-basic_salary*(12/100)

# print("Net Salary is ", total_salary)


#Q2. Average Speed of a Journey

# distance1, distance2 = map(float, input("Enter Distance 1 and Distance 2: ").split())

# time1, time2 = map(int, input("Enter Time 1 and time 2: ").split())

# avg_distance = (distance1+distance2)/2
# avg_time = (time1+time2)/2

# Average_Speed = avg_distance/avg_time

# print("The average speed is ", Average_Speed)


# Q3. Time Conversion(Seconds to Hours, Minutes, Seconds)

# seconds = int(input("Enter Seconds: "))

# hours = seconds//3600
# minutes = (seconds%3600)//60
# seconds = minutes%60

# print("Total Hours, Minutes and Seconds are", hours, minutes, seconds, sep=" ")


#Q4. Calculate Final Amount with Compound Interest

# principal = float(input("Enter Principal Amount: "))

# rate = float(input("Enter Rate of Interest: "))

# time = int(input("Enter Time: "))

# compound_interest = principal*(1+(rate/100))**time

# print("Final Amount is ", principal+compound_interest)


# Q5. Convert Total Marks into Percentage and CGPA

# sub1, sub2, sub3, sub4, sub5 = map(int, input("Enter Marks of 5 subjects: ").split())

# percentage = (sub1+sub2+sub3+sub4+sub5)*(100/500)

# CGPA = percentage/9.5

# print("Percentage is ", percentage, end=" ")
# print("CGPA is ", CGPA)


#Q6. Maximum and Minimum of Three Numbers(Without Conditionals)

# num1, num2, num3 = map(int, input("Enter Three Numbers: ").split())

# maximum = max(num1, num2, num3)
# minimum = min(num1, num2, num3)

# print("Maximum Number is ", maximum)
# print("Minimum Number is ", minimum)


#Q7. Distance between Two Points

# x1, x2 = map(int, input("Enter x1 and x2: ").split())
# y1, y2 = map(int, input("Enter y1 and y2: ").split())

# print("Distance between x1 and x2 is ", abs(x2-x1))
# print("Distance between x1 and x2 is ", abs(y2-y1))


#Q8. Break Amount in Currency Notes

# amount = int(input("Enter Amount: "))
# notes = amount//100
# remain = amount%100

# print("Total Notes are ", notes)
# print("Total Remaining Amount is ", remain)


# <------------- MEDIUM LEVEL ----------------->

# Q1. Check Eligibility for Scholarship

# marks = int(input("Enter Your Marks: "))
# Family_Income = int(input("Enter Family Income: "))

# if(marks>=75 and Family_Income<=250000):
#     print("Eligible")
# else:
#     print("Not Eligible")


# Q2. Electricity Bill Using  Slab Rates 

# unit = int(input("Enter Unit: "))

# if(unit <= 100):
#     print("Total Bill is Rs", unit*2)

# elif(unit >= 100 and unit <= 200):
#     print("Total Bill is Rs", (100*2)+(unit-100)*3)

# else:
#     print("Total Bill is Rs", (100*2)+(100*3)+(unit-200)*5)


# Q3. Check Triangle Validity

# a,b,c = map(int, input("Enter Sides of the Triangle: ").split())

# if(a+b>c and b+c>a and c+a>b):
#     print("Valid Triangle")
# else:
#     print("Not Valid Triangle")


#Q4. Character Classification

# ch = input("Enter Anything: ")

# if(ch>='A' and ch<='Z'):
#     print("Upper Letter")

# elif(ch>='a' and ch<='z'):
#     print("Lower Letter")

# elif(ch>='0' and ch<='9'):
#     print("Digit")

# else:
#     print("Special Character")


#Q5. Calculate Bonus for an Employee

# salary = float(input("Enter Salary: "))
# service = int(input("Enter Years of service: "))

# if(service>=10):
#     print("Total Bonus: ", salary*(10/100))

# elif(service>=5):
#     print("Total Bonus: ", salary*(7/100))

# else:
#     print("Total Bonus: ", salary*(5/100))


#Q6. ATM Withdwawal Validation

# balance = int(input("Enter Account balance: "))
# amount = int(input("Enter Withdrawal Amount: "))

# if(amount%100==0 and amount<=balance):
#     print("Transaction Successful")

# else:
#     print("Transaction Failed")


#Q7. Determine Exam Result with Grace Marks

# marks = int(input("Enter Marks: "))
# if(marks>=40):
#     print("Pass")

# elif(marks>=35 and marks<40):
#     print("Pass with Grace Marks")

# else:
#     print("Fail")


# Q8. Find Middle Value of Three Numbers

# a,b,c = map(int, input("Enter Three Numbers: ").split())
# if(a>=b and a<=c) or (a<=b and a>=c):
#     print("Middle Number is ", a)

# elif(b>=a and b<=c) or (b<=a and b>=c):
#     print("Middle Number is ", b)

# else:
#     print("Middle Number is ", c)


#Q9. Insurance Premium Category

# age = int(input("Enter Your age: "))

# if(age<25):
#     print("High Premium")

# elif(age>=25 and age<=50):
#     print("Medium Premium")

# else:
#     print("Low Premium")


#Q10. Check Login Credential

# username = input("Enter User Name: ")
# password = input("Enter Password: ")

# if(username == "admin" and password == "python123"):
#     print("Login Successful")

# else:
#     print("Invalid Credential")



# <--------------- HARD LEVEL ------------------>


# Q1. Income Tax Calculation

# income = int(input("Enter Annual Income: "))

# if(income<=250000):
#     print("No Tax")

# elif(income>250000 and income<=500000):
#     print("Tax Amount is", income*(5/100))

# elif(income>500000 and income<=1000000):
#     print("Tax Amount is", income*(20/100))

# else:
#     print("Tax Amount is", income*(30/100))


# Q2. Grade with Distinction and Re-Exam

# marks = int(input("Enter Marks: "))

# if(marks>=85):
#     print("Distinction")

# elif(marks<85 and marks>=60):
#     print("First class")

# elif(marks<60 and marks>=50):
#     print("Second Class")

# elif(marks<50 and marks>=40):
#     print("Pass")

# elif(marks<40 and marks>=35):
#     print("Re-Exam")

# else:
#     print("Fail")


# Q3. ATM Transaction with Charges

# balance = int(input("Enter Account Balance: "))
# amount = int(input("Enter Withdrawal Amount: "))

# if(amount%100 == 0 and amount+50 <= balance):
#     print("Transaction Successful and remaining balance is", balance-(amount+50))

# else:
#     print("Transaction Failed")


#Q4. Electricity Bill with Fixed Charges

# unit = int(input("Enter Units consumed: "))

# if(unit<=100):
#     print("Total Bill Amount is", unit*1.5)

# elif(unit<=200):
#     print("Total Bill Amount is", (100*1.5)+(unit-100)*2.5)

# else:
#     print("Total Bill Amount is", (100*1.5)+(100*2.5)+(unit-200)*4)


# Q5. Loan Eligibility Check

# age = int(input("Entre Age:  "))
# income = int(input("Enter Monthly Income: "))
# Credit_Score = int(input("Enter Credit Score: "))

# if(age>=21 and age<=60 and income>=30000 and Credit_Score>=700):
#     print("Loan Approved")

# else:
#     print("Loan Rejected")


# Q6. Mobile Data Plan Selection

# usage = float(input("Enter Daily data usage: "))

# if(usage<=1.5):
#     print("Basic Plan")

# elif(usage>1.5 and usage<=3):
#     print("Standard Plan")

# elif(usage>3 and usage<=5):
#     print("Premium Plan")

# else:
#     print("Unlimited Plan")


# Q7. Validate Date

# day = int(input("Enter Day: "))
# Month = int(input("Enter Month: "))
# Year = int(input("Enter Year: "))

# if(Year>0 and day<32 and Month>0 and Month<13):
#     if(Month==2 and day<=28):
#      print("Valid Date")

#       elif(Month in (1,3,4,5,6,12) and day<=31):
#        print("Valid Date")

#       elif(Month in (4,6,9,11) and day<=30):
#         print("Valid Date")
#       else:
#        print("Invalid")