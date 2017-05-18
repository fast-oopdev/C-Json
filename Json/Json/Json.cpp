// Json.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "json\json.h"

#pragma comment(lib,"json_vc71_libmtd.lib")

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
int main()
{		//1.���ַ�������json
	const char* str = "{\"uploadid\": \"UP000000\",\"code\": 100,\"msg\": \"\",\"files\": \"\"}";
	Json::Reader reader;
	Json::Value root;
	if (reader.parse(str, root))    // reader��Json�ַ���������root��root������Json��������Ԫ��  
	{
		printf("--------------���ַ�����ȡJSON---------------\n");
		std::string upload_id = root["uploadid"].asString();  // ���ʽڵ㣬upload_id = "UP000000"  
		int code = root["code"].asInt();                      // ���ʽڵ㣬code = 100 

		printf("upload_id : %s\ncode : %d \n", upload_id.c_str(), code);
	}
    return 0;
}

