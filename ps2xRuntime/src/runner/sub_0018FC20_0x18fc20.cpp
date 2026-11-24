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

// Function: sub_0018FC20
// Address: 0x18fc20 - 0x18fc44
void sub_0018FC20_0x18fc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018FC20_0x18fc20");
#endif

    ctx->pc = 0x18fc20u;

    // 0x18fc20: 0xc4cc0000  lwc1        $f12, 0x0($a2)
    ctx->pc = 0x18fc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18fc24: 0xc4cd0004  lwc1        $f13, 0x4($a2)
    ctx->pc = 0x18fc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x18fc28: 0xc4ce0008  lwc1        $f14, 0x8($a2)
    ctx->pc = 0x18fc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x18fc2c: 0xc4ef0000  lwc1        $f15, 0x0($a3)
    ctx->pc = 0x18fc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x18fc30: 0xc4f00004  lwc1        $f16, 0x4($a3)
    ctx->pc = 0x18fc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x18fc34: 0xc4f10008  lwc1        $f17, 0x8($a3)
    ctx->pc = 0x18fc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x18fc38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18fc38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc3c: 0x8063e1c  j           func_18F870
    ctx->pc = 0x18FC3Cu;
    ctx->pc = 0x18FC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FC3Cu;
    // 0x18fc40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F870u;
    sub_0018F870_0x18f870(rdram, ctx, runtime); return;
    ctx->pc = 0x18FC44u;
}
