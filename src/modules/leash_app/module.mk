MODULE_COMMAND		= $(notdir $(shell pwd))

SRCS			= main.cpp mode_class.cpp

CXXFLAGS		+= -std=c++11 -Dmain=${MODULE_COMMAND}_main