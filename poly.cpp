#include<iostream>
using namespace std;

//function overloading
class A {
    public:

    void sayHello(){
        cout<<"hello love babbbar" <<endl;
    }

    int sayHello(char name){
        cout<<"lessgoo"<<endl;
        return 1;
    }

    void sayHello(string name){
        cout<<"woohoo"<<endl;
    }
};

// int main(){ 


//     A object;
//     object.sayHello();

//     return 0;
// }


//OPERATOR OVERLOADING

class B {
  

  public:
  int a;
  int b;

  public:
  int add(){
    return a+b;
  }

  void operator+ (B& obj){
    // int value1 = this-> a;
    // int value2 = obj.a;
    // cout<<"output"<<value2- value1 <<endl;

    // cout<<"hello"<<endl;

    // void operator() (){
        cout<<"main bracket hu"<< this-> a <<endl;

    }


  };
// };

int main(){
    B obj1 , obj2;
    obj1.a = 4;
    obj2.a= 7;

    obj1 + obj2;

    return 0;
}
