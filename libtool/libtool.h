#ifndef LIBTOOL_H
#define LIBTOOL_H

#include "libtool_global.h"
#include<iostream>
#include<string>

#include "google/protobuf/message.h"
using namespace std;
//读取配置文件 读取配置选项 #表示注释
bool LIBTOOLSHARED_EXPORT readConfigFile(const QString &file);
//获取配置项value
QString LIBTOOLSHARED_EXPORT getValueByKey(const QString &key);
//获取可执行程序路径
QString LIBTOOLSHARED_EXPORT getRunExecPath();
//重命名文件，复制文件
bool RenameCopyFile(const QString &destfile,const QString &srcfile,int type);
//获取未来某个时间
long LIBTOOLSHARED_EXPORT MakeFutureHourPointSeconds( int hour );

//判断是否到未来某一个时间 格式 hh:mm:ss 11:33:00
bool LIBTOOLSHARED_EXPORT CheckFuctureTime(const QString &time);

//获取一段内存中整型数
int LIBTOOLSHARED_EXPORT NTOH_Int(void const * const bytes);

//url编码
std::string LIBTOOLSHARED_EXPORT UrlEncode(const std::string &URL);
//url解码
std::string LIBTOOLSHARED_EXPORT UrlDecode(const std::string &URL);

//protobuf 编码
int EncodeOneMessage( ::google::protobuf::Message &msg, char buf[], int &size );
int DecodeOneMessage( ::google::protobuf::Message &msg, char buf[], int size );
//protobuf 解码
#endif // LIBTOOL_H
