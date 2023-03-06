#include<iostream>
#include<limits.h>
#include<array>
#include<string.h>
#include<vector>
using namespace std;

int read_arr(int marks[],int exams[], int size){
    for(int i=0; i<size; i=i+1){
        cout<<"No. of Exams of "<<i+1<<"th Student: ";
        cin>>exams[i];
        cout<<"Total marks of "<<exams[i]<<" of "<<i+1<<"th student: ";
        cin>>marks[i];}
    }

int print_array(int marks[],int exams[], int size){
    cout<<"Marks: "<<endl;
    for(int i=0; i<size; i=i+1){
        cout<<marks[i]<<" ";
    }   
    cout<<endl;
        cout<<"Exams: "<<endl;
    for(int i=0; i<size; i=i+1){
        cout<<exams[i]<<" ";
    }
}

int sort(int marks[],int exams[], int size){
    int min=INT16_MAX;

    for(int i=0; i<size; i=i+1){
        for(int j=i; j<size; j=j+1){
        if(marks[j+1]>marks[i] && i!=size-1){
            swap(marks[i], marks[i+1]);
            swap(exams[i], exams[i+1]);
        }
        else{continue;}}
    }
}

int main(){
    int num;
    int stud;
    cout<<"Enter Number Of Students: "<<endl;
    cin>>stud;
    int marks[stud];
    int exams[stud];
    read_arr(marks,exams,stud);
    sort(marks,exams,stud);
    print_array(marks,exams, stud);
}
