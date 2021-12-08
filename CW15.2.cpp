#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

typedef double REAL;

class TPoint{
   
   protected:
   REAL x,y;
   size_t dim;

   public:
    TPoint(){ dim=2; }
    TPoint(REAL x_, REAL y_):x(x_),y(y_),dim(2){}

    void setX(REAL x){
       this->x=x;
    }

    void setY(REAL y){
       this->y=y;
    }
    REAL getX(){
       return x;
    }
    REAL getY(){
       return y;
    }

    friend ostream & operator<<(ostream& f, const TPoint & p){
       f<<"("<<p.x<<","<<p.y<<")";
       return f;    
    }

    int input(){
      cout<<"x,y:";
      cin>>x>>y;
   }

   size_t getDim(){
      return dim;
  }

};


void input_polygon(Point p){
    cout << "Ввести вершину ? ";
    string s;
    cin >> s;
    vector <int> points;

    if (s == "Так"){
        cin >> p.x >> p.y;
        points.push_back(p.x && p.y);
        p.counter += 1;
    }else if (s == "Ні"){
        cout << "Ви завершели ввід даних " << endl;
    }

}