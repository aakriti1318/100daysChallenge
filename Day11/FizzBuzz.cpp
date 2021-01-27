//https://binarysearch.com/room/Hash-Brown-Map-b8B8dpfsyY
//FizzBuzz

vector<string> solve(int n) {
    vector<string> v;
    for(int i=1;i<=n;i++){
        if(i%3==0 and i%5!=0){
            v.push_back("Fizz");
        }
        else if(i%3!=0 and i%5==0){
            v.push_back("Buzz");
        }
        else if(i%3==0 and i%5==0){
            v.push_back("FizzBuzz");
        }
        else{
            string a = to_string(i);
            v.push_back(a);
        }
    }
    return v;
}