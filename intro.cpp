#include<iostream>

#include <string.h>

// #include "hero.cpp"
using namespace std;

class Hero{

    //properties
    private:
    int health;

     public:
      char *name;
      char level;
      static int timeToComplete;
   
   
     

     //constructor
    Hero(){
        cout << " simple constructor called" <<endl;
        name = new char[100];
    }

    //parameter const
    Hero(int health) {
        // cout<< "this->" << this <<endl;
        this-> health = health;
    }
    Hero(int health , char level){
        this -> level = level;
        this -> health = health;
    }

    //copy const
    Hero(Hero& temp){ 

          char *ch =  new char[strlen(temp.name) +1 ];
          strcpy(ch, temp.name);
          this->name = ch;


        cout<<"copy called"<< endl;
        this->health = temp.health;
        this->level = temp.level;

    }

    void print(){
        cout<<endl;
        cout<<"name: " << this-> name <<endl;
        cout<< "health: " << this->health <<endl;
        cout<< "level: " << this-> level<<endl;
        cout<<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

   void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }
   
   void setName(char name[]) {
    strcpy(this->name , name);
   } 


   static int random(){
    return timeToComplete ;
   }

   ~Hero(){
    cout<<" dest called" <<endl;
   }

}; 

int Hero:: timeToComplete = 5;

int main(){ 

    cout<< Hero:: timeToComplete <<endl;
    

    //bad habit
    // Hero a;
    // cout<< a. timeToComplete <<endl;






   

//    //static
//    Hero a;


//    //dynamic
//    Hero *h = new Hero;
//    //maunually called
//    delete h;




}


















    // Hero hero1;
    // hero1.setHealth(12); 
    // hero1.setLevel('D');
    // char name[8] = "Urvashi";
    // hero1.setName(name);

    // // hero1.print();
        
    // //use default copy const
    // Hero hero2(hero1);
    // // hero2.print();

    // hero1.name[0] = 'G';
    // hero1.print();

    // hero2.print();

    // hero1 = hero2;

    // hero1.print();

    // hero2.print();

    

    


//     Hero keshav(70 , 'C');
//     keshav.print();
   

//    //copy constructor
//     Hero urvashi(keshav);
//     urvashi.print();
   
   




















    // //static object creation
    // Hero mendak(10);
    // cout << "address of mendak" << &mendak <<endl;

    // //dynamically
    // Hero *h = new Hero(11);
    

//    //static alloaction 
//     Hero a;
//     a.setHealth(100);
//     a.setLevel('B');
//     cout << "level is " << a.level << endl;
//     cout << "health is " << a.getHealth() <<endl;

//     Hero *b = new Hero;
//     b->setHealth(100);
//     b->setLevel('A');

//     cout << "level is " << (*b).level << endl;
//     cout << "health is " << (*b).getHealth() <<endl;
    
//     // //object bana diya class ka
//     // Hero Urvashi;
//     // cout<< "size of urvashi " << sizeof(Urvashi) <<endl;


//     // cout<< " urvashi health is" << Urvashi.getHealth() <<endl;

//     // //use setter
//     // Urvashi.setHealth(100);

//     // // Urvashi.health = 100;
//     // Urvashi.level = 'A';

//     // cout<<"health is:" <<  Urvashi.getHealth() << endl;
//     // cout<< "Level is" << Urvashi.level <<endl;

//     // // cout<<"size is" << sizeof(h1) <<endl;

//     return 0;
// }