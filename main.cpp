#include <iostream>
#include <fstream>
#include <cstdlib>



using namespace std;

int main()
{
    ofstream fout;
    string typethis = "";

    cout << "Type \\ to quit" << endl;
    do {
            fout.open("streamfile.txt", ios::app);
        if (fout.is_open()) {
            cout << "This will be added:  ";
            getline(cin, typethis);
            if(typethis[0] == '\\'){
                break;
            }
            else{
            }
            fout << " " << typethis << endl;
        }                else {
            cout << "file not open";
        }
        fout.close();
    } while(typethis[0] != '\\');

    fout.close();

    return 0;
}
