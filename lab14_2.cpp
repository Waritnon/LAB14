#include <iostream>
#include <cmath>
#include<string.h>
using namespace std;
//s : size of painter  x : row  y : collum
const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main(){
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}
void updateImage(bool i[N][M],int s,int x,int y){
    if(s > 1){
        int X = x-s,Y =y-s;
        while(X < x+s){
            i[X][y] = 1;
            i[x][Y] = 1;
            X++;
            Y++;
        }
    }else i[x][y] = 1;
}
void showImage(const bool o[][M]){
    for(int n=0; n < 72;n++){
        cout << '-';
    }
    cout << endl;
    for(int j=0;j < N;j++){
        cout << '|';
        for(int k=0;k < M;k++){
        if(o[k][j]){ 
            cout << '*';
        }
        else cout << " ";
    }
        cout << '|' << endl;
    }
    for(int n=0; n < 72;n++){
        cout << "-" ;
    }
    cout << endl;
}
