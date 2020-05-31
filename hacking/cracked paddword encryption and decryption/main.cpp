#include<iostream>
#include <fstream>
#include<string.h>

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
{

    ofstream bc("res.txt",ios::out);
    ifstream ab("pass.txt",ios::in);
    ofstream cd("res_dat.txt",ios::out|ios::binary);
    lists a[100];
    int i=0;
    char c;
    ab>>c;

    while(!ab.eof()){
        while(c!=':')
         ab>>c;

        int j=0;
        ab>>c;

        while(c!='p'){
            a[i].name[j]=c;
            ab>>c;
            j++;}

        while(c!=':')
         ab>>c;

        j=0;
        ab>>c;

        while(c!='l'){
            a[i].pass[j]=c;
            ab>>c;
            j++;
        }
        a[i].n=i;
        a[i].encrypt();
        //a[i].decrypt();
        cout<<"name:  "<<a[i].name<<"   pass:   "<<a[i].pass<<endl;
        cd.write((char*)&a[i],sizeof(a[i]));
        i++;
    }


        return 0;


}
