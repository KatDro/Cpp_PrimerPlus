#ifndef MOVE_H
#define MOVE_H

class Move
{
private:
    double x;
    double y;
public:
    Move(double a = 0, double b = 0); // set x on a, y on b
    showmove () const; // show value of x and y
    Move add (const Move & m);
    //adds x of object m to x of invoking object to get new x,
    // adds y of object m to x of invoking object to get new y,
    // creates new object and initialized to new x and y and returns it
    reset (double a = 0, double b = 0); // set x on a value and
};
#endif // MOVE_H
