
#include <iostream>
#include <string>
#include <curl/curl.h>
Class curl 
{
	Curl ()
	{
		curl = curl_easy_init();
	}
	~curl
	{
		curl_easy_cleanup(curl);
	}
String readUrl(url)
{
	if(curl) {


		curl_easy_setopt(curl, CURLOPT_URL, url);


		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);


		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);


		res = curl_easy_perform(curl);
	}



	return  readBuffer;
}
Private:
CURL *curl;
CURLcode res;
std::string readBuffer;
static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)


{

((std::string*)userp)->append((char*)contents, size * nmemb);


return size * nmemb;


}

};
