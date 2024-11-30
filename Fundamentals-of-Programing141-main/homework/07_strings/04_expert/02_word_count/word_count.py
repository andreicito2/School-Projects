"""
Expert Problem:  Create functions to compute and display summary statistics
                 about the number of words per sentence in a given string.

File Name: word_count.py
Name:      ?
Course:    CPTR 141
"""
import re
# Your code goes here
def get_statistics(string):
    snetences = re.split('[.!?]', string)
    snetences.remove('')
    num = len(snetences)
    lengths = []
    for i in range(num): #function for min 
        sentence = snetences[i].split()
        lengths.append(len(sentence))
    
    minz = min(lengths)
    maxz = max(lengths)
    avgz = (sum(lengths))/num
            
    return num, minz, maxz, avgz





def get_table(num1, min1, max1, avg1):
    header = '+--------------------------------+'
    min_low = '+-------------------------+------+'
    header_text = f"Summary for {num1:.0f} Sentences"
    min_1 = f'{min1:.1f}'
    max_1 = f'{max1:.1f}'
    avg_1 = f'{avg1:.1f}'

    table = f"{header}\n|{header_text:^32}|\n{min_low}\n| Minimum Sentence Length |{min_1:>5} |\n| Maximum Sentence Length |{max_1:>5} |\n| Average Sentence Length |{avg_1:>5} |\n{min_low}\n"
    return table