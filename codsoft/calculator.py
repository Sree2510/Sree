def add(a,b):
  c=a+b
  return c
def sub(a,b):
  c=a-b
  return c
def mul(a,b):
  c=a*b
  return c
def div(a,b):
  c=a/b
  return c
running=True
while running:
  print("***Simple Calculator***")
  print("1. Addition")
  print("2. Subtraction")
  print("3. Multiplication")
  print("4. Division")
  print("5. Exit")
  choice=int(input("Enter your choice: "))
  if choice==1:
    a=int(input("Enter first number: "))
    b=int(input("Enter second number: "))
    print(f"result: {add(a,b)}")
    if input("perform another operation(y/n): ").lower()=='n':
      running=False
  elif choice==2:
    a=int(input("Enter first number: "))
    b=int(input("Enter second number: "))
    print(f"result: {sub(a,b)}")
    if input("perform another operation(y/n): ").lower()=='n':
      running=False
  elif choice==3:
    a=int(input("Enter first number: "))
    b=int(input("Enter second number: "))
    print(f"result: {mul(a,b)}")
    if input("perform another operation(y/n): ").lower()=='n':
      running=False
  elif choice==4:
    a=int(input("Enter first number: "))
    b=int(input("Enter second number: "))
    if b==0:
      print("math error, zero cannot be divided!")
    else:
      print(f"result: {div(a,b)}")
      if input("perform another operation(y/n): ").lower()=='n':
        running=False
  elif choice==5:
    print("Existing Calculator!")
    running=False
  else:
    print("Invalid input, Try again")
      