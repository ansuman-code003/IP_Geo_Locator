#include <iostream>
#include <cstdio>
#include <curl/curl.h>
#include <gtk/gtk.h>

using namespace std;

static void request(GtkWidget *button, gpointer *pointer){
	printf("Hello\n");
}

int main(){
	char rstr[500];
	CURL *curl = curl_easy_init();
	CURLcode res;
	curl_easy_setopt(curl,CURLOPT_URL,"https://ipinfo.io/json");
	res =  curl_easy_perform(curl);
	sprintf(rstr, "");


	// printf("%s\n",res);
	return 0;
}
