#include "client/dbclient.h"
#include <iostream>
#include <vector>


Class mongoInsert
{
Mongo()
{
    mongo::DBClientConnection mongo;
    mongo.connect("localhost");
    mongo.dropCollection("TestCollection");
}	
Static Insert(std::vector<mongo::BSONObj> data)
{
mongo.insert("TetCollection", data);
}
}
