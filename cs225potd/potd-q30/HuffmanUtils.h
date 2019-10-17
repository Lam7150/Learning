#pragma once

#include <string>
#include "HuffmanNode.h"

using std::string;

string stringToBinary(string charString, HuffmanNode* huffmanTree);
string binaryToString(string binaryString, HuffmanNode* huffmanTree);
