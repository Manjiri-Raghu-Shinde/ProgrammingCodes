print('''
*******************************************************************************
          |                   |                  |                     |
 _________|________________.=""_;=.______________|_____________________|_______
|                   |  ,-"_,=""     `"=.|                  |
|___________________|__"=._o`"-._        `"=.______________|___________________
          |                `"=._o`"=._      _`"=._                     |
 _________|_____________________:=._o "=._."_.-="'"=.__________________|_______
|                   |    __.--" , ; `"=._o." ,-"""-._ ".   |
|___________________|_._"  ,. .` ` `` ,  `"-._"-._   ". '__|___________________
          |           |o`"=._` , "` `; .". ,  "-._"-._; ;              |
 _________|___________| ;`-.o`"=._; ." ` '`."\` . "-._ /_______________|_______
|                   | |o;    `"-.o`"=._``  '` " ,__.--o;   |
|___________________|_| ;     (#) `-.o `"=.`_.--"_o.-; ;___|___________________
____/______/______/___|o;._    "      `".o|o_.--"    ;o;____/______/______/____
/______/______/______/_"=._o--._        ; | ;        ; ;/______/______/______/_
____/______/______/______/__"=._o--._   ;o|o;     _._;o;____/______/______/____
/______/______/______/______/____"=._o._; | ;_.--"o.--"_/______/______/______/_
____/______/______/______/______/_____"=.o|o_.--""___/______/______/______/____
/______/______/______/______/______/______/______/______/______/______/_____ /
*******************************************************************************
''')
print("Welcome to Treasure Island.")
print("Your mission is to find the treasure.") 
Directtion=input("Yor're at a cross road. Where do you want to go? Type 'left' or 'right'.")
if(Directtion=="left"):
    Action=input("You came at a lake. There is an island in the middle of the lake. Type 'wait' to wait for a boat. Type 'swim' to swin across.")
    if(Action=="wait"):
        Door=input("You arrive at the island unharmed. There is a house with 3 door. One red, one yellow and one blue. Which colour do you choose?")
        if(Door=="red"):
            print("Burned by fire.\nGAME OVER!!")
        elif(Door=="yellow"):
            print("You Win!!")
        elif(Door=="blue"):
            print("Eaten by beasts.\nGAME OVER!!")
        else:
            print("GAME OVER!")
    else:
        print("Attacked by trout.\nGAME OVER!!")
else:
    print("Fall into a hole.\nGAME OVER!")