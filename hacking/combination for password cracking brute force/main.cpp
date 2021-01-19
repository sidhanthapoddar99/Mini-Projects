#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream us("user.txt",ios::out);
    for(int i=0;i<3000;i++){
        us<<"17BCE";
        if(i<10)
        {us<<"000";
        }
        else if(i<100){
            us<<"00";
        }
        else if(i<1000){
            us<<"0";
        }
        us<<i;
        us<<":";
        us<<"17bce";
        if(i<10)
        {us<<"000";
        }
        else if(i<100){
            us<<"00";
        }
        else if(i<1000){
            us<<"0";
        }
        us<<i;
        us<<endl;
        us<<"17BCE";
        if(i<10)
        {us<<"000";
        }
        else if(i<100){
            us<<"00";
        }
        else if(i<1000){
            us<<"0";
        }
        us<<i<<":";
         if(i<10)
        {
            us<<"000";
        }
        else if(i<100){

            us<<"00";
        }
        else if(i<1000){

            us<<"0";
        }
        us<<i<<endl;
        us<<"17BCE";
        if(i<10)
        {us<<"000";
        }
        else if(i<100){
            us<<"00";
        }
        else if(i<1000){
            us<<"0";
        }
        us<<i<<":"<<i<<endl;
        us<<"17BCE";
        if(i<10)
        {us<<"000";
        }
        else if(i<100){
            us<<"00";
        }
        else if(i<1000){
            us<<"0";
        }
        us<<i<<":"<<123<<endl;
        us<<"17BCE";
        if(i<10)
        {us<<"000";
        }
        else if(i<100){
            us<<"00";
        }
        else if(i<1000){
            us<<"0";
        }
        us<<i<<":"<<1234<<endl;
        us<<"17BCE";
        if(i<10)
        {us<<"000";
        }
        else if(i<100){
            us<<"00";
        }
        else if(i<1000){
            us<<"0";
        }
        us<<i<<":"<<12345<<endl;
        us<<"17BCE";
        if(i<10)
        {us<<"000";
        }
        else if(i<100){
            us<<"00";
        }
        else if(i<1000){
            us<<"0";
        }
        us<<i<<":"<<"abc"<<endl;
        us<<"17BCE";
        if(i<10)
        {us<<"000";
        }
        else if(i<100){
            us<<"00";
        }
        else if(i<1000){
            us<<"0";
        }
        us<<i<<":"<<"abcd"<<endl;
        us<<"17BCE";
        if(i<10)
        {us<<"000";
        }
        else if(i<100){
            us<<"00";
        }
        else if(i<1000){
            us<<"0";
        }
        us<<i<<":";
        us<<"17BCE";
        if(i<10)
        {us<<"000";
        }
        else if(i<100){
            us<<"00";
        }
        else if(i<1000){
            us<<"0";
        }
        us<<i<<endl;



    }
}
