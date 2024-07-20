// all possible words from keypad
// TC: O(4^n * n)   SC: O(n)

#include<bits/stdc++.h>
using namespace std;

void possibleWordsHelper(int* a, int N,int index, vector<string>& keypad, vector<string>& res, string op){
    if(index == N){
        res.push_back(op);
        return;
    }

    string key = keypad[a[index]];

    for(int i=0;i<key.length();i++){
        string op1 = op;
        possibleWordsHelper(a,N,index+1,keypad,res,op1+=key[i]);
    }

    return;

}

vector<string> possibleWords(int a[], int N){
    vector<string> res;
    vector<string> keypad = {"","","abc","def","ghi", "jkl","mno","pqrs","tuv","wxyz"};

    int index=0;

    possibleWordsHelper(a,N,index,keypad,res,string(""));

    return res;

}

int main()
{
    int N; cin >> N; 
    
    int a[N]; 
    
    for(int i =0;i<N;i++){
        cin >> a[i]; 
    }
    
    vector <string> res = possibleWords(a,N);
    for (string i : res) cout << i << " ";
    cout << endl;

    return 0;
}

/*
3
5 8 9
jtw jtx jty jtz juw jux juy 
juz jvw jvx jvy jvz ktw ktx 
kty ktz kuw kux kuy kuz kvw 
kvx kvy kvz ltw ltx lty ltz 
luw lux luy luz lvw lvx lvy 
lvz

3
7 8 9
ptw ptx pty ptz puw pux puy 
puz pvw pvx pvy pvz qtw qtx 
qty qtz quw qux quy quz qvw 
qvx qvy qvz rtw rtx rty rtz 
ruw rux ruy ruz rvw rvx rvy 
rvz stw stx sty stz suw sux 
suy suz svw svx svy svz
 */