/*
 * Dispatcher.cpp
 *
 *  Created on: Sep 8, 2019
 *      Author: keith
 */

//TODO fill in content

#import "../includes/dispatcher.h"

PCB Dispatcher::get_from_CPU() {

	PCB invalid_job;
	PCB valid_job;
	if(this->isValidJobOnCPU()) {
		valid_job = cpu->get_COPY_of_Current_Process();
		this->put_on_CPU(invalid_job);
		return valid_job;
	}

	return invalid_job;
}

void Dispatcher::put_on_CPU(PCB  &process) {
	cpu->get_process_off_core();
	cpu->put_process_on_core(process);
}

bool Dispatcher::isValidJobOnCPU() {
	PCB process = cpu->get_COPY_of_Current_Process();
	if (process.isEmpty()) {
		is_valid_job_on_cpu = false;
		return false;
	}
	is_valid_job_on_cpu = true;
	return true;
}
