EECS 349
HW 2 Part 3

***#1***

Starting from the main method (assuming esp is 0 to start)

Move 3 to ptr[esp + 1ch] (1ch is 28 in decimal)

Move 5 to ptr[esp + 18h] (18h is 24 in decimal)

Move 0 to ptr[esp + 14h] (14h is 20 in decimal)


At this point, ptr[28] = 3, ptr[24] = 5, and ptr[20] = 0

move ptr[28] (3) to the extended register (eax)

Multiply ptr[24] (5) by the value in eax (3) and store the result in eax(15)


Move the value in eax (15) to edx.


Move ptr[28] (3) to eax.

Move eax (3) to ecx


Shift all the bits in ecx (3) to the right 31 times

This produces a value of 0 because the value in ecx was positive

(learned that here: https://stackoverflow.com/questions/40638335/why-does-the-compiler-generate-a-right-shift-by-31-bits-when-dividing-by-2)


Add ecx (0) to eax (3).


Shift all the bits in eax (3) to the right 1 time. 3 / 1 rounds to 1 in assembly (I think but am not 100% sure so the rest of this solution is based on that assumption)


Subtract eax (1) from edx (15) and store it in edx (14)


Move edx (14) to ptr[20]

Move ptr[20] (14) to eax

Move eax (14) to ptr[4]


print 14


See numberOne.c for code


***#2***

Starting from the main method (assuming esp is 0 to start)

Move 0c (12) to ptr[esp + 18h] (18 is 24 in decimal )

Move 0f (15) to ptr[esp + 1ch] (1c is 28 in decimal)

Move 0dd (221) to ptr[esp + 20h] (20 is 32 in decimal)

Move 3 to ptr[esp + 24h] (24 is 36 in decimal)

Move 1B0 (432) to ptr[esp + 28h] (28 is 40 in decimal)

Move 36h (54 in decimal) to ptr[esp + 2ch] (2c is 44 in decimal)

Move 10h (16 in decimal) to ptr[esp + 30h] (30 is 48 in decimal)

Move 43h (43 is 67 in decimal) to ptr[esp + 34h] (34 is 52 in decimal)

Move 0 to ptr[esp + 3ch] (3c is 60 in decimal)

Move 0 to ptr[esp + 38h] (38 is 56 in decimal)

Jump to loc_40157F

In loc_40157F:
Compare 7 to ptr[56] (which is 0)

If 0 is less than or equal to 7, jump to loc_401560

In loc_401560:
Move ptr[56] (0) to eax

Move ptr[(0 * 4) + 24] (3) to eax

Compare ptr[60] (0) to 3

If 3 less than or equal to 0, jump to loc_40157A

It's not, so move ptr[56] (0) to eax

Move ptr[(0*4)+24] (12) to eax

Move eax (12) to ptr[60] (ptr[60] is now 12)

Now add 1 to ptr[56] (which is now 1)

Compare 7 to ptr[56] (which is 1)

If 1 is less than or equal to 7, jump to loc_401560

In loc_401560:
move ptr[56] (1) to eax

Move ptr[(1 * 4) + 24] (15) to eax

Compare ptr[60] (1) to 15

1 < 15 so jump to loc_40157A

In loc_40157A:
Add 1 to ptr[56] (which is now 2)


At this point, I can tell what the program is doing. The program initializes
an array of integers. It then goes through the first 8 entries in the array and compares
that integer at the ith location to the integer in the last location (which is used to keep track
of the largest integer seen so far). This program prints out the largest value in an array.

The output for this program is 432 which is printed.

See numberTwo.c for the c code.


***#3***

Starting from the main method (assuming esp is 0 to start)

Move 64h (100 in decimal) to ptr[esp + 1ch] (1c is 28 in decimal)

Jump to loc_4015D6

In loc_4015D6:

Compare 3e7 (999 in decimal) to ptr[28] (which is 100)

If 100 is less than or equal to 999, jump to loc_40151B (this is true)

In loc_40151B:

Move ptr[28] (100) to ecx

Move 51EB851F (1374389535 in decimal) to edx

Move ecx (100) to eax

Multiply edx (1374389535) by 100 and store the result in edx (edx is now 137438953500)

Shift edx to the right by 5 bits, which is the same as dividing by 32 in assembly
(learned that from this source https://en.wikibooks.org/wiki/X86_Assembly/Shift_and_Rotate)

Move ecx (100) to eax

Shift the bits of eax to the right by 31, which produces a value of 0 because eax was positive

subtract eax from edx and store the result in edx (edx is 137438953500 / 32)

Move edx to eax

Move eax (137438953500 / 32) to ptr[24]

Move ptr[24] (137438953500 / 32) to eax

Multiple eax (137438953500 / 32) by -64h (-100 in decimal) and store the result in edx

Move ptr[28] (100) to eax

Places the memory address address of eax + edx into ecx (I honestly have no idea what this really means)

Move  66666667 (1717986919 in decimal) to edx

Move ecx to eax

Multiply edx by the memory address of eax + edx and store the result in edx

Shift edx to the right by 2 bits (edx = edx / 4)

Move ecx to eax

Shift eax to the right by 31 bits (produces a value of 0 as eax is positive)

edx = edx - eax

Move edx to eax

Move eax to ptr[20] (value is now 1717986919 / 4)

Move ptr[28] (100) to ecx

Move 66666667 (1717986919 in decimal) to edx

Move ecx to eax

Multiply edx by 100 and store the result to edx (edx is now 171798691900)

Shift the bits of edx to the right by 2 (edx is now 171798691900 / 4)

Move ecx to eax

Shift the bits of eax to the right 31 times (produces a value of 0 as eax is positive)

edx = edx - eax

Move edx to eax

Shift the bits of eax to the left by 2 (eax is now eax * 4)

Add edx to eax and store the result in eax

Add eax to eax and store the value in eax

ecx = ecx - eax

Move ecx to eax

Move eax to ptr[16]

Move ptr[24] to eax

Multiply eax by ptr[24] and store the result in eax

Multiply eax by ptr[24] and store the result in eax

(The last three lines combined are equivalent to cubing a number)

Move eax to edx

Move ptr[20] (1717986919 / 4) to eax

Multiply ptr[20] (1717986919 / 4) by eax and store the value in eax

Multiply ptr[20] (1717986919 / 4) by eax and store the value in eax

(The last three lines combined are equivalent to cubing a number)

Add eax to edx and store the value in edx (this adds together the 2 numbers we just cubed)

Move ptr[16] to eax

Multiply ptr[16] by eax and store the value in eax

Multiply ptr[16] by eax and store the value in eax

(The last three lines combined are equivalent to cubing a number)

Add edx to eax and store the result in eax

Compare ptr[28] to eax

If eax != ptr[28], jump to loc_4015D1

In loc_4015D1:

Add 1 to ptr[20] (is now 101)



At this point, we have gone through the entire loop once. Some of the details are
a little fuzzy to me, but at a high level, what this program does is have a loop
from i = 100 to 999. Inside each iteration of the loop it initializes a variable
to 1374389535. We take this value and square it, then divide by 32. We then subtract off
0 or 1 based off of if i is positive or negative.  We then multiply this value by -100.

We then initialize a new variable with the value 1717986919 and divide it by 4, multiply by 100,
then divide by 4.

We then cube the first variable, cube the second variable, and cube i. We then add those 3 numbers together. If that sum is equal to x, we print the value of x. Otherwise we increment i. I know that
the inside of my loop probably has some errors as there were some assembly instructions I didn't
fully understand but hope my explanation of what I did understand makes sense and you are able to see
my thought process and work as I worked through a single iteration of the loop above. I don't have a
final answer for this problem but have my work showing my thought process.

See See numberThree.c for my attempt at the c code.
