import random

options= ("rock","paper","scissors")
running= True

print("Let's Play")
user=0
comp=0
while running:
  player=None
  computer=random.choice(options)
  player= input("\nEnter a choice{rock, paper, scissors}: ")

  while player not in options:
    print("\nPlease select the given options!")
    player= input("\nEnter a choice{rock, paper, scissors}: ")

  print(f"\nplayer: {player}")
  print(f"\ncomputer: {computer}")

  if player == computer:
    print("\nIt is a Tie!")
    print("\nUser\t\t\t\tComputer")
    print(f"{user}\t\t\t\t{comp}\n")
  elif player=="rock" and computer=="scissors":
    print("\nYou win!")
    user+=1
    print("\nUser\t\t\t\tComputer")
    print(f"{user}\t\t\t\t{comp}\n")
  elif player=="paper" and computer=="rock":
    print("\nYou win!")
    user+=1
    print("\nUser\t\t\t\tComputer")
    print(f"{user}\t\t\t\t{comp}\n")
  elif player=="scissors" and computer=="paper":
    print("\nYou win!")
    user+=1
    print("\nUser\t\t\t\tComputer")
    print(f"{user}\t\t\t\t{comp}\n")
  else:
    print("\nYou lose!")
    comp+=1
    print("\nUser\t\t\t\tComputer")
    print(f"{user}\t\t\t\t{comp}\n")
  if not input("play again(y/n):").lower()=='y':
    running=False
print("\nThanks for playing!")