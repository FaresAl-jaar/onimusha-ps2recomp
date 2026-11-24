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

// Function: sub_00126FE8
// Address: 0x126fe8 - 0x12704c
void sub_00126FE8_0x126fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126FE8_0x126fe8");
#endif

    switch (ctx->pc) {
        case 0x127008u: goto label_127008;
        case 0x127018u: goto label_127018;
        default: break;
    }

    ctx->pc = 0x126fe8u;

    // 0x126fe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x126fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x126fec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x126ff0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x126ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x126ff4: 0x8c8f01d4  lw          $t7, 0x1D4($a0)
    ctx->pc = 0x126ff4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x126ff8: 0x15e0000e  bnez        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x126FF8u;
    {
        const bool branch_taken_0x126ff8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126FF8u;
        // 0x126ffc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ff8) {
            ctx->pc = 0x127034u;
            goto label_127034;
        }
    }
    ctx->pc = 0x127000u;
    // 0x127000: 0xc0492fe  jal         func_124BF8
    ctx->pc = 0x127000u;
    SET_GPR_U32(ctx, 31, 0x127008u);
    ctx->pc = 0x127004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127000u;
    // 0x127004: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124BF8u, 0x127000u, 0x127008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127008u;
label_127008:
    // 0x127008: 0xae0201d4  sw          $v0, 0x1D4($s0)
    ctx->pc = 0x127008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
    // 0x12700c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12700Cu;
    {
        const bool branch_taken_0x12700c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12700Cu;
        // 0x127010: 0x240fffff  addiu       $t7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12700c) {
            ctx->pc = 0x127038u;
            goto label_127038;
        }
    }
    ctx->pc = 0x127014u;
    // 0x127014: 0x240f001f  addiu       $t7, $zero, 0x1F
    ctx->pc = 0x127014u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_127018:
    // 0x127018: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x127018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12701c: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x12701cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x127020: 0x0  nop
    ctx->pc = 0x127020u;
    // NOP
    // 0x127024: 0x0  nop
    ctx->pc = 0x127024u;
    // NOP
    // 0x127028: 0x0  nop
    ctx->pc = 0x127028u;
    // NOP
    // 0x12702c: 0x5e1fffa  bgez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12702Cu;
    {
        const bool branch_taken_0x12702c = (GPR_S64(ctx, 15) >= 0);
        ctx->pc = 0x127030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12702Cu;
        // 0x127030: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12702c) {
            ctx->pc = 0x127018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127018;
        }
    }
    ctx->pc = 0x127034u;
label_127034:
    // 0x127034: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x127034u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_127038:
    // 0x127038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12703c: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x12703cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127040: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x127040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127044: 0x3e00008  jr          $ra
    ctx->pc = 0x127044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127044u;
        // 0x127048: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12704Cu;
}
