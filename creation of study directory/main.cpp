#include <iostream>
#include <conio.h>
#include <dir.h>
#include <process.h>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;


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

void subjects_inside(char m[90])
{
    char temp[90]="";

    strcpy(temp,m);
    strcat(temp,"//");
    strcat(temp,"Theory");
    cout<<temp;
    create(temp);

    char temp2[90]="";

    strcpy(temp2,temp);
    strcat(temp2,"//Digital Assignments");
    cout<<temp2;
    create(temp2);
    //*****************
    strcpy(temp2,temp);
    strcat(temp2,"//Materials");
    cout<<temp2;
    create(temp2);
    //************
    strcpy(temp2,temp);
    strcat(temp2,"//References");
    cout<<temp2;
    create(temp2);
    //**************
    strcpy(temp2,temp);
    strcat(temp2,"//Previous papers");
    cout<<temp2;
    create(temp2);

    char temp3[90]="";

    strcpy(temp3,temp2);
    strcat(temp3,"//CAT1");
    cout<<temp3;
    create(temp3);

    strcpy(temp3,temp2);
    strcat(temp3,"//CAT2");
    cout<<temp3;
    create(temp3);

    strcpy(temp3,temp2);
    strcat(temp3,"//FAT");
    cout<<temp3;
    create(temp3);

    strcpy(temp,m);
    strcat(temp,"//");
    strcat(temp,"Lab");
    cout<<temp;
    create(temp);

    strcpy(temp,m);
    strcat(temp,"//");
    strcat(temp,"Project");
    cout<<temp;
    create(temp);

    strcpy(temp,m);
    strcat(temp,"//");
    strcat(temp,"Additional");
    cout<<temp;
    create(temp);
}

int main()
{

    cout << "enter semester name: "<<endl;
    char sem[90];
    cin>>sem;
    create(sem);
    char arr[10][90];
    cout<<"enter number of subjects \n";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        char temp[90]="";
        strcat(temp,sem);
        strcat(temp,"//");
        strcat(temp,arr[i]);
        cout<<temp;
        create(temp);
        subjects_inside(temp);

    }
    return 0;
}
