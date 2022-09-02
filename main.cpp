#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>

using namespace std;

void reverse(string &number){
    int length = number.length();

    for(int i=0; i<length/2; i++){
        swap(number[i],number[length-i-1]);
    }
}

void trim(string &number){

    int length = number.length();

    for(int i=length-1;;i--){

        char digit=number[i];

        if(digit!=48)
            break;

        number.pop_back();

    }
}

int main()
{
    int n;
    cin>>n;

    while(n)
    {
        string a,b;
        cin>>a>>b;

        trim(a);
        trim(b);
        reverse(a);
        reverse(b);
        int x=stoi(a);
        int y=stoi(b);
        int sum=x+y;
        stringstream ss;
        ss<<sum;
        string sum_str=ss.str();
        trim(sum_str);
        reverse(sum_str);
        sum=stoi(sum_str);

        cout<<sum;

        n--;
        if(n)
            cout<<"\n";
    }
    return 0;
}
