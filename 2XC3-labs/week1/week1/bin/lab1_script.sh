#!/bin/bash
x=$pwd
echo "Type the directory you want to go and press enter."
read y
cd $y
rm *.tmp
cd $x


