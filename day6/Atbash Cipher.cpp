//https://binarysearch.com/room/Array-of-Sunshine-Dgq6O8JTQr?questionsetIndex=2
//Atbash Cipher


string solve(string text) {
    const int letterCount = 'z' - 'a' + 1 ;
    for(auto& letter: text){
        if(!std::isalpha(letter)){ 
        continue;
        }
        const bool isUpper = std::isupper(letter);
        const char baseOffset = isUpper? 'A': 'a';
        const auto distanceFromAlphabetStart = letter - baseOffset;
        letter = (baseOffset + letterCount - 1) - distanceFromAlphabetStart;
    }
    return text;
}