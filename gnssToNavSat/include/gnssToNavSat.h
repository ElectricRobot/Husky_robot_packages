/*
 * gnssToNavSat.h
 *
 *  Created on: Jul 12, 2016
 *      Author: utari
 */

#ifndef GNSSTONAVSAT_INCLUDE_GNSSTONAVSAT_H_
#define GNSSTONAVSAT_INCLUDE_GNSSTONAVSAT_H_

#include <ros/ros.h>
#include <custom_msgs/gnssSample.h>
#include <sensor_msgs/NavSatFix.h>

class GnssToNavSat
{
private:
	ros::NodeHandle nh_;
	ros::Publisher navSat_pub_;
	ros::Subscriber device_sub_;

	custom_msgs::gnssSample device_msg_;
	sensor_msgs::NavSatFix gps_msg_;
public:
	GnssToNavSat();
	~GnssToNavSat();
	void gnss_cb_(const custom_msgs::gnssSample& msg);
};



#endif /* GNSSTONAVSAT_INCLUDE_GNSSTONAVSAT_H_ */
