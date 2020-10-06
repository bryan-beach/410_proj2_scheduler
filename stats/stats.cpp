/*
 * Stats.cpp
 *
 *  Created on: Sep 10, 2019
 *      Author: keith
 */

//TODO fill in content

#import "../includes/stats.h"

Stats::Stats(std::vector<PCB> &finished_vector) {
	vec = &finished_vector;

	av_wait_time = 0;
	av_turnaround_time = 0;
	av_response_time = 0;
}

void Stats::showAllProcessInfo() {

	std::vector<PCB> stats;
	stats = *vec;
	for (PCB process: stats) {
		printf("Process %d Required CPU time:%d  arrived:%d started:%d finished:%d \n",
				process.process_number, process.required_cpu_time, process.arrival_time, process.start_time, process.finish_time);
	}

}

float Stats::get_av_response_time() {
	std::vector<PCB> stats;
	stats = *vec;
	float av_response = 0;
	for (PCB process: stats) {
		av_response += process.start_time - process.arrival_time;
	}
	return av_response / stats.size();
}

float Stats::get_av_turnaround_time() {
	std::vector<PCB> stats;
		stats = *vec;
		float av_response = 0;
		for (PCB process: stats) {
			av_response += process.finish_time - process.arrival_time;
		}
		return av_response / stats.size();
}

float Stats::get_av_wait_time() {
	std::vector<PCB> stats;
			stats = *vec;
			float av_response = 0;
			for (PCB process: stats) {
				av_response += process.finish_time - process.arrival_time - process.required_cpu_time;
			}
			return av_response / stats.size();
}

void Stats::calcStats() {

}
