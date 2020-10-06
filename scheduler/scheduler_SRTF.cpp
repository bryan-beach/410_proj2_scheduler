/*
 * SchedulerSRTF.cpp
 *
 *  Created on: Sep 10, 2019
 *      Author: keith
 *
 *      implements shortest remaining time first scheduling algorithm
 *     pre-emptive
 */

//TODO fill in content

#include "../includes/scheduler_SRTF.h"
#include <algorithm>

bool Scheduler_SRTF::time_to_switch_processes(int tick_count, PCB &p) {
	if (p.remaining_cpu_time == 0) {
		return true;
	}

	if (p.isEmpty()) {
		return true;
	}

	return false;
}

void Scheduler_SRTF::sort() {
	//std::sort(ready_q->front(), ready_q->back(), [](const auto& lhs, const auto& rhs){
	//			return lhs.remaining_cpu_time < rhs.remaining_cpu_time;
	//		});
}
