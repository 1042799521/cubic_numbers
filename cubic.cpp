#include <iostream>
#include <cmath>
using namespace std;
long long all_cubic[10010],new_diff[10010][10010];
int main(){
    int n;
    cin>>n;
    int diff[n+1];
    bool flag = false;
    for (int i = 1; i<=n; i++) {
        cin>>diff[i];
    }
    for (int i = 1; i<=10000; i++) {
        all_cubic[i] = pow(i,3);
        //on mac,the function is okay and 'i' can be a int number.but it is error when I run it on school's computer using MinGW.
        //I try i*i*i,but the answer is wrong(348913653).I also try i*i*i*1LL,but it also outputs '348913653'.I don't know why.
    }
    for (int i = 1; i<=10000; i++) {
        for (int j = 1; j<=10000; j++) {
            new_diff[i][j] = all_cubic[j] - all_cubic[i];
        }
    }
    for (int c = 1; c<=n; c++) {
        flag = false;
        for (int i = 1; i<=10000; i++) {
            if (flag==true) {
                break;
            }
            for (int j = 1; j<=10000; j++) {
                if (diff[c] == new_diff[i][j]) {
                    flag = true;
                    cout<<"YES"<<endl;
                    break;
                }
            }
        }
        if(flag == false){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}







#include <iostream>
#include <cmath>
using namespace std;
long long input_diff[101];
int main(){
	int x;
	cin>>x;
	for(int i = 1;i<=x;i++){
		cin>>input_diff[i];
	}
	for(long long i=1;i<=1000000;i++){
		
	}
}
