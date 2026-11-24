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

// Function: sub_00337990
// Address: 0x337990 - 0x337a84
void sub_00337990_0x337990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337990_0x337990");
#endif

    switch (ctx->pc) {
        case 0x337a40u: goto label_337a40;
        case 0x337a70u: goto label_337a70;
        default: break;
    }

    ctx->pc = 0x337990u;

    // 0x337990: 0x1071025  or          $v0, $t0, $a3
    ctx->pc = 0x337990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x337994: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337994u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x337998: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x337998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x33799c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33799Cu;
    {
        const bool branch_taken_0x33799c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3379A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33799Cu;
        // 0x3379a0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33799c) {
            ctx->pc = 0x3379B0u;
            goto label_3379b0;
        }
    }
    ctx->pc = 0x3379A4u;
    // 0x3379a4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x3379A4u;
    {
        const bool branch_taken_0x3379a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3379A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3379A4u;
        // 0x3379a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3379a4) {
            ctx->pc = 0x337A78u;
            goto label_337a78;
        }
    }
    ctx->pc = 0x3379ACu;
    // 0x3379ac: 0x0  nop
    ctx->pc = 0x3379acu;
    // NOP
label_3379b0:
    // 0x3379b0: 0xc71024  and         $v0, $a2, $a3
    ctx->pc = 0x3379b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x3379b4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3379B4u;
    {
        const bool branch_taken_0x3379b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3379b4) {
            ctx->pc = 0x3379F8u;
            goto label_3379f8;
        }
    }
    ctx->pc = 0x3379BCu;
    // 0x3379bc: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x3379bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3379c0: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x3379c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3379c4: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x3379c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3379c8: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x3379c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3379cc: 0x441001a  bgez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3379CCu;
    {
        const bool branch_taken_0x3379cc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3379D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3379CCu;
        // 0x3379d0: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3379cc) {
            ctx->pc = 0x337A38u;
            goto label_337a38;
        }
    }
    ctx->pc = 0x3379D4u;
    // 0x3379d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3379d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3379d8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3379D8u;
    {
        const bool branch_taken_0x3379d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3379d8) {
            ctx->pc = 0x3379F0u;
            goto label_3379f0;
        }
    }
    ctx->pc = 0x3379E0u;
    // 0x3379e0: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x3379e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3379e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3379e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3379e8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3379E8u;
    {
        const bool branch_taken_0x3379e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3379ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3379E8u;
        // 0x3379ec: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3379e8) {
            ctx->pc = 0x337A38u;
            goto label_337a38;
        }
    }
    ctx->pc = 0x3379F0u;
label_3379f0:
    // 0x3379f0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3379F0u;
    {
        const bool branch_taken_0x3379f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3379F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3379F0u;
        // 0x3379f4: 0xa4800000  sh          $zero, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3379f0) {
            ctx->pc = 0x337A38u;
            goto label_337a38;
        }
    }
    ctx->pc = 0x3379F8u;
label_3379f8:
    // 0x3379f8: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x3379f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3379fc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3379fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x337a00: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x337a00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x337a04: 0x84860002  lh          $a2, 0x2($a0)
    ctx->pc = 0x337a04u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x337a08: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x337a08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x337a0c: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x337a0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x337a10: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x337A10u;
    {
        const bool branch_taken_0x337a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x337A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337A10u;
        // 0x337a14: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337a10) {
            ctx->pc = 0x337A38u;
            goto label_337a38;
        }
    }
    ctx->pc = 0x337A18u;
    // 0x337a18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x337a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337a1c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x337A1Cu;
    {
        const bool branch_taken_0x337a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x337a1c) {
            ctx->pc = 0x337A30u;
            goto label_337a30;
        }
    }
    ctx->pc = 0x337A24u;
    // 0x337a24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x337A24u;
    {
        const bool branch_taken_0x337a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337A24u;
        // 0x337a28: 0xa4800000  sh          $zero, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337a24) {
            ctx->pc = 0x337A38u;
            goto label_337a38;
        }
    }
    ctx->pc = 0x337A2Cu;
    // 0x337a2c: 0x0  nop
    ctx->pc = 0x337a2cu;
    // NOP
label_337a30:
    // 0x337a30: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x337a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x337a34: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x337a34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_337a38:
    // 0x337a38: 0xc0cde28  jal         func_3378A0
    ctx->pc = 0x337A38u;
    SET_GPR_U32(ctx, 31, 0x337A40u);
    ctx->pc = 0x3378A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3378A0u, 0x337A38u, 0x337A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337A40u;
label_337a40:
    // 0x337a40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x337a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x337a44: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x337a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x337a48: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x337a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x337a4c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x337a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x337a50: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x337a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x337a54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x337a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337a58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x337a58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337a5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x337a5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337a60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x337a60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337a64: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x337a64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337a68: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x337A68u;
    SET_GPR_U32(ctx, 31, 0x337A70u);
    ctx->pc = 0x337A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337A68u;
    // 0x337a6c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x337A68u, 0x337A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337A70u;
label_337a70:
    // 0x337a70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x337a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337a74: 0x0  nop
    ctx->pc = 0x337a74u;
    // NOP
label_337a78:
    // 0x337a78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x337a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x337A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337A7Cu;
        // 0x337a80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337A84u;
}
