#include <iostream>

std::string encryptCaesar(std::string str, int value){
    for(int i = 0; i < str.length(); i++){
        // if(str[i] < 'a' && str[i] > 'z'){
            if ((str[i] += value) > 'z') str[i] -= 'z'-'a';
        // }else{
        //     str = "ERROR Cipher";
        // }  
    }
    return str;
}

std::string decryptCaesar(std::string str, int value){
    for(int i = 0; i < str.length(); i++){
        // if(str[i] < 'a' && str[i] > 'z'){
            if ((str[i] -= value) < 'a') str[i] += 'z'-'a';
        // }else{
        //     str = "ERROR Decryption";
        // }
    }
    return str;
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