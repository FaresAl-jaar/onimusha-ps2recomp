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

// Function: sub_0010AC18
// Address: 0x10ac18 - 0x10ace4
void sub_0010AC18_0x10ac18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AC18_0x10ac18");
#endif

    ctx->pc = 0x10ac18u;

    // 0x10ac18: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10ac18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10ac1c: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x10ac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x10ac20: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x10ac20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8208);
    // 0x10ac24: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10ac24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10ac28: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x10ac2c: 0x3c060080  lui         $a2, 0x80
    ctx->pc = 0x10ac2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
    // 0x10ac30: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x10ac30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ac34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10ac34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10ac38: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x10ac38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x10ac3c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x10ac3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x10ac40: 0x8ce3087c  lw          $v1, 0x87C($a3)
    ctx->pc = 0x10ac40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2172)));
    // 0x10ac44: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x10AC44u;
    {
        const bool branch_taken_0x10ac44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC44u;
        // 0x10ac48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac44) {
            ctx->pc = 0x10AC8Cu;
            goto label_10ac8c;
        }
    }
    ctx->pc = 0x10AC4Cu;
    // 0x10ac4c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x10ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x10ac50: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x10ac50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x10ac54: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x10ac54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x10ac58: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x10ac58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x10ac5c: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x10ac5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x10ac60: 0x34423600  ori         $v0, $v0, 0x3600
    ctx->pc = 0x10ac60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13824);
    // 0x10ac64: 0x34631800  ori         $v1, $v1, 0x1800
    ctx->pc = 0x10ac64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6144);
    // 0x10ac68: 0x34841b00  ori         $a0, $a0, 0x1B00
    ctx->pc = 0x10ac68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6912);
    // 0x10ac6c: 0x34a53300  ori         $a1, $a1, 0x3300
    ctx->pc = 0x10ac6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13056);
    // 0x10ac70: 0xace20830  sw          $v0, 0x830($a3)
    ctx->pc = 0x10ac70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2096), GPR_U32(ctx, 2));
    // 0x10ac74: 0xace605a0  sw          $a2, 0x5A0($a3)
    ctx->pc = 0x10ac74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1440), GPR_U32(ctx, 6));
    // 0x10ac78: 0xace305a4  sw          $v1, 0x5A4($a3)
    ctx->pc = 0x10ac78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1444), GPR_U32(ctx, 3));
    // 0x10ac7c: 0xace406e0  sw          $a0, 0x6E0($a3)
    ctx->pc = 0x10ac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1760), GPR_U32(ctx, 4));
    // 0x10ac80: 0xace506e4  sw          $a1, 0x6E4($a3)
    ctx->pc = 0x10ac80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1764), GPR_U32(ctx, 5));
    // 0x10ac84: 0x3e00008  jr          $ra
    ctx->pc = 0x10AC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC84u;
        // 0x10ac88: 0xace00820  sw          $zero, 0x820($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 2080), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AC8Cu;
label_10ac8c:
    // 0x10ac8c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x10AC8Cu;
    {
        const bool branch_taken_0x10ac8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10AC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC8Cu;
        // 0x10ac90: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac8c) {
            ctx->pc = 0x10ACD8u;
            goto label_10acd8;
        }
    }
    ctx->pc = 0x10AC94u;
    // 0x10ac94: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x10ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x10ac98: 0x24e40880  addiu       $a0, $a3, 0x880
    ctx->pc = 0x10ac98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 2176));
    // 0x10ac9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10ac9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10aca0: 0x24e30b80  addiu       $v1, $a3, 0xB80
    ctx->pc = 0x10aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2944));
    // 0x10aca4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x10aca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x10aca8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x10aca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10acac: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x10acacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x10acb0: 0x24e20e80  addiu       $v0, $a3, 0xE80
    ctx->pc = 0x10acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3712));
    // 0x10acb4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x10acb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x10acb8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x10acb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x10acbc: 0xace20830  sw          $v0, 0x830($a3)
    ctx->pc = 0x10acbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2096), GPR_U32(ctx, 2));
    // 0x10acc0: 0xace405a4  sw          $a0, 0x5A4($a3)
    ctx->pc = 0x10acc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1444), GPR_U32(ctx, 4));
    // 0x10acc4: 0xace306e4  sw          $v1, 0x6E4($a3)
    ctx->pc = 0x10acc4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1764), GPR_U32(ctx, 3));
    // 0x10acc8: 0xace00820  sw          $zero, 0x820($a3)
    ctx->pc = 0x10acc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2080), GPR_U32(ctx, 0));
    // 0x10accc: 0xace005a0  sw          $zero, 0x5A0($a3)
    ctx->pc = 0x10acccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1440), GPR_U32(ctx, 0));
    // 0x10acd0: 0x3e00008  jr          $ra
    ctx->pc = 0x10ACD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACD0u;
        // 0x10acd4: 0xace006e0  sw          $zero, 0x6E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1760), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ACD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ACD8u;
label_10acd8:
    // 0x10acd8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x10acd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10acdc: 0x8043536  j           func_10D4D8
    ctx->pc = 0x10ACDCu;
    ctx->pc = 0x10ACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ACDCu;
    // 0x10ace0: 0x24a52170  addiu       $a1, $a1, 0x2170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D4D8u;
    sub_0010D4D8_0x10d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x10ACE4u;
}
