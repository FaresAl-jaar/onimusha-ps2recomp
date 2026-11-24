#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0066AE78
// Address: 0x66ae78 - 0x66ae90
void sub_0066AE78_0x66ae78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0066AE78_0x66ae78");
#endif

    ctx->pc = 0x66ae78u;

    // 0x66ae78: 0x31343045  andi        $s4, $t1, 0x3045
    ctx->pc = 0x66ae78u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)12357);
    // 0x66ae7c: 0x30353230  andi        $s5, $at, 0x3230
    ctx->pc = 0x66ae7cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12848);
    // 0x66ae80: 0x64612031  daddiu      $at, $v1, 0x2031
    ctx->pc = 0x66ae80u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)8241);
    // 0x66ae84: 0x646a7378  daddiu      $t2, $v1, 0x7378
    ctx->pc = 0x66ae84u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29560);
    // 0x66ae88: 0x6365645f  daddi       $a1, $k1, 0x645F
    ctx->pc = 0x66ae88u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25695; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x66ae8c: 0x5f65646f  .word       0x5F65646F                   # bgtzl       $k1, . + 4 + (0x646F << 2) # 00050000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x66AE8Cu;
    {
        const bool branch_taken_0x66ae8c = (GPR_S64(ctx, 27) > 0);
        if (branch_taken_0x66ae8c) {
            ctx->pc = 0x68404Cu;
            return;
        }
    }
    ctx->pc = 0x66AE94u;
}
