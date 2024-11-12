def main():
  tasks=[]
  while True:
    print("\n***** To-Do-List *****")
    print("1. Add Task")
    print("2. Show Task")
    print("3. Mark Task as Done")
    print("4. Exit")
    choice=input("Enter your choice: ")
    if choice == '1':
      print()
      n_tasks=int(input("No of Tasks: "))
      for i in range(n_tasks):
        task = input("Enter task: ")
        tasks.append({"task":task, "done":False})
        print("Task added")
        