#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1, Rect *R2){
	double left1 = R1->x;
    double right1 = R1->x + R1->w;
    double top1 = R1->y;
    double bottom1 = R1->y - R1->h;

    double left2 = R2->x;
    double right2 = R2->x + R2->w;
    double top2 = R2->y;
    double bottom2 = R2->y - R2->h;

    double overlapLeft = max(left1, left2);
    double overlapRight = min(right1, right2);
    double overlapTop = min(top1, top2);
    double overlapBottom = max(bottom1, bottom2);

    double overlapWidth = overlapRight - overlapLeft;
    double overlapHeight = overlapTop - overlapBottom;

    if (overlapWidth <= 0 || overlapHeight <= 0){
        return 0;
    }

    return overlapWidth * overlapHeight;

}
