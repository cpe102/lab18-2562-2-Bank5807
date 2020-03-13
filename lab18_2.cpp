#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1,Rect *R2){
    double w_overlap, h_overlap, result;
    w_overlap = min(R1->x+R1->w,R2->x+R2->w) - max(R1->x,R2->x);
    h_overlap = min(R1->y+R1->h,R2->y+R2->h) - max(R1->y,R2->y);
    result = w_overlap * h_overlap;
    return result;
}
int main(){
    Rect R1,R2;
    Rect *p = &R1;
    Rect *q = &R2;
	cout << "Please input Rect 1 (x y w h): ";
	cin >> p->x >> p->y >> p->w >> p->h;
	cout << "Please input Rect 2 (x y w h): ";
	cin >> q->x >> q->y >> q->w >> q->h;

	cout << "Area R1 = " << p->w*p->h << ".\n";
	cout << "Area R2 = " << q->w*q->h << ".\n";

	cout << "Overlap area = " << overlap(p,q);
	return 0;
}