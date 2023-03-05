/* print any sunsequences whose sum is k */

/* print all subsequences whose sum is k */ 


#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    bool getanysumSubsequences(int ind,vector<int>& res, int s,int sum, vector<int>& seq, int n){
        // base condition
        if (ind == n){
            // condition satisfied
            if (s==sum){
               for (auto i :res){
                    cout<<i<<" ";
                }
                return true;
            }
            else return false;

        }

        res.push_back(seq[ind]);
        s+= seq[ind];
        if (getanysumSubsequences(ind+1,res,s,sum,seq,n) == true){ return true;} //taken
        s-=seq[ind];
        res.pop_back();
        if (getanysumSubsequences(ind+1,res,s,sum,seq,n) == true){ return true;} // not taken

        return false;

    }
};

int main(){
    vector<int> seq = {1,2,1};
    int n = seq.size();
    int sum = 2;
    int s=0;
    vector<int> res;
    solution a;
    a.getanysumSubsequences(0,res,0,sum,seq,n);
    
    }