#include <iostream>
#include<vector>
using namespace std;

// Decimal to Binary
int DecimalToBinary(int n)
{
    cout<<"Enter your Decimal number :";
    cin>>n;
    int reminder,rev;
    rev=n;
    vector<int>v;
    while(rev>0){
        int reminder=rev%2;
            rev=rev/2;
            v.push_back(reminder);
    }
    reverse(v.begin(), v.end());
    for (auto i = v.begin(); i != v.end(); i++)
        cout << *i << " ";
    cout << endl;
}
// Decimal to Ocatal
int DecimalToOcatal(int m)
{
    cout<<"Enter your Decimal number :";
    cin>>m;
     vector<int>v;
    int reminder,rev;
    rev=m;
    while(rev>0){
        int reminder=rev%8;
            rev=rev/8;
             v.push_back(reminder);
    }
    reverse(v.begin(), v.end());
    for (auto i = v.begin(); i != v.end(); i++)
        cout << *i << " ";
    cout << endl;
}
// Decimal To Hexadecimal
int DecimalToHexadecimal(int x)
{
    cout<<"Enter your Decimal number :";
    cin>>x;
    int rem,rev;
    vector<int>v;
    vector<char>ch;
    rev=x;
    while(rev>0){
        int rem=rev%16;
            rev=rev/16;
            if(rem>9)
            {
               if(rem==10)
                 ch.push_back('A');
               else if(rem==11)
                    ch.push_back('B');
               else if(rem==12)
                    ch.push_back('C');
               else if(rem==13)
                    ch.push_back('D');
              else if(rem==14)
                    ch.push_back('E');
              else if(rem==15)
                    ch.push_back('F');
            }
            else{
                v.push_back(rem);
            }

    }
    reverse(v.begin(), v.end());
    for (auto i = v.begin(); i != v.end(); i++)
        cout << *i << " ";
    cout << endl;
}
// Binary To Decimal
int BinaryToDecimal(int x)
{
    int num;
    cout << "Enter your Binary number:";
    cin >> num;
    int decimal_num=0,rem,base=1;
     while ( num > 0)
    {
        rem = num % 10;
        decimal_num = decimal_num + rem * base;
        num = num / 10;
        base = base * 2;
    }
    cout << decimal_num << endl;
}
int BinaryToOcatal(int a)
{
    int num;
    cout << "Enter your Binary number:";
    cin >> num;
     int ocatal_num=0,rem,base=1;
     while ( num > 0)
    {
        rem = num % 10;
        ocatal_num = ocatal_num + rem * base;
        num = num / 10;
        base = base * 8;
    }
    cout << ocatal_num << endl;
}
int main()
{
    cout<<"1.DecimalToBinary\n2.DecimalToOcatal\n3.DecimalToHexadecimal\n4.BinaryToDecimal\n5.BinarytoOcatal\n6.BinaryToHexaDecimal";
    int choice;
    cout<<"Enter your choice:";
    cin>>choice;
       switch (choice)
       {

       case 1:
          int z;
          DecimalToBinary(z);
          break;

       case 2:
          int m;
          DecimalToOcatal(m);
          break;

       case 3:
          int x;
          DecimalToHexadecimal(x);
          break;

       case 4:
          int y;
          BinaryToDecimal(y);
          break;

       case 5:
          int w;
          BinaryToOcatal(w);
          break;

       case 6:
         int z;
         BinaryToHexadecimal(z);
         break;
       }

}
