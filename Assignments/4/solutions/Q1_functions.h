struct distance
{
    int kms;
    int m;
};
struct distance d1, d2;

void displayDistance(char *mess, struct distance d);

void getDistanceData();

void displayMenu();

struct distance addDist();

struct distance subDist();
