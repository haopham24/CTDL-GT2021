#include <bits/stdc++.h>
using namespace std;

long long stn(string s){
    long long n = 0, m = 0;
    for(long long i = s.size()-1; i >= 0; i--){
        n = n + ((s[i]-'0') * pow(10,m));
        m++;
    }
    return n;
 
}

main(){
    
    string s1, s2;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++){
    	if (s1[i] == '6') s1[i] = '5';
	}
	for (int i = 0; i < s2.size(); i++){
		if (s2[i] == '6') s2[i] = '5';
	}
	cout << stn(s1) + stn(s2) << " ";
	for (int i = 0; i < s1.size(); i++){
		if(s1[i] == '5') s1[i] = '6';
	}
	for (int i = 0; i < s2.size(); i++){
		if (s2[i] == '5') s2[i] = '6';
	}
	cout << stn(s1) + stn(s2);
   
    return 0;
}

