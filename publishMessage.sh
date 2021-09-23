#!/bin/bash

mosquitto_pub -h ec2-52-204-51-163.compute-1.amazonaws.com -t $1 -p 1883 -m $2
