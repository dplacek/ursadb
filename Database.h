#pragma once

#include "OnDiskDataset.h"
#include "DatasetBuilder.h"
#include "Query.h"

class Database {
    std::string db_fname;
    int num_datasets;
    std::vector<OnDiskDataset> datasets;
    void compact();

public:
    Database(const std::string &fname);
    void execute(const Query &query, std::vector<std::string> &out);
    void add_dataset(DatasetBuilder &builder);
};
