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



}

float Stats::get_av_response_time() {
	return 0;
}

float Stats::get_av_turnaround_time() {
	return 0;
}

float Stats::get_av_wait_time() {
	return 0;
}

void Stats::calcStats() {

}
