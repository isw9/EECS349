## EECS 349 HW 3 Part 1

#Q1

For the first problem, I followed along with the tutorial in the lecture slides.
I changed one line of code in the assembly file.

`CMP EAX, EBX ` became `CMP EAX, EAX`. This forced the program to always consider
whatever input in the serial number to be correct because it was comparing EAX to itself.

I saved the new file as an executable (it is named CRACKMEIsaac.EXE).

# Q2

Here are the serial numbers for my name and the names of the TAs.

isaac -> 17709
yiming -> 17793
shifu -> 17715
yujie -> 17866

The algorithm to find these values is as follows:

First capitalize the string that is in the name field.
The add up the ascii value of each character in the name field.
Perform an XOR operation with this sum's binary representation and the binary
representation of 22136.

This will give you a binary representation of the target value (call this value target).

Now, we need to XOR target with the binary representation of 4660 in order to
find the binary representation of what the serial number needs to be.

(Note the 4660 and 22136 are hodecoded constants in the program)




Now let's run through an example for "isaac".
First capitalize the user ("isaac" becomes "ISAAC")

Ascii value of each letter:
I -> 73
S -> 83
A -> 65
A -> 65
C -> 67

Added together this gives us a value of 353.

Now we need to XOR 353's binary representation with the binary representation of 22136.

000000101100001 (353)
101011001111000 (22136)
---
101011100011001 (22297 in decimal)

Now we need to XOR 22297's binary representation with the binary representation of 4660.

101011100011001(22297)
001001000110100(4660)
---
100010100101101 (17709 in decimal)


This gives us a decimal answer of 17709. This is the serial number that is used to
crack the program when the user is "isaac".
