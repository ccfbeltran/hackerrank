def countOccurrences(str, word):
 
    wordslist = list(str.split())
    return wordslist.count(word)

def minion_game(string):
    #Get a list of list with index and letter
    list_organizer= list(enumerate(string))

    list_index_vowels=[]
    list_index_consonants=[]
    print(list_organizer)
    max_len_string= len(string)

#all possible words we have to use
    list_possible_word_vowels=[]
    list_possible_word_consonants=[]

    for it in list_organizer:
        if it[1] in  "AEIOU":
            list_index_vowels.append(it[0])
        elif it[1] not in "AEIOU":
            list_index_consonants.append(it[0])

    print(list_index_consonants)
    print(list_index_vowels)

    for beggin in list_index_consonants:
        for end in range(beggin+1, max_len_string+1):
            list_possible_word_consonants.append(string[beggin:end])
    #remove duplicate things of all the possible words
    list_possible_word_consonants=list(dict.fromkeys(list_possible_word_consonants))
    print(list_possible_word_consonants)

    for beggin in list_index_vowels:
        for end in range(beggin+1, max_len_string+1):
            list_possible_word_vowels.append(string[beggin:end])

    list_possible_word_vowels=list(dict.fromkeys(list_possible_word_vowels))
    print(list_possible_word_vowels)

if __name__ == '__main__':
    #s = input()
    s="BANANA"
    minion_game(s)