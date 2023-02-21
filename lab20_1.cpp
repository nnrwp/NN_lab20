#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r1, Rect r2){
    double wo = min((r2.x + r2.w),(r1.x + r1.w)) - max(r2.x,r1.x);
    double ho = min(r1.y,r2.y) - max((r2.y - r2.h),(r1.y - r1.h));
    if(wo < 0 || ho < 0) return 0;
    else return wo*ho;
}