#include<bits/stdc++.h>
using namespace std;

void gen_bits(int len, string bits){
    if(len == 0){
        cout<< bits<<endl;
        return;
    } 
    gen_bits(len-1,bits+"0");
    gen_bits(len-1,bits+"1");
} 

int main() {
    int n;
    cin >> n;
    gen_bits(n,"");
}