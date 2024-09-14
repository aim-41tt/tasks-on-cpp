#include <iostream>

using namespace std;

int main()
{
    int arrayL[] = {500, 4, 24, 15, 100, 105};
    int legArray;
    
    
    int sum;
    
    for(int i:arrayL){
        sum+=i;
        legArray++;
    }
    
    cout<<"сумма:"<<sum<<endl;
    
    sum = 0;
    
    int count;
    while(count < legArray){
        sum+=arrayL[count];
        count++;
    }
    cout<<"сумма:"<<sum<<endl;
    
    return 0;
}