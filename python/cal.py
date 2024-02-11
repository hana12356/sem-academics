def calculator():
    try:
        num1 = float(input("Enter the first number: "))
        num2 = float(input("Enter the second number: "))
        operation = input("Choose operation (+, -, *, /): ")

        if operation == '+':
            result = num1 + num2
        elif operation == '-':
            result = num1 - num2
        elif operation == '*':
            result = num1 * num2
        elif operation == '/':
            result = num1 / num2
        else:
            print("Invalid operation. Please choose +, -, *, or /.")
            return

        print(f"Result: {result}")

    except ValueError:
        print("Invalid input. Please enter valid numbers.")

# Run the calculator function
calculator()