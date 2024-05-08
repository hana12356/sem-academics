def prime():
    num=int(input("enter the num value\n"))
    if num==1 or num==0:
       print("plz enter the num greater than zero")
    elif num%2==0:
       print(num,"is not prime number")
    else:
       print(num,"is a prime number")
prime()
