#include<iostream>
using namespace std;

bool palindrome(string s,int start,int end){
    if(start>=end)
        return true;

    if(s[start]!=s[end])
        return false;
    
    return palindrome(s, start+1, end-1);
}