#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ifstream we;
    ofstream wy;
    string x, correctInfos;
    int errorCounter = 0, counter = 0;
    bool endFlag = false;
    we.open("input.txt");
    wy.open("output.txt");

    while(!we.eof()){
        for(int i=0; i<8; i++){
            if(we>>x[i]){
                counter++;
            }
            else{
                endFlag=true;
                break;
            }
        }
        if(endFlag){
            break;
        }
        if(x[3]!=x[7] || (x[4]==0 && x[5]==0 && x[6]==0)){
            errorCounter++;
        }
        else{
            for(int i=0;i<8;i++){
                correctInfos=correctInfos+x[i];
            }
        }
    }
    we.close();
    counter/=8;
    wy<<counter<<endl<<errorCounter<<endl<<correctInfos;
    wy.close();

    return 0;
}
