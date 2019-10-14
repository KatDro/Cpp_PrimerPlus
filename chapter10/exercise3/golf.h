#ifndef GOLF_H
#define GOLF_H

class Golf
{
private:
    static const int LEN = 40;
    char fullname [LEN];
    int handicap;
public:
    Golf(const char *fn, int hc); // constructor not interactive
    Golf() {};
    int setgolf(); // interactive
    void hand(int hc);
    void showgolf() const;
};
#endif // HOLF_H
