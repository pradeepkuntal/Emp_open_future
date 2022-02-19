
#include "..\Header\Helper.h"

int GetUniqueId()
{
    static int count=1;
    return count++;
}

