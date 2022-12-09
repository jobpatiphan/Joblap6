#include <iostream>
#include<cmath>

using namespace std;
double deg2rad(double a){
    return a*(M_PI/180);
}
double rad2deg(double b){
    return b*(180/M_PI);
}
double findXComponent(double c, double d, double e, double f){
    double g = c*(cos(e));
    double h = d*(cos(f));
    return g+h;
}
double findYComponent(double i, double j, double k, double m){
    double n = i*(sin(k));
    double o = j*(sin(m));
    return n+o;
}
double pythagoras(double p, double q){
    return sqrt(pow(p,2)+pow(q,2));
}
void showResult(double r, double h){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << r << endl;
    cout << "Direction of the resultant vector (deg) = " << h << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}