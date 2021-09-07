#include "BitRWarray.h"

BitRWarrayClass BitRWarray;

uint8_t BitRWarrayClass::readChar(const char *data, uint16_t BitToRead, uint16_t ArraySize) {
  if (BitToRead <= ((ArraySize * 8) - 1)) {
    return bitRead(data[(ArraySize - 1 - (BitToRead / 8))], (BitToRead % 8));
  }
  else {
    return LOW;
  }
}

void BitRWarrayClass::writeChar(char *data, uint16_t BitToWrite, uint8_t StateToWrite, uint16_t ArraySize) {
  if (BitToWrite <= ((ArraySize * 8) - 1)) {
    bitWrite(data[(ArraySize - 1 - (BitToWrite / 8))], (BitToWrite % 8), StateToWrite);
  }
}

uint8_t BitRWarrayClass::readByte(const uint8_t *data, uint16_t BitToRead, uint16_t ArraySize) {
  if (BitToRead <= ((ArraySize * 8) - 1)) {
    return bitRead(data[(ArraySize - 1 - (BitToRead / 8))], (BitToRead % 8));
  }
  else {
    return LOW;
  }
}

void BitRWarrayClass::writeByte(uint8_t *data, uint16_t BitToWrite, uint8_t StateToWrite, uint16_t ArraySize) {
  if (BitToWrite <= ((ArraySize * 8) - 1)) {
    bitWrite(data[(ArraySize - 1 - (BitToWrite / 8))], (BitToWrite % 8), StateToWrite);
  }
}

uint8_t BitRWarrayClass::readWord(const uint16_t *data, uint16_t BitToRead, uint16_t ArraySize) {
  if (BitToRead <= ((ArraySize * 16) - 1)) {
    return bitRead(data[(ArraySize - 1 - (BitToRead / 16))], (BitToRead % 16));
  }
  else {
    return LOW;
  }
}

void BitRWarrayClass::writeWord(uint16_t *data, uint16_t BitToWrite, uint8_t StateToWrite, uint16_t ArraySize) {
  if (BitToWrite <= ((ArraySize * 16) - 1)) {
    bitWrite(data[(ArraySize - 1 - (BitToWrite / 16))], (BitToWrite % 16), StateToWrite);
  }
}

uint8_t BitRWarrayClass::readDword(const uint32_t *data, uint16_t BitToRead, uint16_t ArraySize) {
  if (BitToRead <= ((ArraySize * 32) - 1)) {
    return bitRead(data[(ArraySize - 1 - (BitToRead / 32))], (BitToRead % 32));
  }
  else {
    return LOW;
  }
}

void BitRWarrayClass::writeDword(uint32_t *data, uint16_t BitToWrite, uint8_t StateToWrite, uint16_t ArraySize) {
  if (BitToWrite <= ((ArraySize * 32) - 1)) {
    bitWrite(data[(ArraySize - 1 - (BitToWrite / 32))], (BitToWrite % 32), StateToWrite);
  }
}

uint8_t BitRWarrayClass::readQword(const uint64_t *data, uint16_t BitToRead, uint16_t ArraySize) {
  if (BitToRead <= ((ArraySize * 64) - 1)) {
    return bitRead(data[(ArraySize - 1 - (BitToRead / 64))], (BitToRead % 64));
  }
  else {
    return LOW;
  }
}

void BitRWarrayClass::writeQword(uint64_t *data, uint16_t BitToWrite, uint8_t StateToWrite, uint16_t ArraySize) {
  if (BitToWrite <= ((ArraySize * 64) - 1)) {
    bitWrite(data[(ArraySize - 1 - (BitToWrite / 64))], (BitToWrite % 64), StateToWrite);
  }
}