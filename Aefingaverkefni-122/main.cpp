

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    string str;
    ofstream fout;
    bool accepted;
    accepted = true;
    
    fout.open("DataText.txt", ios::app);
    getline(cin, str);
    do {
    if(str.find("\\") == 0)
    {
        accepted = false;
        return 0;
    }
    else
    {
    fout << str << endl;
    getline(cin,str);
    }
    }while(accepted == true);
    fout.close();
    
    return 0;
}
