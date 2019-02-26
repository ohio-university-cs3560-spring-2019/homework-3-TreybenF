#Treyben Funderburg
#Txt file counter program

import sys
for lines in sys.stdin:
    counter = lines.split()
print ("Lines: ", counter[0]) #print number of lines in txt file
print ("Words: ", counter[1]) #print number of words in txt file
print ("Characters: ", counter[2]) #print number of char's in txt file
