#include "Mongo.h"
#include "Curl.h"

int main()
{
Curl c;
Struct product
{
 Std::string title;
Std::string brand;
Std::string size;
String title;
}
string page = c.readUrl(“https://www.amazon.in/s?bbn=1983518031&rh=n%3A1571283031%2Cn%3A%211571284031%2Cn%3A1983396031%2Cn%3A1983518031%2Cp_72%3A1318476031%2Cp_89%3ANike&dc&fst=as%3Aoff&qid=1567152789&rnid=3837712031&ref=sr_in_n_p_89_15”);
std::vector<string> divs = parseAll(page,”class=\"a-row a-spacing-micro\"(.*?)</span>”);
mongo g;

for(auto div:divs)
{
	Product p;
	
	p.title = parse(dev, “class=\"a-row a-spacing-micro\"(.*?)\”(.*?)</span>”);
p.brand= parse(dev, “brand\"(.*?)\”(.*?)\”brand”);
g.insert(p);
}

}


Std::string Parse(std::string& File,std::regex re)
{
	smatch match;
	auto result;
	if (regex_search(testInput, match, regEx))
	{
    		result= match[1].str();
	}
	return result;

}
std::vector<string> ParseAll(std::string& File,std::regex re)
{
	smatch match;
	auto result;
	if (regex_search(testInput, match, regEx))
	{
    		result= match;
	}
	return result[];

}



