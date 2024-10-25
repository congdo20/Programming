#include <stack>
#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <string.h>

std::string reverseString(std::string s)
{
    std::string res;
    std::stack<char> st;
    for (int i = 0; i < s.length(); i++){
        st.push(s[i]);
    }
    while(st.empty() == false){
        res = res + st.top();
        st.pop();
    }
    return res;
}

std::string stackBin(int n)
{
    std::string s;
    std::stack<char> st;
    int thuong = 0, sodu = 0;
    do {
    	thuong = n / 2;
    	sodu = n % 2;
    	st.push(sodu);
    	n = thuong;
    } while(n > 0);

    while(!st.empty()) {
    	s = s + std::to_string(st.top());
    	st.pop();
    }
    return s;
}


int main(int argc, char * argv[]) {
	std::string a = "Hello";
	std::cout << reverseString(a) << std::endl;
	
	std::cout << stackBin(105) << std::endl;

	return 0;
}