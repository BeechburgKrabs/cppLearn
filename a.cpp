#include<iostream>
#include<vector>
#include<map>
#include <string>
using namespace std;


int main(){
    // string s="";
    // string res ="";
    // res = BacktoCppAgain(s);
    // cout<<"adad"<<endl;
    map<string,int> m;
    m["ad"]=123;
    std::map<std::string,int>::iterator it = m.begin();
    for(;it != m.end();it++){
        std::cout << it->first <<endl;
        std::cout << it->second << endl;
    }
    return 0;
}

string BacktoCppAgain(string s){
    s ="cppcpp";
    return s;
}

template <typename T> void display_message(const string &str,const vector<T> &v){
    for(int i=0;i<v.size();i++){
        T t=  v[i];
        cout << t << "";
    }
}