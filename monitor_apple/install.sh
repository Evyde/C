#!/bin/sh

echo "这个安装脚本会自动帮您安装好此软件"
echo "----------------------------------"

echo "正在更新/安装必要软件包......"
apt-get update >>install.log
apt-get -y upgrade >>install.log
apt-get -y install cmake gcc g++ >>install.log
echo "----------------------------------"
echo "正在编译 wiringPi......."

cd server/wiringPi
./build >>install.log

cd ../..

echo "wiringPi编译/安装成功"
echo "---------------------"
echo "检测运行环境......"

cmake . >>install.log
echo "正在编译......"
make >>install.log
echo "正在安装......"
cp monitor_apple /bin/
echo "成功，运行命令monitor_apple即可！"
