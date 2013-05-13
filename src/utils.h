#ifndef UTILSH
#define UTILSH

#define UNUSED(x) (void)(x)

char SBUF[MAX_PATH * 2];

char * env_plus_path(char * varname, char * path) {
    memset(SBUF, 0, sizeof(SBUF));
    size_t ret = GetEnvironmentVariable(varname, SBUF, sizeof(SBUF));
    strncat(SBUF, path, sizeof(SBUF) - ret);
    return SBUF;
}

char * progfiles_path(char * path) {
    return env_plus_path("ProgramFiles", path);
}

char * system_path(char * path) {
    return env_plus_path("systemroot", path);
}

#endif