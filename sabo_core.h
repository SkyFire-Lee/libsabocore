
/*
 * Copyright (C) 2016-2017  Alex(zchao1995@gmail.com)
 */

#ifndef SABO_CORE_H
#define SABO_CORE_H

#define   SABO_DONE      0
#define   SABO_TLE       2
#define   SABO_MLE       3
#define   SABO_RE        5
#define   SABO_RE_DBZ    6
#define   SABO_SYSERR    8
#define   SABO_MC        10

#define   SABO_C_CPP     1
#define   SABO_JAVA      0

typedef struct {

    const char *code_bin_file;
    const char *executor;
    

    int data_in_fd;
    int user_out_fd;

    int time_limits;
    int memory_limits;

    int language; /* FIXME, just for java now */

    const char *classpath; /* FIXME, for java class path */

} sabo_ctx_t;

typedef struct {
    int time_used;
    int memory_used;
    int judge_flag;

} sabo_res_t;


const char *sabo_core_run(sabo_ctx_t *ctx, sabo_res_t *info);
#endif
