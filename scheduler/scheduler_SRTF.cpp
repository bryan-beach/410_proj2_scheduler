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
	if (preemptive) {
		sort();
	}

	if (p.remaining_cpu_time > ready_q->front().remaining_cpu_time) {
		return true;
	}

	if (p.remaining_cpu_time == 0) {
		return true;
	}

	if (p.isEmpty()) {
		return true;
	}

	return false;
}

void Scheduler_SRTF::sort() {

	std::vector<PCB> sort_vec;

	while(ready_q->empty() == false) {
		sort_vec.push_back(ready_q->front());
		ready_q->pop();
	}

	std::sort(sort_vec.begin(), sort_vec.end(), [](const auto& lhs, const auto& rhs){
				return lhs.remaining_cpu_time < rhs.remaining_cpu_time;
	});

	for(int i = 0; i < sort_vec.size(); i++)
	{   ready_q->push(sort_vec[i]);
	}
}
