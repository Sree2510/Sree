names=[]
phone_numbers=[]
emails=[]
addresss=[]
c=0
while True:
  print("\n***** Contact Book *****")
  print("1. Add contact")
  print("2. Show contact")
  print("3. Search contact")
  print("4. Update contact")
  print("5. Delete contact")
  print("6. Exit")
  choice=int(input("Enter your choice: "))
  if choice == 1:
    k=int(input("No of contacts to add: "))
    for i in range(k):
      print()
      name=input("Name: ")
      phone_number=input("Phone number: ")
      email=input("Enter your email: ")
      address=input("Enter your address: ")
      names.append(name)
      phone_numbers.append(phone_number)
      emails.append(email)
      addresss.append(address)
    c=c+k
  elif choice == 2:
    if c>0:
      for i in range(c):
        print(f"\nName: {names[i]}\nPhone number: {phone_numbers[i]}\nMail ID: {emails[i]}\nAddress: {addresss[i]}")
    else:
      print("\nContact book is empty")
  elif choice == 3:
    if c>0:
      running=True
      while running:
        s=input("Enter name to search: ")
        if s in names:
          index=names.index(s)
          name=names[index]
          phone_number=phone_numbers[index]
          email=emails[index]
          address=addresss[index]
          print(f"\nName: {name}\nPhone Number: {phone_number}\nMail ID: {email}\naddress: {address}\n")
          if input("Search another contact(y/n):").lower()=='n':
            running=False
        else:
          print("\nContact not found!\n")
          if input("Search another contact(y/n):").lower()=='n':
            running=False
    else:
      print("\nContact book is empty!")
  elif choice == 4:
    if c>0:
      print()
      s=input("Enter contact name to Update: ")
      if s in names:
        index=names.index(s)
        name=names[index]
        phone_number=phone_numbers[index]
        email=emails[index]
        address=addresss[index]
        print(f"\nName: {name}\nPhone Number: {phone_number}\nMail ID: {email}\naddress: {address}\n")
        if input("Do you want to update (y/n): ").lower()=='y':
          running= True
          while running:
            print("\n1.Name\n2.Phone number\n3.email\n4.Address\n")
            option=int(input("Enter Your choice: "))
            if option==1:
              print()
              new_name=input("New Name: ")
              names[index]=new_name
              print("\nContact Updated!\n")
              if input("Update same contact(y/n): ").lower()=='n':
                running=False
            elif option==2:
              print()
              new_number=input("New number: ")
              phone_numbers[index]=new_number
              print("\nContact Updated!\n")
              print()
              if input("Update same contact(y/n): ").lower()=='n':
                running=False
            elif option==3:
              print()
              new_mail=input("New Email: ")
              emails[index]=new_mail
              print("\nContact Updated!\n")
              print()
              if input("Update same contact(y/n): ").lower()=='n':
                running=False
            elif option==4:
              print()
              new_address=input("New Address: ")
              addresss[index]=new_address
              print("\nContact Updated!\n")
              if input("Update same contact(y/n): ").lower()=='n':
                running=False
            else:
              print("\ninvalid. please select any of the below options")
              print("1.Name\n2.Phone number\n3.email\n4.Address\n")
        else:
          print("\nGetting back to Top")
      else:
        print("\nContact not found!")
    else:
      print("\nContact book is empty!")
  elif choice == 5:
    if c>0:
      print()
      if input("Delete all contact (y/n): ").lower()=='n':
        running=True
        while running:
          print()
          d=input("Enter name to delete: ")

          if d in names:
            index=names.index(d)
            names.pop(index)
            phone_numbers.pop(index)
            emails.pop(index)
            addresss.pop(index)
            print("\nContact successfully removed\n")
            c-=1
            if input("Delete another Contact(y/n): ").lower()=='n':
              running=False
          else:
            print("\nName not found!\n")
            if input("get back to Main (y/n): ").lower()=='y':
              running=False
      else:
        names.clear()
        phone_numbers.clear()
        print("\nDeleted all contacts")
        c=0
    else:
      print("\nContact book is empty!")
  elif choice == 6:
    print()
    print("***Closing Contact book***")
    break
  else:
    print("\nInvalid option. Try again.")
