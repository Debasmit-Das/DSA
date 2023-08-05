#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class threeD{
public:
    int x,y,z;
    threeD(int a,int b,int c){
        x=a;
        y=b;
        z=c;
    }
};
bool myComp(threeD l,threeD m){
    return (l.x> m.x);
}
int main(){
    threeD a[] = {{79,3,39},{12,33,41},{43,14,25},{11,12,18}};
    int si = sizeof(a)/sizeof(a[0]);
    for(threeD n : a){
        cout<<n.x<<" "<<n.y<<" "<<n.z<<endl;
    }
    cout<<endl<<endl;
    sort(a,a+si,myComp);
    for(threeD n : a){
        cout<<n.x<<" "<<n.y<<" "<<n.z<<endl;
    }
    cout<<endl<<endl;
    int b[] ={5,31,1,22,53,12,41,2};
    int s2 = sizeof(b)/sizeof(b[0]);
    sort(b,b+s2);
    for(auto n : b){
        cout<<n<<" ";
    }
    cout<<endl<<endl;
    vector<int> c ={4,2,342,21,3,42,111};
    sort(c.begin(),c.end(),greater<int>());
    for(auto n : c){
        cout<<n<<" ";
    }

    cout<<endl<<endl;
    return 0;
}
