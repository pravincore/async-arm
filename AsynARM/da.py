#!/usr/bin/python
import sys

if(sys.argv[1]):
	name = sys.argv[1]
else:
	print "enter filename"
f = open(name,'r')
str = ''
count = 0

print "disassembly of the .asm file\n"
while True:
        count += 1
        l = f.read(1)
        if(l):
                s = '{:0>2}'.format(format(ord(l),'x'))
                str += ' '+s
                if(count%4 == 0 and count != 0):
                        str += '\n'
        else:
                break;
print str
nf = open(name+'.bin','w')
nf.write(str)
nf.close()
print "\nEnd"

