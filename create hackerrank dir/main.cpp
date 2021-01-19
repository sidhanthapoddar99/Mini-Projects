#include <iostream>
#include <conio.h>
#include <dir.h>
#include <process.h>
#include <stdio.h>
#include <bits/stdc++.h>
#include<string.h>
#include<fstream>
using namespace std;

void copyfile(char from[100], char to[100])
{
    ifstream cfile;
    cfile.open(from,ios::in);
    ofstream pfile;
    pfile.open(to,ios::out);
    pfile<<cfile.rdbuf();
    cfile.close();
    pfile.close();

}

void create(char* dirname)
{

    int check;
    //char* dirname = "geeskforgeeks";

    check = mkdir(dirname);

    // check if directory is created or not
    if (!check)
        printf("    Directory created\n");
    else
        printf("    Unable to create directory\n");



}
int main()
{

    cout<<"enter the name of the challenge:\n\n";
    char arr[100];
    string st;
    getline(cin,st);
    strcpy(arr,st.c_str());
    cout<<arr;
    create(arr);

    char temp[100]="";

    strcpy(temp,arr);
    strcat(temp,"//");
    strcat(temp,arr);
    strcat(temp,".py");
    cout<<temp;
    copyfile("test.py",temp);
    strcpy(temp,arr);
    strcat(temp,"//ques_");
    strcat(temp,arr);
    strcat(temp,".txt");
    cout<<temp;
    copyfile("test.txt",temp);

    return 0;


}
