import json
import os
from difflib import get_close_matches

#loading data from data.json file
k=open('data.json')
data = json.load(k)

# fucntion to find the word


def translate(word):
    word = word.lower()
    if word in data:
        return data[word]
    elif word.title() in data:
        return data[word.title()]
    elif word.upper() in data:
        return data[word.upper()]
    elif len(get_close_matches(word, data.keys(), cutoff=0.8)) > 0:
        yn = input("Did you mean {} instead? Enter Y if yes N if No: ".format(
            get_close_matches(word, data.keys())[0]))
        if yn.upper() == "Y":
            return data[get_close_matches(word, data.keys())[0]]
        elif yn.upper() == "N":
            return "The word dosent exist. Please double check it again"
        else:
            return "We didn't understad your query."

    else:
        return "The word dosent exit please double check again"


