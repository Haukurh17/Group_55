#include <iostream>
#include <fstream>

using namespace std;
/// byrjun a verkefni_1
int main()
{
    fstream fin;
    string str;
    char input;
    fin.open("DataTextFile.txt");
    if (fin.is_open())
    {

                char input;

                for(int i = 0; i < 10; i++)
                {
                    getline(fin, str);
                    cout << str << endl;
                }
                cout << "Do you wish to continue y/n" << endl;
                cin >> input;
            do{

                if(input == 'y')
                {
                    for(int i = 0; i < 10; i++)
                    {
                    getline(fin, str);
                    cout << str << endl;
                    }
                }
                if(input == 'n')
                {
                    return 0;
                }
                else
                {
                    cout << "Do you wish to continue y/n" << endl;
                    cin >> input;
                }
            }while(!fin.eof());

            fin.close();
    }
    else
    {
        cout << "Unable to read from file" << endl;
    }



    return 0;
}
