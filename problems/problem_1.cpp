void problemSolution1(float consumed_water) {
    float cost = 13;
    if (consumed_water <=30) {
        cost = cost + (consumed_water) * 0.4;
        if ((consumed_water >30)&& (consumed_water<=50)) {
            cost = cost + (consumed_water-30) * 0.12;
            if ((consumed_water >50)&&(consumed_water<= 60)) {
                cost = cost + (consumed_water-50) * 1.4;
                if (consumed_water>60) {
                    cost = cost+(consumed_water-60) * 1.5;
                }
            }
        }
    }

}
