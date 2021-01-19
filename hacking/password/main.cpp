#include<iostream>
#include <fstream>
#include<string.h>
#include<conio.h>
using namespace std;
struct lists{
    public:
char name[20]="";
char pass[20]="";
int n=0;
void encrypt(){
    for(int i=0;i<strlen(name);i++)
        name[i]=(char)((int)name[i]+n+i);
    for(int i=0;i<strlen(pass);i++)
        pass[i]=(char)((int)pass[i]+n+i);
}
void decrypt(){
    for(int i=0;i<strlen(name);i++)
        name[i]=(char)((int)name[i]-n-i);
    for(int i=0;i<strlen(pass);i++)
        pass[i]=(char)((int)pass[i]-n-i);
}
};

int main()
{   double passs=147896325;
    double pasp=0.0;
    cout << "enter password:" << endl;
    cin>>pasp;
    if(pasp!=passs){
    cout << "wrong password:"<<endl;
    getch();
    return 0;
}
    ifstream cd("res_dat.txt",ios::in|ios::binary);

    while(!cd.eof()){
        lists a;
        cd.read((char*)&a,sizeof(a));
        a.decrypt();
        cout<<"user:  "<<a.name<<"     password:    "<<a.pass<<endl;
    }
    getch();
    return 0;

}
