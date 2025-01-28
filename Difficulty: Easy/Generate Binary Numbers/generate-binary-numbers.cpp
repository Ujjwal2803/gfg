//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int n) {
    // Your code here
    queue<string>a;
    vector<string>p;
    a.push("1");
    int i=1;
    while(n--){
        string b=a.front();
        p.push_back(b);
        string c=b+'0';
        string d=b+'1';
        a.push(c);
        a.push(d);
        a.pop();
    }
    return p;
    
    
}


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> ans = generate(n);
        for (auto it : ans)
            cout << it << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends