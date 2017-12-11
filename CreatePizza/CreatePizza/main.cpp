

#include <iostream>
#include <fstream>
using namespace std;

class Pizza
{
private:
    char staerd;
    string toppings[20];
    int numberofToppings;
public:
    Pizza();
    Pizza(char s, string t[], int n);
    friend istream& operator >> (istream& in, Pizza& pizza);
    friend ostream& operator << (ostream& out, Pizza& pizza);
    int pizzuVerd(int numberofToppings, char staerd);
};

int main(int argc, const char * argv[]) {
    string str;
    ofstream fout;
    Pizza pizza1;
    fout.open("Pizza.txt", ios::app);
    cin >> pizza1;
    fout << pizza1 << endl;
    fout.close();
    ifstream fin;
    fin.open("Pizza.txt");
    while(!fin.eof())
    {
        getline(fin,str);
        cout << str << endl;
    }fin.close();
  
    return 0;
}
Pizza::Pizza()
{
    staerd = 'l';
    toppings[0] = " ";
    numberofToppings = 0;
}
Pizza::Pizza(char s, string t[], int n)
{
    staerd = s;
    toppings[0] = t[0];
    numberofToppings = n;
}
istream& operator >> (istream& in, Pizza& pizza)
{
    cout << "I bodi eru eftirfarandi staerdir" << endl;
    cout << "S - Stor Pizza, M - Midlungs Pizza, L - Litil Pizza" << endl;
    cout << "Hvada staerd ma bjoda ther?" << endl;
    in >> pizza.staerd;
    cout << "Hversu morg alegg ma bjoda ther?" << endl;
    in >> pizza.numberofToppings;
    cout << "Hvada alegg viltu a pizzuna thina?" << endl;
    for(int i = 0; i < pizza.numberofToppings; i++)
    {
        in >> pizza.toppings[i];
    }
    pizza.pizzuVerd(pizza.numberofToppings, pizza.staerd);
    return in;
}
ostream& operator << (ostream& out, Pizza& pizza)
{
    out << pizza.staerd << " med ";
    for(int i = 0; i < pizza.numberofToppings; i++)
    {
        out << pizza.toppings[i] << ", ";
    }
    cout << endl;
    cout << pizza.pizzuVerd << endl;
    return out;
}
int Pizza::pizzuVerd(int numberofToppings, char staerd){
    int toppingprice;
    int sizeprice;
    toppingprice = 300*numberofToppings;
    if(staerd == 'L')
    {
        sizeprice = 2000;
    }
    if(staerd == 'M')
    {
        sizeprice = 1500;
    }
    if(staerd == 'L')
    {
        sizeprice = 1000;
    }
    int totalprice;
    totalprice = toppingprice+sizeprice;
    return totalprice;
}