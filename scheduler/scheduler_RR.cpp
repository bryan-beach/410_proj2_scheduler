/*
 * SchedulerSTRR.cpp
 *
 *  Created on: Sep 7, 2019
 *      Author: keith
 *
 *      implements round robin scheduling algorithm
 *      pre-emptive
 */

//TODO fill in content


#include "../includes/scheduler_RR.h"

bool Scheduler_RR::time_to_switch_processes(int tick_count, PCB &p) {
	if (p.remaining_cpu_time <= 0) {
		return true;
	}
	if (p.isEmpty()) {
		return true;
	}
	if (time_slice == (tick_count - p.arrival_time)) {
		return true;
	}

	return false;
}

void Scheduler_RR::sort() {

}
