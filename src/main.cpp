#include <iostream>
#include <clocale>

std::string encryptCaesar(std::string str, int value){
    for(int i = 0; i < str.length(); i++){
        str[i] += value;
    }
    return str;
}

std::string decryptCaesar(std::string str, int value){
    for(int i = 0; i < str.length(); i++){
        str[i] -= value;
    }
    return str;
} 

int main(){
    std::string strEncrypt, strDecrypt;
    int valueEncrypt, valueDecrypt;
    std::cin >> strEncrypt;
    std::cin >> valueEncrypt;
    std::cout << encryptCaesar(strEncrypt, valueEncrypt) << std::endl;

    std::cin >> strEncrypt;
    std::cin >> valueEncrypt;
    std::cout << decryptCaesar(strEncrypt, valueEncrypt) << std::endl;



    return 0;
}