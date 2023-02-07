import random
rock = '''
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
'''

paper = '''
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
'''

scissors = '''
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
'''

GameList=[rock,paper,scissors]
# print(GameList[0])
Cnt=int(input("What do you choose? Type 0 for Rock, 1 for Paper or 2 for Scissors."))
print(GameList[Cnt])

print("Computer chose:\n")
RandomCnt=random.randint(0,len(GameList)-1)
print(GameList[RandomCnt])

if(Cnt==RandomCnt):
    print("It's a Tie.")
elif(Cnt==0 and RandomCnt==2):
    print("You WIn!")
elif(Cnt==2 and RandomCnt==1):
    print("You Win!")
elif(Cnt==1 and RandomCnt==0):
    print("You Win!")
else:
    print("You Lose.")
