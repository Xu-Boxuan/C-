#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

//392.еп╤овспРап
class Solution {
public:
	bool isSubsequence(string s, string t) {
		int i = 0, j = 0;
		while (i < s.length() && j < t.length()){
			if (s[i] == t[j]){
				i++;
				j++;
			}
			else{
				j++;
			}
		}
		if (i < s.length()){
			return false;
		}
		return true;
	}
};

int main(){
	return 0;
}