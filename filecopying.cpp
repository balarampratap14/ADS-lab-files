#include <iostream>
#include <fstream>
using namespace std;

using namespace std;

int main()
{

    ifstream fin;
    fin.open("data.txt",ios::in);

    ofstream fout;
    fout.open("new.txt",ios::out);
    char ch;
    char line[75];
    int i = 1;

    while(fin.get(ch)){
        fin.get(line,75,'.');
        fout<<"Line "<<i<<" : "<<line<<endl;
        i++;


    }
    fin.close();
    cout<<"done"<<endl;

    return 0;
}

