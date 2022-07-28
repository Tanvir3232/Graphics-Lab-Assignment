
#include <iostream>

using namespace std;

int main()
{
    double r,x0,y0,p,x,y;
    cout<<"radius: ";
    cin>>r;
    cout<<"x0: ";
    cin>>x0;
    cout<<"y0: ";
    cin>>y0;
    p = 3 - 2*r;
    x = 0;
    y = r;
    cout<<"p0 : "<<p<<endl;
    cout<<y<<endl;
    cout<<x<<endl;
    cout<<"Bresenham Circle Algorithm Output: \n\n";
    
    cout<<"(x : "<<x<<", y: "<<y<<")  "<<"p_"<<x<<": "<<p<<"\n";
    x =x + 1;
    while(x <= y){
        
       
        if(p>0){
            
            p = p + 4 * ((x-1) - y) + 10;
             y--;
            
        }else{
            
           p = p + 4 * (x-1) + 6;
           
        }
        cout<<"(x : "<<x<<", y: "<<y<<")  "<<"p_"<<x<<": "<<p<<"\n";
        x++;
       
        
    }
}