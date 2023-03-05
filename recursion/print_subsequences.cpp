/* print all subsequences whose sum is k */ 


#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    void getallsumSubsequences(int ind,vector<int>& res, int s,int sum, vector<int>& seq, int n){
        // base condition
        if (ind == n){
            if (s==sum){
               for (auto i :res){
                    cout<<i<<" ";
                }
                cout<<endl;
                }
                return;
        }

        res.push_back(seq[ind]);
        s+= seq[ind];
        getallsumSubsequences(ind+1,res,s,sum,seq,n); //taken
        s-=seq[ind];
        res.pop_back();
        getallsumSubsequences(ind+1,res,s,sum,seq,n); // not taken


    }
};

int main(){
    vector<int> seq = {1,2,1};
    int n = seq.size();
    int sum = 2;
    int s=0;
    vector<int> res;
    solution a;
    a.getallsumSubsequences(0,res,0,sum,seq,n);
    
    }