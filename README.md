# Caesar-s-Cipher
This project implements a Caesar Cipher in C, where alphabetic characters from a text file are shifted by 3 positions in the alphabet. The program reads an input file (clearMessage.txt), processes each character using Caesar's Cipher, and outputs the encoded message into secretMessage.txt.

Features:
File Input: Reads characters from clearMessage.txt using fgetc().
Character Processing: Converts each ASCII character to its numeric equivalent. Only alphabetic characters (both uppercase and lowercase) are incremented by 3, while other characters (such as punctuation or spaces) remain unchanged.
File Output: Encoded message is written to secretMessage.txt.
How It Works:
Open clearMessage.txt for reading.
Process each character by applying the Caesar Cipher if it is alphabetic.
Write the encoded characters to secretMessage.txt.
Non-alphabetic characters are copied as-is without any changes.
This project serves as a basic introduction to file handling and encryption techniques in C using Caesar's Cipher.
