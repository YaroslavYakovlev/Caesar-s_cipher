#include <iostream>
#include <clocale>

std::string encryptCaesar(std::string str, int value){
    char final = 'z'- value + 1;
    for(int i = 0; i < str.length(); i++){
        if(str[i] < final){
            str[i] += value;
        }else{
            str[i] = 'a' + str[i] - final;
        }  
    }
    return str;
}

std::string decryptCaesar(std::string str, int value){
    char start = 'a' + value - 1;
    for(int i = 0; i < str.length(); i++){
        if(str[i] > start){
            str[i] -= value;
        }else { 
            str[i] = 'z' - str[i] + start;
        }
    }
    return str;
} 

int main(){
    setlocale(LC_ALL,"Russian");
    std::string strEncrypt, strDecrypt;
    int valueEncrypt, valueDecrypt;

    std::cout << "Enter the string to encode" << std::endl;
    std::cin >> strEncrypt;
    std::cout << "Enter the offset value" << std::endl;
    std::cin >> valueEncrypt;

    std::cout << encryptCaesar(strEncrypt, valueEncrypt) << std::endl;

    std::cout << "Enter the string to decrypt" << std::endl;
    std::cin >> strEncrypt;
    std::cout << "Enter the offset value" << std::endl;
    std::cin >> valueEncrypt;
    std::cout << decryptCaesar(strEncrypt, valueEncrypt) << std::endl;

    return 0;
}