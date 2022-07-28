
#include <iostream>
#include <cstdlib>
#include<cmath>
using namespace std;

int main()
{
    double x1,x2 ,y1,y2,del_x,del_y,d0,d,i=0,y;
    
    cout << "X_start : "; 
    cin >> x1; 
    cout << "Y_start : "; 
    cin >>y1;
    cout << "X_end : "; 
    cin >> x2;  
    cout << "Y_end : "; 
    cin >> y2;
    del_x = x2-x1;
    del_y = y2-y1;
    d0    = 2*del_y - del_x;
    cout<<del_x<<"\n";
    cout<<del_y<<"\n";
    cout<<d0<<"\n";
    d = d0;
    y = y1+1;
    cout<<"i: "<<i<<" d_0: "<<d0<<"   (x: "<<x1+1<<", y: "<<y<<")\n";
    for(int j=x1+2;j<=x2;j++){
        i++;
        if(d>0){
            d = d + 2*del_y - 2*del_x;
            if(d>0){
                y++;
            }
            cout<<"i: "<<i<<" d_"<<i<<": "<<d<<"   (x: "<<j<<", y: "<< y<<")\n";
        }else{
            d = d + 2*del_y;
            if(d>0){
                y++;
            }
            cout<<"i: "<<i<<" d_"<<i<<": "<<d<<"   (x: "<<j<<", y: "<<y<<")\n";
        }
       
    }
}
