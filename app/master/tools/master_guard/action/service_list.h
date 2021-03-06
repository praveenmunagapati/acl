/**
 * Copyright (C) 2015-2018 IQIYI
 * All rights reserved.
 *
 * AUTHOR(S)
 *   Zheng Shuxin
 *   E-mail: zhengshuxin@qiyi.com
 * 
 * VERSION
 *   Wed 03 Jan 2018 05:36:30 PM CST
 */

#pragma once

class service_list
{
public:
	service_list(const char* master_ctld, const char* guard_manager,
		int conn_timeout = 10, int rw_timeout = 10);
	~service_list(void) {}

	bool run(void);

private:
	acl::string master_ctld_;
	acl::string guard_manager_;
	int  conn_timeout_;
	int  rw_timeout_;

	bool report(const acl::string& body);
	bool tcp_report(const acl::string& body);
	bool udp_report(const acl::string& body);
};
