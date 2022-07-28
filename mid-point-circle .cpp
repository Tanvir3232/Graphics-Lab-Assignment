
#include <iostream>

using namespace std;

int main()
{
    double r,x0,y0,p,x,y,i=0,update_p,p0;
    cout<<"radius: ";
    cin>>r;
    cout<<"x0: ";
    cin>>x0;
    cout<<"y0: ";
    cin>>y0;
    p0 = 1- r;
    x = x0+1;
    y = y0;
    cout<<"Mid Point Circle Output: \n\n";
    cout<<"i: "<<0<<"  p_"<<0<<": "<<p0<<"   (x : "<<x<<", y: "<<y<<")"<<"\n";
    update_p = p0;
    while(x != y){
        
        if(update_p<0){
            p = update_p + 2 * x + 1;  
            update_p = p;
            if(update_p>0){
                y=y-1;
            }
            
            
        }else{
            p = update_p + 2 * x - 2 * y + 1;
            update_p = p;
            if(update_p>0){
                y=y-1;
            }
           
        }
        x++;
        cout<<"i: "<<i<<"  p_"<<i<<": "<<update_p<<"   (x : "<<x<<", y: "<<y<<")"<<"\n";
        
    }
}