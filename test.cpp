#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(){
    // map<string,string> req;
    // string a="abc";
    // cout<<a.size()<<endl;
    // cout<<i
    // req.insert(pair<string,string>("key","value"));
    // cout<<req["key"]<<endl;
    char buf[100]="GET / HTTP/1.1";
    string value,key;
    bool space_1=true;
    for(int i=0;i<100;i++){
        if((buf[i]!=' ')&&space_1){
            key+=buf[i];
        }
        else if((buf[i]=' ')&&space_1){
            space_1=false;
            cout<<i<<endl;
        }
        else if((buf[i]!='\n')&&(!space_1)){
            value+=buf[i];
        }
        else{
            space_1=true;
            // request.insert(pair<string,string>(key,value));
        }
    }
    cout<<key<<" "<<value<<endl;
    return 0;
}
