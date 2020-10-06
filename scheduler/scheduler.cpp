/*
 * scheduler.cpp
 *
 *  Created on: Sep 8, 2019
 *      Author: keith
 */

//TODO fill in content


#include "../includes/scheduler.h"

void Scheduler::add(PCB p) {
	ready_q->push(p);
}

PCB Scheduler::getNext() {
	PCB process;
	process = ready_q->front();
	ready_q->pop();
	return process;
}

bool Scheduler::isEmpty(){
	if (ready_q->size() == 0){
		return true;
	}
	return false;
}

bool Scheduler::time_to_switch_processes(int tick_count, PCB &p) {
	if (p.remaining_cpu_time == 0) {
		return true;
	}

	if (p.isEmpty()) {
		return true;
	}

	return false;
}
