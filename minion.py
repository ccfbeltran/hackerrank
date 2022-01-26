
def minion_game(string):
    stuar_points_consonant=0
    kevin_points_vowels=0
   
    for it in range(len(string)):
        if string[it] in "AEIOU":
           kevin_points_vowels+=  len(string)-it
        else:
            stuar_points_consonant+= len(string)-it
        
        
        
           
        
        
    if kevin_points_vowels< stuar_points_consonant:
        print("Stuart " + str(stuar_points_consonant))
    elif stuar_points_consonant< kevin_points_vowels:
        print("Kevin " + str(kevin_points_vowels))
    elif stuar_points_consonant== kevin_points_vowels:
        print("Draw")    
    else: 
        print("Draw")    
    
   
if __name__ == '__main__':
    s = input()
    minion_game(s)