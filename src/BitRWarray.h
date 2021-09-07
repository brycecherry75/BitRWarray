#ifndef BitRWarray_h
#define BitRWarray_h

#include <Arduino.h>

class BitRWarrayClass {
  public:
    uint8_t readChar(const char *data, uint16_t BitToRead, uint16_t ArraySize);
    void writeChar(char *data, uint16_t BitToWrite, uint8_t StateToWrite, uint16_t ArraySize);
    uint8_t readByte(const uint8_t *data, uint16_t BitToRead, uint16_t ArraySize);
    void writeByte(uint8_t *data, uint16_t BitToWrite, uint8_t StateToWrite, uint16_t ArraySize);
    uint8_t readWord(const uint16_t *data, uint16_t BitToRead, uint16_t ArraySize);
    void writeWord(uint16_t *data, uint16_t BitToWrite, uint8_t StateToWrite, uint16_t ArraySize);
    uint8_t readDword(const uint32_t *data, uint16_t BitToRead, uint16_t ArraySize);
    void writeDword(uint32_t *data, uint16_t BitToWrite, uint8_t StateToWrite, uint16_t ArraySize);
    uint8_t readQword(const uint64_t *data, uint16_t BitToRead, uint16_t ArraySize);
    void writeQword(uint64_t *data, uint16_t BitToWrite, uint8_t StateToWrite, uint16_t ArraySize);
};

extern BitRWarrayClass BitRWarray;

#endif