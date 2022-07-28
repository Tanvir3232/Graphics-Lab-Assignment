#include <iostream>
#include <cstdlib>
#include<cmath>
using namespace std;

int main()
{
    double x1,x2 ,y1,y2,m,y,c;
    
    cout << "X_start : "; 
    cin >> x1; 
    cout << "Y_start : "; 
    cin >>y1;
    cout << "X_end : "; 
    cin >> x2;  
    cout << "Y_end : "; 
    cin >> y2;
    m=(y2-y1)/(x2-x1);
    cout<<"M: "<<m<<"\n";
   
    if(abs(m)<=1){
        y=y1;
        cout<<"x: "<<x1<<"    y: "<<y<<"     y(round): "<<round(y)<<"\n";
        for (int i = x1+1; i <=x2; i++) {
            y = y+m;
            cout<<"x: "<<i<<"    y: "<<y<<"     y(round): "<<round(y)<<"\n";
        }
    }else{
        m = 1/m;
        double x = x1;
        cout<<"y: "<<y1<<"    y: "<<x<<"     y(round): "<<round(x)<<"\n";
        for (int i = y1+1; i <=y2; i++) {
            x = x+m;
            cout<<"y: "<<i<<"    x: "<<x<<"     x(round): "<<round(x)<<"\n";
        }
    }
    
}
