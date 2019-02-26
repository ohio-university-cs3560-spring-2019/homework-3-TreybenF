#Treyben Funderburg
#Ruby substitution of characters program

txt = ARGV[0] #assign command line argument to a variable txt
sub = File.open(txt) #assign open file to another variable sub
puts sub.read.gsub(/\bf/,'gh').gsub(/sh\b/,'ti').gsub(/\Bi/B/,'o').gsub(/\bf/,'GH').gsub(/SH\b/,'TI').gsub(/\BI/B,'O')
                #substitute all requirements in the file to what they need to be changed too
