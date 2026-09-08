
#include<iostream>
#include <vector>
using namespace std;
double calculerMoyenne(vector<int>notes){
    double somme= 0;
    for (int i=0;i<notes.size();i++){
        somme=somme+notes[i];
        }
        return somme/notes.size();
    }
int main (){
            vector<int>notes={12,14,3};
            double taNote=calculerMoyenne(notes);
            cout<<"la moyene est"<<taNote<<endl;
            return 0;
            }
