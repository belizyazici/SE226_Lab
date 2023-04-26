#question-1
def common_elements(list1, list2):
    elements = []
    for i in list1:
        if i in list2:
            elements.append(i)
    return elements


list1 = [1, 2, 3, 4, 5]
list2 = [5, 6, 7, 8, 9]

print(common_elements(list1, list2))

list1 = [1, 2, 3, 4, 5]
list2 = [10, 20, 30, 40, 50]
print(common_elements(list1, list2))


#question-2
def pal_strings(s):
    palindromes = []
    for string in s:
        if string == string[::-1]:
            palindromes.append(string)

    return palindromes


s = ["eye", "may", "yes"]
print(pal_strings(s))


#question-3
def prime(integer_list):
    prime = [True] * len(integer_list)

    for i in range(len(integer_list)):
        if prime[i]:
            for j in range(i + integer_list[i], len(integer_list), integer_list[i]):
                prime[j] = False

    result = [integer_list[i] for i in range(len(integer_list)) if prime[i]]
    return result


integer_list = [1, 2, 3, 4, 5, 6, 7, 8, 9]
primes = prime((integer_list))
print(prime(primes))


#question-4
def anagrams(word, word_list):
    sorting = sorted(word.lower().replace("", ""))
    result = []
    for w in word_list:
        sortstr = sorted(w.lower().replace("", ""))
        if sortstr == sorting:
            result.append(w)
    return result


word = "listen"
words = ["enlists", "google", "inlets", "banana"]
result = anagrams(word, words)
print(result)


