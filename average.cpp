#include<iostream>

using namespace std;

int main(int argc , char *argv[]){
    float sum = 0;
    if(argc == 1){
        cout << "Please input numbers to find average.\n";
    }else{
        cout << "--------------------------------- \n";
        for(int i = 0 ; i < argc ; i++){
            sum = sum + atof(argv[i]);
        }
        cout << "Average of " << argc-1 << " numbers = " << sum/(argc-1) << "\n";
        cout << "--------------------------------- \n";
    }
}
