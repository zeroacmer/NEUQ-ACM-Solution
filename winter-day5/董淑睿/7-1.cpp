#include <bits/stdc++.h>
using namespace std;
const int _=1e3+7;
int read() {
    int x=0,f=1;char s=getchar();
    for(;s>'9'||s<'0';s=getchar()) if(s=='-') f=-1;
    for(;s>='0'&&s<='9';s=getchar()) x=x*10+s-'0';
    return x*f;
}
int n,a[_];
int main() {
    int n=read(),ans=0;
    for(int i=1;i<=n;++i) a[i]=read();
    for(int i=1;i<=n;++i) {
        for(int j=i+1;j<=n;++j) {
            if((a[i]-a[j])==1||(a[i]-a[j])==-1) ans++;
        }
    }
    cout<<ans;
    return 0;
}