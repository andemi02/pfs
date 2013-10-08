#ifndef PHS_H_INCLUDED
#define PHS_H_INCLUDED

#define REGISTRY_KEY_PCLOUD    "SOFTWARE\\PCloud\\pCloud"

#ifndef debug
#ifdef DEBUG
#   define debug(...) do {FILE *d=fopen("/tmp/pfs_srv.log", "a"); if (!d) break; fprintf(d, __VA_ARGS__); fclose(d);} while (0)
//#   define debug(...) do {printf(__VA_ARGS__);} while (0)
#else
#   define debug(...)
#endif
#endif

typedef struct
{
    const char * auth;
    const char * username;
    const char * pass;
    int use_ssl;
    size_t cache_size;
    size_t page_size;
}pfs_params;

#endif // PHS_H_INCLUDED