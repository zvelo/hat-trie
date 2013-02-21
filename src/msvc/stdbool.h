#ifndef PSTDBOOL_H
# ifdef __cplusplus
    // Do nothing here, everything is already defined.
# else
    typedef int bool;
#   define true (1)
#   define false (0)
# endif
#endif
