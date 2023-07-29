#include "include.h"

std::vector<char> unfoundChars; //will make sense later - easier for replacing unfound chars
std::string characterList {"aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ1234567890!#$%^&()_+/,.`~"};
std::string key;

void encodeMessage(std::string &stringToEncode){    
    
    //Lazy Programming... - key is just the characterList backwards
    for(int i{characterList.size()-1}; i >= 0; --i){
        key += characterList.at(i);
    } 

    //Encoding
    for(int i{0}; i < stringToEncode.size(); ++i){
        size_t foundCharFromStringinCharactersList = characterList.find(stringToEncode.at(i)); //finds the char from input and retrieves the index from character string
        
        if(foundCharFromStringinCharactersList == std::string::npos){
            //Handles spaces in the string - didn't include this in "characterList" so spaces in message = _ in encoded message
            unfoundChars.push_back(stringToEncode.at(i)); //keeps unfound char(s) so I can replce it once we are decoding
            stringToEncode.replace(i,1, "_"); //if a character in message isn't in the reference of characters, it will replace with an underscore
            continue;
        }
        //replaces the char at i in the message with the character in key at the found index from character list 
        stringToEncode.at(i) = key.at(foundCharFromStringinCharactersList); 
    }

    std::cout << "Encoded message: " << stringToEncode;
}



/* Decoding - simply the reverse of encoding... nothing special KISS  
*  - Starts at the back so it's faster replacing unfound chars.
*    Why? Unfound chars are in order. The way I do it avoids bitshifting the vector and causing delays with that. 
*  - I could do it another way (without vectors and just use a string) BUTTTT -_(0. 0)_- this way made more since in my head and less string 
*  - functions I needed to use
*/

void decodeMessage(std::string &stringToDecode){
    for(int i{stringToDecode.size()-1}; i >= 0; --i){  
        if(stringToDecode.at(i) == '_'){
            stringToDecode.at(i) = unfoundChars.at(unfoundChars.size()-1); //Scanning from R -> L means the next unfound char would be stored in the last index of the vector.
            unfoundChars.pop_back(); //removes the back
            
            /*Note to future-self:
            * If I scanned encoded message from L -> R I would replace it with first index of vector, the remove first index of vector thus bitshifting that'll cause delays.
            * Is it enough to gripe about? Idk tbh. Maybe?
            */
            continue;
        }

        size_t foundCharFromStringInKey = key.find(stringToDecode.at(i)); //finds the char from encoded input in the key list. returns the index of found
        
        stringToDecode.at(i) = characterList.at(foundCharFromStringInKey); //replaces 
    }

    std::cout << "\nDecoded message: " << stringToDecode;
}
