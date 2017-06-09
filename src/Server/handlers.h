/**
  * @file
  * @brief Module for server handlers
  */
#ifndef HANDLERS_H
#define HANDLERS_H

#include <request.h>
#include <response.h>
#include <vector>
#include <sqlite3.h>

typedef void (*RequestHandler)(Request * req, Response * res, sqlite3* db);

typedef struct {
    string type;
    RequestHandler handler;
} CommandHandler;

void processRequest(Request * req, Response * res, vector<CommandHandler> handlers);
RequestHandler getCommandRequestHandler(vector<CommandHandler> handlers, const char * type);

void tasksHandler(Request * req, Response * res, sqlite3* db);
void studentsHandler(Request * req, Response * res, sqlite3* db);
void topicsHandler(Request * req, Response * res, sqlite3* db);

#endif // HANDLERS_H
