//
// Created by epiphyllum on 22/04/09.
//

#pragma once
#ifndef HACKNETOS_HACKNETAPPLICATION_H
#define HACKNETOS_HACKNETAPPLICATION_H

#include "HackEmail.h"
#include "HackDirectory.h"
#include "HackServer.h"
#include "InputService.h"
#include "BackgroundTasks/HackBackgroundTask.h"
#include "HackCommand.h"

class HacknetApplication
{
    bool ending = false;
    int gameStatus = 0;
    bool doRender = true;
    HackDirectory *CurrentDir;
    HackServer *CurrentConnected;
    HackServer *localSever;
    int missionId{};
    std::vector<std::string> commandBuffer{};
    InputService inputService{};
    std::vector<HackBackgroundTask *> backgroundTasks{};
    std::vector<HackServer> serverList{};

public:
    void Exec();

    void Draw();

    void lsDir(std::stringstream &);

    void rmSubDir();

    void cdDir(std::stringstream &dirName);

    void rmDir(const std::string &dirName);

    void cdParentDir();

    void cdRootDir();

    void namp();

    void command_ps(std::stringstream &);

    void command_kill(std::stringstream &input);

    void command_help(std::stringstream &);

    void command_clear(std::stringstream &);

    void connect(const std::string& ip);

    void Scan();

    void porkHack();

    void processCommand(const std::string &command);

    bool isEnding() const;

    void setEnding(bool ending);

    void rm(std::stringstream & command);

    void cd(std::stringstream & command);

    void dc();

    void mv(std::stringstream &command);

    void scp(std::stringstream &command);


};

#endif //HACKNETOS_HACKNETAPPLICATION_H
