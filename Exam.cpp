#include <iostream>

using namespace std;

void openSpace(){
    cout<<endl<<endl;
}

void IRideItEndlessly(){

    string students[3];
    cout<<"Please enter 3 name for learn exam result..."<<endl;
    for(int i=0;i<3;i++){
        cin>>students[i];
    }

    openSpace();

    float visaExams1[3],visaExams2[3],finalExams[3],averageNote[3];

    string gradeLevel[3];
    cout<<"Please enter grade level(keyword=uni,high)"<<endl;
    for(int i=0;i<3;i++){
        cin>>gradeLevel[i];
    }
    openSpace();

    cout<<"Please enter the notes for the 1. visa"<<endl;
    for(int i=0;i<3;i++){
        cin>>visaExams1[i];
    }
    cout<<endl<<"Please enter the notes for the 2. visa"<<endl;
    for(int i=0;i<3;i++){
        cin>>visaExams2[i];
    }
    cout<<endl<<"Please enter the notes for the final exam"<<endl;
    for(int i=0;i<3;i++){
        cin>>finalExams[i];
    }
    //visa1=%25 visa2=%30 final=%45

    openSpace();

    for(int i=0;i<3;i++){
        averageNote[i]=visaExams1[i]*0.25 + visaExams2[i]*0.3 + finalExams[i]*0.45;
    }
    for(int i=0;i<3;i++){
        cout<<"Of the "<<students[i]<<" the average note is:"<<averageNote[i]<<endl;
    }

    openSpace();
    for(int i=0;i<3;i++){
        int avgN=averageNote[i];

        if(avgN >= 85){
            if(gradeLevel[i]=="uni")
            cout<<students[i]<<" Yehaaa,You've done it with high score(AA)"<<endl;

            else{
            cout<<students[i]<<" Yehaaa,You've done it with high score("<< averageNote[i]<<")"<<endl;
            }

        }
        else if(avgN >= 70){
            if(gradeLevel[i]=="uni")
                cout<<students[i]<<" Probably you'll ride it endlessly(BA)"<<endl;

            else
                cout<<students[i]<<" Probably you'll ride it endlessly("<< averageNote[i]<<")"<<endl;

        }
        else if(avgN >= 60){
            if(gradeLevel[i]=="uni")
                cout<<students[i]<<" Not bad for your life(BB)"<<endl;
            else
                cout<<students[i]<<" Not bad for your life ("<< averageNote[i]<<")"<<endl;
        }

        else if(avgN >= 50){
            if(gradeLevel[i]=="uni")
                cout<<students[i]<<" Mehh.You took(BC)"<<endl;
            else
                cout<<students[i]<<" Mehh.You took ("<< averageNote[i]<<")"<<endl;
        }

        else{
            if(gradeLevel[i]=="uni")
                cout<<students[i]<<" You didn't pass.See you next year in Online Class or university("<< averageNote[i]<<")"<<endl;
            else
                cout<<students[i]<<" You didn't pass.See you next year in high school("<< averageNote[i]<<")"<<endl;
        }

    }

}

int main()
{
    /*
    int num1[3],i;
    for(i=0;i<3;i++){
        cin>>num1[i];
    }
    for(i=0;i<3;i++){
        cout<<endl<<i+1<<". index="<<num1[i]<<endl;
    }*/

    IRideItEndlessly();

    return 0;
}
