#include<iostream>
using namespace std;
class hero{
    //properties 
    private:
    int health;
    public:
    char* name;
    char level;
    static timeToComplete;

    Hero(){
        cout<<"simple constructor called"<<endl;
        name= new char[100];
    }
    //parametrised constructor 
    Hero(int health){
        this-->health=health;
    }
    Hero(int health, char level){
        this-->health=health;
        this-->level=level;
    }
    //copy constructor
    Hero(Hero& temp){
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this-->name=ch;
        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }
    void print(){
        cout<<endl;
        cout<<"[name]:"this-->name<<",";
        cout << "health: " << this->health << " ,";
        cout <<"level: " << this->level << " ]";
        cout << endl << endl;
    }
}