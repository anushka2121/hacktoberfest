#include<iostream>
using namespace std;
int max(int a,int b,int c,int d){
     if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            return a;
            else 
            return d;
        }
        else if(c>d){
        return c;
        }
        else {
        return d;
        }
    }
    else if(b>c)
    {
        if(b>d)
        return b;
        else {
        return d;
        }
    }
    else {
    if(c>d)
    return c;
    else {
    return d;
    }
    }
    
    
}

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
   int ans=max(a,b,c,d);
   cout<<""<<ans;
   return 0;

}
