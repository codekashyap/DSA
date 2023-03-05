#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    void getallSubsequences(int ind,vector<int>& res, vector<int>& seq, int n){
        if (ind == n){
            for (auto i :res){
                    cout<<i<<" ";
            }if (res.size() == 0){
                cout<<"{ }";
            }cout<<endl;
            return;
        }
        getallSubsequences(ind+1,res,seq,n); // not taken
        res.push_back(seq[ind]);
        getallSubsequences(ind+1,res,seq,n); //taken
        res.pop_back();

    }
};

int main(){
    vector<int> seq = {3,1,2};
    int n = seq.size();
    vector<int> res;
    solution a;
    a.getallSubsequences(0,res,seq,n);
    
    }