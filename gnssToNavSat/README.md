# ASL Utilities #

This package contains packages that the ASL lab uses to control platforms as well as other projects. This initial README page is under development. **If you wish to work on some of these projects, please fork a project and work on your fork. Submit a pull request in order to apply changes to the team repositories.**

## What is this repository for? ##

* Quick summary
* Version control
* New Project development

### How do I get set up? ###

* Set up ROS. For the initial setup, we'll use [ROS Indigo](http://wiki.ros.org/Indigo/Installation). 
    * Install ros_indigo_desktop_full
* Set up an empty ROS workspace(ROS Indigo). Run the following commands in terminal:
```
    source /opt/ros/indigo/setup.bash
    mkdir ~/asl_wksp/src -p
    cd ~/asl_wksp/src
    catkin_init_workspace
    cd ..
    catkin_make
```

```	
    echo "*****ROS ASL wksp*****" >> ~/.bashrc
    echo "source ~/asl_wksp/devel/setup.bash" >> ~/.bashrc
    source ~/.bashrc
```
### Contribution guidelines ###
* Code development
* Writing tests
* Code review

### Who do I talk to? ###
* Raghavendra Sriram - raghavm@uta.edu
* Rommel Alonzo - rommel.alonzo@mavs.uta.edu

## Other ##
* [Learn Markdown](https://bitbucket.org/tutorials/markdowndemo)
* [Set up a ROS-Eclipse workspace](http://wiki.ros.org/IDEs)
    * Section 2.2