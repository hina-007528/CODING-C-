#include<iostream>
#include<fstream>

using namespace std;
int main(){
    
     ofstream hout("hlw world");
     cout<<"Enter name."<<endl;
     string name;
     cin>>name;
    hout<<"my name is  "<<name;
     hout.close();
ifstream hin("hlw world");
string content;
getline(hin,content);
cout<<"the content of the file is:" +content;
hin.close();
    return 0;
}