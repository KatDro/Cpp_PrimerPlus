#ifndef PLORG_H
#define PLORG_H

class Plorg
{
private:
    static const int NAME = 19;
    char name [NAME];
    int sat;
public:
    Plorg (const char n[] = "Plorga");
    void satiety (int s);
    void show () const;
};

#endif // PLORG_H
