// Online C++ compiler to run C++ program
    #include<iostream>
using namespace std;

int main(){
 int X;
int Y;
int Z;
    cin >> X >> Y >> Z;
if( X + Y > Z && Y + Z > X && X + Z > Y ){
     if (X == Y && Y == Z){
      cout << "Equilateral Triangle";
    }
      else if (X == Y || Y == Z || X == Z) {
        cout << "Isosceles Triangle";
      }
    else {
    cout << "Scalene Triangle";
    }
}
else {
    cout <<"Not a Triangle";
}

return 0;
}
