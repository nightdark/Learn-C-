#include<iostream>
using namespace std;

class Ponit3d {
    public:
        Ponit3d(float x, float y, float z);
        void print(Ponit3d t);
    private:
        float x;
        float y;
        float z;
};

Ponit3d::Ponit3d(float a, float b, float c){
    this->x=a;
    this->y=b;
    this->z=c;

}

void Ponit3d::print(Ponit3d t){
    std:: cout<<"the one" << t.x <<"the two ," << t.y << "the three" << t.z << std:: endl;
}

int main(){
    cout<<"th"<<endl;
    Ponit3d a(1.0,2.0,3.0);
    
    a.print(a);
    return 0;
}


