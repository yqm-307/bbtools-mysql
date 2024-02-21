/**
 * @file mysqlconn.hpp
 * @author yangqingmiao
 * @brief mysql连接而
 * @version 0.1
 * @date 2024-02-21
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <mysql/mysql.h>
#include <event2/event.h>
#include <bbt/base/net/interface/IDBConnection.hpp>

namespace bbt::database::mysql
{

class Connection
{
public:
    Connection(event_base* io_ctx);
    ~Connection();
};

}