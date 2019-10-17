#include "HuffmanUtils.h"
#include <string>
#include "HuffmanNode.h"

using std::string;

/**
 * binaryToString
 *
 * Write a function that takes in the root to a huffman tree
 * and a binary string.
 *
 * Remember 0s in the string mean left and 1s mean right.
 */

string binaryToString(string binaryString, HuffmanNode* huffmanTree) {
  HuffmanNode* root = huffmanTree;
  HuffmanNode* current = root;
  std::string decoded;

  for (int i = 0; i < binaryString.length(); i++) {
    if (binaryString[i] == '0') {
      std::cout << "right" << endl;

      current = current->right_;
    } else {
      std::cout << "left" << endl;
      current = current->left_;
    }

    std::cout << i << endl;

    if (current->right_ == NULL && current->left_ == NULL) {
      decoded.push_back(current->char_);
      std::cout << current->char_ << endl;

      current = root;
    }

    std::cout << "end" << endl;
  }

  return decoded;
}

/**
 * stringToBinary
 *
 * Write a function that takes in the root to a huffman tree
 * and a character string. Return the binary representation of the string
 * using the huffman tree.
 *
 * Remember 0s in the binary string mean left and 1s mean right
 */

string stringToBinary(string charString, HuffmanNode* huffmanTree) {
  /* TODO: Your code here */
  return "";
}
