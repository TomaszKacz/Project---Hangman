#pragma once
#define CURL_STATICLIB
#include <stdio.h>
#include <curl/curl.h>
#include "json.hpp"
#include <cstring>
#include <algorithm>
#include<string>
#include <msclr\marshal_cppstd.h>
using json = nlohmann::json;
using namespace System;
using namespace std;

class Slowa
{
public:
	Slowa();

	int bledy = 0;
	string doc, wisielec;

	static size_t WriteCallback(void* contents, size_t size, size_t nmemb, void* readBuffer);
	string LosujSlowo();
	void tworzeniegwiazd();
private:
	int sprawdzenie = 0;	
};

