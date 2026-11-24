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

// Function: sub_0066EEC8
// Address: 0x66eec8 - 0x66eee4
void sub_0066EEC8_0x66eec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0066EEC8_0x66eec8");
#endif

    ctx->pc = 0x66eec8u;

    // 0x66eec8: 0x30313045  andi        $s1, $at, 0x3045
    ctx->pc = 0x66eec8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12357);
    // 0x66eecc: 0x31303430  andi        $s0, $t1, 0x3430
    ctx->pc = 0x66eeccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)13360);
    // 0x66eed0: 0x6163203a  daddi       $v1, $t3, 0x203A
    ctx->pc = 0x66eed0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8250; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
    // 0x66eed4: 0x2074276e  addi        $s4, $v1, 0x276E
    ctx->pc = 0x66eed4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)10094, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
    // 0x66eed8: 0x61657263  daddi       $a1, $t3, 0x7263
    ctx->pc = 0x66eed8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29283; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x66eedc: 0x53206574  beql        $t9, $zero, . + 4 + (0x6574 << 2)
    ctx->pc = 0x66EEDCu;
    {
        const bool branch_taken_0x66eedc = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        if (branch_taken_0x66eedc) {
            ctx->pc = 0x66EEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x66EEDCu;
            // 0x66eee0: 0x6f20584a  ldr         $zero, 0x584A($t9) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 25), 22602); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x6884B0u;
            return;
        }
    }
    ctx->pc = 0x66EEE4u;
}
