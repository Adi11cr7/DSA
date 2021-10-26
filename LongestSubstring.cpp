#include<iostream>
#include<vector>

using namespace std;

int longest_substr(string str){
    int l1 = 0, l2 = 0, r=0, ans = 0;
    int str_len = str.size();
    
    while(str[l2] == str[l1] && l2<str_len) l2+=1;
    r = l2;

    while(r<str_len) {
        if(str[r] == str[l1] || str[r] == str[l2]){ ans = max(ans, r-l1+1); r+=1; }
        
        else {
            l1 = l2;
            while(str[l2] == str[l1] && l2<str_len) l2+=1;
            r = l2;
        }
        //ans = max(ans, r-l1);

    }
    return ans;
}


int main() {
    string str;
    
    cout<<"Enter string \n";
    cin>>str;

    cout<<"longest substring size = "<<longest_substr(str);

    return 0;
}