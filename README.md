# EECS349
Computer Security HW2 Part 1

1. **Programming**

    My program (PE-Import.c) works as instructed. It checks the root directory to see
    if a file named PE-1.txt exists. If it does, it checks if one of the lines in the
    file is "I want to learn PE file format!". If this is true, it prints out the content
    of the file. If this is false, it appends "I want to learn PE file format!" to the file.
    If PE-1.txt doesn't exist in the root directory, my program creates it and writes
    "I want to learn PE file format!" in the file.

    To run, you will need to clone this repository. Open PE-Import.c with Dev-C++ as
    discussed in class. Compile (which creates the PE-Import.exe file). Then you will
    be able to run the exe file.

2. **Checking Import Table Before Packing**


    I used IDA to perform static analysis on the PE-Import.exe. I have attached screenshots
    of what I saw in the BeforePacking folder.

3. **Checking Import Table After Packing**


    I then used upx to pack PE-Import.exe. When I used IDA to perform static analysis
    on it now, I observed that there was a significant reduction of entries in the Import
    Table. You can see in the AfterPacking folder screenshots of what I observed.

4. **Checking Import Table After Unpacking**


    I then used upx to unpack PE-Import.ext. I again used IDA to perform static analysis
    and observe the Import Table. I saw that all of the imports that were originally in the
    table before packing were back again. You can see the screenshots of what I saw now
    in the AfterUnpacking folder.

5. **Producing False AntiVirus Results**


    By utilizing a technique that we discussed in class (packing), I was able to fool
    5 antivirus tools and produce a false negative as instructed in the assignment. You
    can see that in the picture under the VirusTotal folder.
