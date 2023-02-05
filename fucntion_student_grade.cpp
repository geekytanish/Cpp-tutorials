#include<iostream>

using namespace std;

char print_grade(int marks){
    if(marks>=90){return 'A';}
    else if(marks>=80){return 'B';}
    else if(marks>=70){return 'C';}
    else if(marks>=50){return 'D';}
    else{return 'E';}

}

int main(){
    int marks;
    cout<<"Enter marks: ";
    cin>>marks;

    cout<<print_grade(marks);
}
