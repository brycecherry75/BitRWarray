#BitRWarray Library#

BitRWarray extends bitRead/bitWrite operations in any multiple of 8/16/32/64 bit values combined in an array.

Revisions:
1.0.0	First release

## Usage

BitRWarray.read(Char/Byte/Word/Dword/Qword)(*data, BitToRead, ArraySize) - returns HIGH or LOW from *data array

BitRWarray.write(Char/Byte/Word/Dword/Qword)(*data, BitToWrite, StateToWrite, ArraySize) - changes a bit in *data array

In many programming lanugages, data_source elements start at 0 from the left and additionally in many component datasheets, MSB to LSB is read from left to right.

ArraySize must not exceed the size of the array being used and BitTo(Read/Write) must not exceed 65535.

Quad word (uint64_t/long long) is currently untested and requires compiler support inclduing bitshift operations.