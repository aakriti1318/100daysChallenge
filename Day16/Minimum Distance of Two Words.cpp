//https://binarysearch.com/room/the-bro-grammers-dmeGv17gUN
//Minimum Distance of Two Words in a Sentence

int solve(string text, string w0, string w1) {
    if(w0 == w1) return 0;
    vector<string> words;
    istringstream ss(text);
    string word;
    while(ss>> word) words.push_back(word);
    for(int i=0;i<words.size();i++){
        if(w0!=words[i] and w1!=words[i]){
            return -1;
        }
    }
    int minn = words.size()+1;
    int pre = 0, i=0;
    for(int i=0;i<words.size();i++){
        if(words[i] == w0 or words[i] == w1){
            pre = i;
            break;
        }
    }

    while(i<words.size()){
        if(words[i] == w0 or words[i] == w1){
            if((words[pre]!=words[i]) and (i-pre)<minn){
                minn = i-pre-1;
                pre = i;
            }
            else pre = i;
        }
        i++;
    }
    return minn;
}