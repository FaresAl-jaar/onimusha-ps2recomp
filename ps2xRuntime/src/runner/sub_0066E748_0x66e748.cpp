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

// Function: sub_0066E748
// Address: 0x66e748 - 0x66e760
void sub_0066E748_0x66e748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0066E748_0x66e748");
#endif

    ctx->pc = 0x66e748u;

    // 0x66e748: 0x30313045  andi        $s1, $at, 0x3045
    ctx->pc = 0x66e748u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12357);
    // 0x66e74c: 0x31303430  andi        $s0, $t1, 0x3430
    ctx->pc = 0x66e74cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)13360);
    // 0x66e750: 0x6163203a  daddi       $v1, $t3, 0x203A
    ctx->pc = 0x66e750u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8250; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
    // 0x66e754: 0x2074276e  addi        $s4, $v1, 0x276E
    ctx->pc = 0x66e754u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)10094, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
    // 0x66e758: 0x61657263  daddi       $a1, $t3, 0x7263
    ctx->pc = 0x66e758u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29283; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x66e75c: 0x50206574  beql        $at, $zero, . + 4 + (0x6574 << 2)
    ctx->pc = 0x66E75Cu;
    {
        const bool branch_taken_0x66e75c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x66e75c) {
            ctx->pc = 0x687D30u;
            return;
        }
    }
    ctx->pc = 0x66E764u;
}
