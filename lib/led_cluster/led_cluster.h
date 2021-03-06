#ifndef LED_CLUSTER_H
#define LED_CLUSTER_H

#include <led.h>

class LedCluster
{
private:
    Led *green1;
    Led *green2;
    Led *green3;
    Led *yellow1;
    Led *yellow2;
    Led *yellow3;
    Led *red1;
    Led *red2;
    Led *red3;

public:
    LedCluster(int number);
    void led_cluster_state_machine(int dist);
    void init(int nr);

    int dist_level;
};

#endif // LED_CLUSTER_H