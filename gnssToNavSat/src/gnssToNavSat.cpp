#include <gnssToNavSat.h>

GnssToNavSat::GnssToNavSat()
{
	device_sub_ = nh_.subscribe("/mti/sensor/gnssPvt", 1, &GnssToNavSat::gnss_cb_, this);
	navSat_pub_ = nh_.advertise<sensor_msgs::NavSatFix>("/fix",1);
}

GnssToNavSat::~GnssToNavSat()
{

}

void GnssToNavSat::gnss_cb_(const custom_msgs::gnssSample& msg)
{
	gps_msg_.header.frame_id = msg.header.frame_id;
	gps_msg_.header.stamp = msg.header.stamp;
	gps_msg_.header.seq = msg.header.seq;

	gps_msg_.latitude = msg.latitude;
	gps_msg_.longitude = msg.longitude;
	//gps_msg_.position_covariance_type = 0;
	gps_msg_.position_covariance[0] = 9999;
	gps_msg_.position_covariance[4] = 9999;
	gps_msg_.position_covariance[8] = 9999;


	navSat_pub_.publish(gps_msg_);
}

int main(int argc, char** argv)
{
	ros::init(argc,argv,"gnssToNavSat");

	GnssToNavSat msg_convertor;

	//ros::spin();

	while(ros::ok())
	{
		ros::spinOnce();
	}

	return 0;
}
