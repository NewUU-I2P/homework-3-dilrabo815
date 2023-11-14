void problemSolution1(float consumed_water) {
    float cost=13;
    if (consumed_water<=30){
        cost=cost+30*0.4;
        if(consumed_water<=50){
            cost=cost+20*0.12;
            if(consumed_water<=60){
                cost=cost+10*1.4;
                if(consumed_water>60){
                    cost=(60-cost)*1.5;
                }
            }
        }
    }
    return cost;
}
