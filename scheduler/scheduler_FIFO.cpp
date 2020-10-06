/*
 * SchedulerSTRR.cpp
 *
 *  Created on: Sep 7, 2019
 *      Author: keith
 *
 *      implements FIFO scheduling algorithm
 *      not pre-emptive
 */

//TODO fill in content


#include "../includes/scheduler_FIFO.h"

bool Scheduler_FIFO::time_to_switch_processes(int tick_count, PCB &p){
	if (p.remaining_cpu_time == 0) {
		return true;
	}

	if (p.isEmpty()) {
		return true;
	}

	return false;
}

void Scheduler_FIFO::sort(){

}
