// Al Mahfuz (al.mahfuz@selise.ch)
// Section 1, number 2, solution

#include<bits/stdc++.h>
using namespace std;

int main(){
    string num1, num2;
    while(cin>>num1>>num2){
        string ans="";
        int sz1 = num1.size();
        int sz2 = num2.size();
        int cnt=0, a, b, sum;

        while(sz1 || sz2){
            a=0, b=0;
            if(sz1>0){
                sz1--;
                a = num1[sz1]-'0';
            }
            if(sz2>0){
                sz2--;
                b = num2[sz2]-'0';
            }
            sum = a+b+cnt;
            cnt = (sum>9)?1:0;

            sum = sum%10;
            ans += (sum+'0');
        }
        reverse(ans.begin(), ans.end());
        cout<<ans<<endl;
    }
}
