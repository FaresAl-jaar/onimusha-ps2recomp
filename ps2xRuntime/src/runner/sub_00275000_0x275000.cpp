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

// Function: sub_00275000
// Address: 0x275000 - 0x275040
void sub_00275000_0x275000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275000_0x275000");
#endif

    ctx->pc = 0x275000u;

    // 0x275000: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x275000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x275004: 0xa086000c  sb          $a2, 0xC($a0)
    ctx->pc = 0x275004u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 6));
    // 0x275008: 0x9082000c  lbu         $v0, 0xC($a0)
    ctx->pc = 0x275008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x27500c: 0xa082000d  sb          $v0, 0xD($a0)
    ctx->pc = 0x27500cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x275010: 0xa080000e  sb          $zero, 0xE($a0)
    ctx->pc = 0x275010u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x275014: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x275014u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x275018: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x275018u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x27501c: 0xfc800018  sd          $zero, 0x18($a0)
    ctx->pc = 0x27501cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 0));
    // 0x275020: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x275020u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x275024: 0xfc800028  sd          $zero, 0x28($a0)
    ctx->pc = 0x275024u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 0));
    // 0x275028: 0xfc800020  sd          $zero, 0x20($a0)
    ctx->pc = 0x275028u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 0));
    // 0x27502c: 0xfc800038  sd          $zero, 0x38($a0)
    ctx->pc = 0x27502cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 0));
    // 0x275030: 0xfc800030  sd          $zero, 0x30($a0)
    ctx->pc = 0x275030u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 0));
    // 0x275034: 0xfc800048  sd          $zero, 0x48($a0)
    ctx->pc = 0x275034u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 0));
    // 0x275038: 0x809d284  j           func_274A10
    ctx->pc = 0x275038u;
    ctx->pc = 0x27503Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275038u;
    // 0x27503c: 0xfc800040  sd          $zero, 0x40($a0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274A10u;
    sub_00274A10_0x274a10(rdram, ctx, runtime); return;
    ctx->pc = 0x275040u;
}
