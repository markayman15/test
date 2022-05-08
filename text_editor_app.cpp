#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
#include<cctype>
#include<algorithm>
#include "textEditor_header.h"

using namespace std;

void add_text(string name){
    mark.open(name.c_str(), ios::app);
    if (mark.is_open())
    {
        string append;
        cout<<"enter the text"<<endl;
        getline(cin, append);
        mark<<append;
        mark.close();
    }
}

void read_file(string name){
    mark.open(name.c_str(),ios::in);
    if (mark.is_open())
    {
        string read;
        while (getline(mark, read))
        {
            cout<<read<<endl;
        }
    }
}

void empty(string name){
    mark.open(name.c_str(), ios::out);
    if (mark.is_open())
    {
        mark<<"";
        mark.close();
    }
}

void Encryption(string name){
    mark.open(name.c_str(),ios::in);
    if (mark.is_open())
    {
        string read;
        while (getline(mark, read))
        {
            for (int i = 0; i < read.length(); i++)
            {
                if (read[i] == 'z')
                {
                    read[i] = 'a';
                }
                else if (read[i] == 'Z')
                {
                    read[i] == 'A';
                }
                else
                {
                    read[i] = char(read[i] + 1);   
                }
            }
            cout<<read<<endl;
        }
    }
}

void Decryption(string name){
    mark.open(name.c_str(),ios::in);
    if (mark.is_open())
    {
        string read;
        while (getline(mark, read))
        {
            for (int i = 0; i < read.length(); i++)
            {
                if (read[i] == 'a')
                {
                    read[i] = 'z';
                }
                else if (read[i] == 'A')
                {
                    read[i] == 'Z';
                }
                else
                {
                    read[i] = char(read[i] - 1);   
                }
            }
            cout<<read<<endl;
        }
    }
}
