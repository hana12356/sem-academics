def leap():
    year=int(input("enter the year\n"))
    if year%4==0 and year%100!=0 or year%400==0:
       print(year,"is a leap year")
    else:
       print("its not a leap year")
leap()