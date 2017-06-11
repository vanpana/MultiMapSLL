#include <iostream>
#include "UI/Console.h"
#include "gtest/gtest.h"

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc,argv);
    int assertion = RUN_ALL_TESTS();
    //system("find . -name \"*.gcda\" -print0 | xargs -0 rm");
    //system("find . -name \"*.gcno\" -print0 | xargs -0 rm");

    Repository *repo = new FileRepository("data/bankaccounts.txt");
    //Repository *repo = new Repository();
    Controller *ctrl = new Controller(repo);
    Console *ui = new Console(ctrl);

    ui->runApp();

    delete ui;

    return assertion;
}
