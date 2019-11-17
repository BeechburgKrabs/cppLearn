#include<iostream>
using namespace std;


int main(){
    string s="";
    string res ="";
    res = BacktoCppAgain(s);
    cout<<"adad"<<endl;
}

string& BacktoCppAgain(string &s){
    s ="cppcpp";
    return s;
}

template <typename T> void display_message(const string &str,const vector<T> &v){
    for(i=0;i<v.size();i++){
        T t= = v[i];
        count << t << "";
    }
}