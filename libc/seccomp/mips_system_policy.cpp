// Autogenerated file - edit at your peril!!

#include <linux/filter.h>
#include <errno.h>

#include "seccomp_bpfs.h"
const sock_filter mips_system_filter[] = {
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4001, 0, 108),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4128, 53, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4063, 27, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4036, 13, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4023, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4010, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4008, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4007, 101, 100), //exit|fork|read|write|open|close
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4009, 100, 99), //creat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4019, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4013, 98, 97), //unlink|execve|chdir
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4022, 97, 96), //lseek|getpid|mount
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4033, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4026, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4025, 94, 93), //setuid|getuid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4027, 93, 92), //ptrace
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4034, 92, 91), //access
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4054, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4045, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4041, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4040, 88, 87), //sync|kill|rename|mkdir
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4044, 87, 86), //dup|pipe|times
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4049, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4048, 85, 84), //brk|setgid|getgid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4053, 84, 83), //geteuid|getegid|acct|umount2
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4060, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4057, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4056, 81, 80), //ioctl|fcntl
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4058, 80, 79), //setpgid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4062, 79, 78), //umask|chroot
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4094, 13, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4085, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4070, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4066, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4065, 74, 73), //dup2|getppid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4068, 73, 72), //setsid|sigaction
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4074, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4072, 71, 70), //setreuid|setregid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4082, 70, 69), //sethostname|setrlimit|getrlimit|getrusage|gettimeofday|settimeofday|getgroups|setgroups
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4090, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4088, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4086, 67, 66), //readlink
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4089, 66, 65), //reboot
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4093, 65, 64), //mmap|munmap|truncate
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4116, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4114, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4103, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4098, 61, 60), //fchmod|fchown|getpriority|setpriority
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4106, 60, 59), //syslog|setitimer|getitimer
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4115, 59, 58), //wait4
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4124, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4118, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4117, 56, 55), //sysinfo
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4123, 55, 54), //fsync|sigreturn|clone|setdomainname|uname
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4126, 54, 53), //adjtimex|mprotect
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4222, 27, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4176, 13, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4151, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4136, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4131, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4130, 48, 47), //init_module|delete_module
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4134, 47, 46), //quotactl|getpgid|fchdir
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4138, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4137, 45, 44), //personality
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4148, 44, 43), //setfsuid|setfsgid|_llseek|getdents|_newselect|flock|msync|readv|writev|cacheflush
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4169, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4154, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4153, 41, 40), //getsid|fdatasync
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4168, 40, 39), //mlock|munlock|mlockall|munlockall|sched_setparam|sched_getparam|sched_setscheduler|sched_getscheduler|sched_yield|sched_get_priority_max|sched_get_priority_min|sched_rr_get_interval|nanosleep|mremap
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4175, 39, 38), //bind|connect|getpeername|getsockname|getsockopt|listen
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4203, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4188, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4179, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4178, 35, 34), //recvfrom|recvmsg
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4187, 34, 33), //sendmsg|sendto|setsockopt|shutdown|socket|socketpair|setresuid|getresuid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4190, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4189, 32, 31), //poll
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4202, 31, 30), //setresgid|getresgid|prctl|rt_sigreturn|rt_sigaction|rt_sigprocmask|rt_sigpending|rt_sigtimedwait|rt_sigqueueinfo|rt_sigsuspend|pread64|pwrite64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4217, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4210, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4208, 28, 27), //getcwd|capget|capset|sigaltstack|sendfile
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4216, 27, 26), //mmap2|truncate64|ftruncate64|stat64|lstat64|fstat64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4221, 26, 25), //mincore|madvise|getdents64|fcntl64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4316, 13, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4288, 7, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4278, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4248, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4247, 21, 20), //gettid|readahead|setxattr|lsetxattr|fsetxattr|getxattr|lgetxattr|fgetxattr|listxattr|llistxattr|flistxattr|removexattr|lremovexattr|fremovexattr|tkill|sendfile64|futex|sched_setaffinity|sched_getaffinity|io_setup|io_destroy|io_getevents|io_submit|io_cancel|exit_group
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4267, 20, 19), //epoll_create|epoll_ctl|epoll_wait|remap_file_pages|set_tid_address|restart_syscall|fadvise64|statfs64|fstatfs64|timer_create|timer_settime|timer_gettime|timer_getoverrun|timer_delete|clock_settime|clock_gettime|clock_getres|clock_nanosleep|tgkill
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4283, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4279, 18, 17), //waitid
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4287, 17, 16), //set_thread_area|inotify_init|inotify_add_watch|inotify_rm_watch
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4312, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4293, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4292, 14, 13), //openat|mkdirat|mknodat|fchownat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4308, 13, 12), //fstatat64|unlinkat|renameat|linkat|symlinkat|readlinkat|fchmodat|faccessat|pselect6|ppoll|unshare|splice|sync_file_range|tee|vmsplice
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4314, 12, 11), //getcpu|epoll_pwait
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4341, 5, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4338, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4319, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4317, 8, 7), //utimensat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4336, 7, 6), //eventfd|fallocate|timerfd_create|timerfd_gettime|timerfd_settime|signalfd4|eventfd2|epoll_create1|dup3|pipe2|inotify_init1|preadv|pwritev|rt_tgsigqueueinfo|perf_event_open|accept4|recvmmsg
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4339, 6, 5), //prlimit64
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4359, 3, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4349, 1, 0),
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4347, 3, 2), //clock_adjtime|syncfs|sendmmsg|setns|process_vm_readv|process_vm_writev
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4357, 2, 1), //sched_setattr|sched_getattr|renameat2|seccomp|getrandom|memfd_create|bpf|execveat
BPF_JUMP(BPF_JMP|BPF_JGE|BPF_K, 4363, 1, 0), //mlock2|copy_file_range|preadv2|pwritev2
BPF_STMT(BPF_RET|BPF_K, SECCOMP_RET_ALLOW),
};

const size_t mips_system_filter_size = sizeof(mips_system_filter) / sizeof(struct sock_filter);
