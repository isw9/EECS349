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


#2
