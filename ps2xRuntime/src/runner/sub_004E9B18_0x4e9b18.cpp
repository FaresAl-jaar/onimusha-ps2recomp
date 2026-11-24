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

// Function: sub_004E9B18
// Address: 0x4e9b18 - 0x4e9b48
void sub_004E9B18_0x4e9b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9B18_0x4e9b18");
#endif

    ctx->pc = 0x4e9b18u;

    // 0x4e9b18: 0x1f1f1f1e  .word       0x1F1F1F1E                   # bgtz        $t8, . + 4 + (0x1F1E << 2) # 001F0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E9B18u;
    {
        const bool branch_taken_0x4e9b18 = (GPR_S64(ctx, 24) > 0);
        ctx->pc = 0x4E9B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9B18u;
        // 0x4e9b1c: 0x20  add         $zero, $zero, $zero (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9b18) {
            ctx->pc = 0x4F1794u;
            return;
        }
    }
    ctx->pc = 0x4E9B20u;
    // 0x4e9b20: 0x2221  .word       0x00002221                   # addu        $a0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e9b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
    // 0x4e9b24: 0x0  nop
    ctx->pc = 0x4e9b24u;
    // NOP
    // 0x4e9b28: 0x33333332  andi        $s3, $t9, 0x3332
    ctx->pc = 0x4e9b28u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)13106);
    // 0x4e9b2c: 0x0  nop
    ctx->pc = 0x4e9b2cu;
    // NOP
    // 0x4e9b30: 0x0  nop
    ctx->pc = 0x4e9b30u;
    // NOP
    // 0x4e9b34: 0x0  nop
    ctx->pc = 0x4e9b34u;
    // NOP
    // 0x4e9b38: 0x0  nop
    ctx->pc = 0x4e9b38u;
    // NOP
    // 0x4e9b3c: 0x0  nop
    ctx->pc = 0x4e9b3cu;
    // NOP
    // 0x4e9b40: 0x1ff0022  sub         $zero, $t7, $ra
    ctx->pc = 0x4e9b40u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 15), GPR_U32(ctx, 31), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
    // 0x4e9b44: 0x22300eb  .word       0x022300EB                   # sltu        $zero, $s1, $v1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e9b44u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    ctx->pc = 0x4e9b48u;
}
