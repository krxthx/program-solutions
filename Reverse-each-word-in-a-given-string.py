# Reverse each word in a given string 
# GFG
# Given a String. Reverse each word in it where the words are separated by dots.

class Solution:
    def reverseWords(self, s):
        string = s.split(".")
        newString = ''
        for word in string:
            newString += word[::-1] + '.'
            continue
        return newString[:len(newString)-1]
