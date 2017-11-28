
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {

    string str;

    ofstream fout;

    fout.open("DataText.txt", ios::app);

    do{
    getline(cin, str);
    fout << str << endl;

    }while(str[0] != "\"");
    fout.close();
    return 0;
}
