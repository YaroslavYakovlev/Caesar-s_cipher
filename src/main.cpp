#include <iostream>

std::string encryptCaesar(std::string str, int value){
  int newchar;
  for (int i = 0; i < str.length(); ++i) {
    switch (str[i]) {
      case 65 ... 90:
        if ((str[i] - 'A' + value) >= 0)
          newchar = (str[i] - 'A' + value) % 26 + 'A';
        else
          newchar = (str[i] - 'A' + value) % 26 + 'Z' + 1;
        break;
      case 97 ... 122:
        if ((str[i] - 'a' + value) >= 0)
          newchar = (str[i] - 'a' + value) % 26 + 'a';
        else
          newchar = (str[i] - 'a' + value) % 26 + 'z' + 1;
        break;
      default:
        newchar = str[i];
    }
    str[i] = newchar;
  }
  return str;
}

std::string decryptCaesar(std::string str, int value){
    return (encryptCaesar(str, -value));
} 

int main(){
    std::string string;
    int value;

    std::cout << "Enter the string to encode" << std::endl;
    std::cin >> string;
    std::cout << "Enter the offset value" << std::endl;
    std::cin >> value;
    std::cout << "Cipher: " << encryptCaesar(string, value) << std::endl;

    std::cout << "Enter the string to decrypt" << std::endl;
    std::cin >> string;
    std::cout << "Enter the offset value" << std::endl;
    std::cin >> value;
    std::cout << "Decryption: " << decryptCaesar(string, value) << std::endl;

    return 0;
}