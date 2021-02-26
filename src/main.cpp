#include <iostream>

std::string encryptCaesar(std::string str, int value){
    char final = 'z'- value + 1;
    for(int i = 0; i < str.length(); i++){
        if(str[i] < 'a' && str[i] > 'z'){
            if(str[i] < final){
                str[i] += value;
            }else{
                str[i] = 'a' + str[i] - final;
            }
        }else{
            str = "ERROR Cipher";
        }  
    }
    return str;
}

std::string decryptCaesar(std::string str, int value){
    char start = 'a' + value - 1;
    for(int i = 0; i < str.length(); i++){
        if(str[i] < 'a' && str[i] > 'z'){
            if(str[i] > start){
                str[i] -= value;
            }else { 
                str[i] = 'z' - str[i] + start;
            }
        }else{
            str = "ERROR Decryption";
        }
    }
    return str;
} 

int main(){
    std::string strEncrypt, strDecrypt;
    int valueEncrypt, valueDecrypt;

    std::cout << "Enter the string to encode" << std::endl;
    std::cin >> strEncrypt;
    std::cout << "Enter the offset value" << std::endl;
    std::cin >> valueEncrypt;
    std::cout << "Cipher: " << encryptCaesar(strEncrypt, valueEncrypt) << std::endl;

    std::cout << "Enter the string to decrypt" << std::endl;
    std::cin >> strEncrypt;
    std::cout << "Enter the offset value" << std::endl;
    std::cin >> valueEncrypt;
    std::cout << "Decryption: " << decryptCaesar(strEncrypt, valueEncrypt) << std::endl;

    return 0;
}