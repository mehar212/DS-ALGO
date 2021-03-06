// Given a number n the task is to complete the function which returns an integer denoting the smallest number evenly divisible by each number from 1 to n.

// Input:
// The first line of input contains an integer T denoting the no of test cases then T test cases follow. Each line contains an integer N.

// Output:
// For each test case output will be in new line denoting the smallest number evenly divisible by each number from 1 to n.

// Constraints:
// 1<=T<=50
// 1<=n<=25

// Example(To be used only for expected output):
// Input:
// 2
// 3 
// 6
// Output:
// 6
// 60


#include <bits/stdc++.h>
#include<iostream>
using namespace std;

long long getSmallestDivNum(long long n);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<getSmallestDivNum(n)<<endl;
	}
	return 0;
	
}// } Driver Code Ends

long long gcd(long long a, long long b)
    {
        if(a==0)
            return b;
        return gcd(b%a,a);
    }
/*You are required to complete this method */
long long getSmallestDivNum(long long n)
{
    //Your code here
    //LCM of 1 to n numbers
        long long ans=1;
        for(int i=1;i<=n;i++)
            ans=(ans*i)/(gcd(ans,i));
        return ans;
}
