#include "Slowa.h"

size_t Slowa::WriteCallback(void* contents, size_t size, size_t nmemb, void* readBuffer)
{
	((string*)readBuffer)->append((char*)contents, size * nmemb);
	return size * nmemb;
}

string Slowa::LosujSlowo()
{
	CURL* curl;
	CURLcode res;
	string readBuffer;
	
	curl_global_init(CURL_GLOBAL_DEFAULT);
	struct curl_slist* headers = NULL;
	headers = curl_slist_append(headers, "Accept: application/json");
	headers = curl_slist_append(headers, "Content-Type: application/json");
	headers = curl_slist_append(headers, "Charset: utf-8");
	curl = curl_easy_init();
	if (!curl)
	{
		fprintf(stderr, "Nie mozna zainicjowac CURL");
		curl_easy_cleanup(curl);
	}
	curl_easy_setopt(curl, CURLOPT_URL, "https://slowa.net/words");
	curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "POST");
	curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
	curl_easy_setopt(curl, CURLOPT_POSTFIELDS, "{\"categories\":\"[\\\"rzeczowniki\\\"]\", \"limit\":1, \"lang\": \"pl\"}");
	curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
	curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
	res = curl_easy_perform(curl);
	if (res != CURLE_OK)
	{
		fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
		curl_easy_cleanup(curl);
	}
	curl_easy_cleanup(curl);
	json jsonData = json::parse(readBuffer);
	return jsonData[0];
}



Slowa::Slowa()
{
	do {
		sprawdzenie = 0;
		doc = LosujSlowo();
		string dostepne_litery = "QAZWSXEDCRFVTGBYHNUJMIKOLP";
		transform(doc.begin(), doc.end(), doc.begin(), ::toupper);
		for (int i = 0; i < doc.length(); i++)
		{
			string litera = string(1, doc.at(i));

			if (strstr(dostepne_litery.c_str(), litera.c_str()) == 0)
			{
				sprawdzenie = 1;
				break;
			}
		}
	} while (sprawdzenie != 0);
}

void Slowa::tworzeniegwiazd()
{
	for (int i = 0; i < doc.length(); i++)
	{
		wisielec = wisielec + "*";
		if (doc.at(i) == ' ')
			wisielec[i] = ' ';
	}
}
