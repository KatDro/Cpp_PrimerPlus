//golf.h

const int Len = 40;
struct golf
{
    char fullname [Len];
    int handicap;
};

//set structure golf properties base on
//arguments of function
void setgolf (golf & g, const char * name, int hc);

//set structure golf properties base on
//input stream
void setgolf (golf & g);

//set handicap in structure golf base on
//arguments of function
void handicap (golf & g, int hc);

//set handicap in structure golf base on
//input stream
void handicap (golf & g);

//show properties of golf structure
void showgolf (const golf & g);
