#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
#include<cctype>
#include<algorithm>
#include "textEditor_header.h"

using namespace std;

int main(){
    string name;
    cout<<"please enter the name of the text file"<<endl;
    getline(cin, name);
    name += ".txt";
    fstream mark;
    mark.open(name, ios::in);
    if (mark.fail())
    {
        cout<<"file is not found, i creat it."<<endl;
        mark.open(name, ios::out);
        mark.close();
    }
    else
    {
        mark.close();
    }
    bool a = true;
    while (a)
    {
        int x;
        cout<<"please enter the number of the option you need to applay:\n1. Add new text to the end of the file\n 2. Display the content of the file.\n3. Empty the file.\n4. Encrypt the file content.\n 5. Decrypt the file content.\n6. Merge another file.\n7. Count the number of words in the file.\n8. Count the number of characters in the file.\n9. Count the number of lines in the file.\n10. Search for a word in the file.\n11. Count the number of times a word exists in the file.\n12. Turn the file content to upper case.\n13. Turn the file content to lower case.\n14. Turn file content to 1st caps (1st char of each word is capital).\n15. Save.\n16. Exit.\n";
        cin>>x;
        switch (x)
        {
        case 1:
            add_text(name);
            break;
        
        case 2:
            read_file(name);
            break;
        
        case 3:
            empty(name);
            break;

        case 4:
            Encryption(name);
            break;

        case 5:
            Decryption(name);
            break;
        
        case 6:
            break;

        case 7:
            break;
        
        case 8:
            break;

        case 9:
            break;

        case 10:
            break;
        
        case 11:
            break;

        case 12:
            break;

        case 13:
            break;

        case 14:
            break;

        case 15:
            break;
        
        case 16:
            a = false;
            break;
        
        default:
            cout<<"please enter a correct number of the option you need"<<endl;
            break;
        }
    }
}