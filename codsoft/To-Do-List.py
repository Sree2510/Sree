def main():
  tasks=[]
  while True:
    print("\n***** To-Do-List *****")
    print("1. Add Task")
    print("2. Show Task")
    print("3. Mark Task as Done")
    print("4. Exit")
    choice=input("Enter choice: ")
    if choice == '1':
      print()
      n_tasks=int(input("No of Tasks: "))
      for i in range(n_tasks):
        task = input("Task Name: ")
        tasks.append({"task":task, "done":False})
        print("Task added")
    elif choice == '2':
      print("\nTasks:")
      for index, task in enumerate(tasks):
        status = "Done" if task["done"] else "Not Done"
        print(f"{index+1}. {task['task']}-{status}")
    elif choice =='3':
      task_index=int(input("Task number:"))
      if task_index <=len(tasks):
        tasks[task_index-1]["done"]=True
        print("Task marked as done!")
      else:
        print("Invalid task number.")
    elif choice == '4':
      print("Exiting the To-Do List.")
      break
    else:
      print("Invalid. Try again.")
if __name__=="__main__":
  main()