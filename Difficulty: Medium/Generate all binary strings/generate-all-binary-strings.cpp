//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    // void f(int ind,vector<string>& ans,string &s,int num){
    //     if(ind==num){
    //         ans.push_back(s);
    //     }
    //     // if((s.size()>0 && s.back()!='1')||(s.size()==0)){
    //     //     f(ind+1,ans,s+'1'+num);
    //     // }
    //     if(s.empty() || (s.size()>0 && s.back()!='1')){  
    //         f(ind + 1, ans, s + '1', num);
    //     }
    //     f(ind + 1, ans, s + '0', num);
    // }
     void f(int ind, vector<string>& ans, string s, int num){
        if(ind == num){
            ans.push_back(s);
            return;
        }
        if(s.empty() || (s.size()>0 && s.back()!='1')){  
            f(ind + 1, ans, s + '1', num); // Correct string concatenation
        }
        f(ind + 1, ans, s + '0', num);
    }
    vector<string> generateBinaryStrings(int num){
        //Write your code
        vector<string>ans;
        string s="";
        f(0,ans,s,num);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        
        vector<string> v = obj.generateBinaryStrings(n);
        for(auto it:v) cout<<it<<" ";
        cout << endl;
    
cout << "~" << "\n";
}

    return 0;
}

// } Driver Code Ends