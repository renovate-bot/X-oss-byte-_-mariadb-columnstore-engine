
#include "S3Storage.h"

using namespace std;

namespace storagemanager
{

S3Storage::S3Storage()
{
}

S3Storage::~S3Storage()
{
}

int S3Storage::getObject(const string &sourceKey, const string &destFile, size_t *size)
{
    return 0;
}

int S3Storage::putObject(const string &sourceFile, const string &destKey)
{
    return 0;
}

void S3Storage::deleteObject(const string &key)
{
}

int S3Storage::copyObject(const string &sourceKey, const string &destKey)
{
    return 0;
}

int S3Storage::exists(const string &key, bool *out)
{
    return 0;
}

}
