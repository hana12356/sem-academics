def fab(num):
    num=int(input("enter the num value\n"))
    u=0
    v=1
    sum=0
    if num<=0:
        print("enter the num greater than zero")
    else:
        for i in range(0,num):
            print(sum)
            u=v
            v=sum
            sum=u+v

fab(sum)
