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

// Function: sub_003C9C20
// Address: 0x3c9c20 - 0x3c9eec
void sub_003C9C20_0x3c9c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9C20_0x3c9c20");
#endif

    switch (ctx->pc) {
        case 0x3c9c3cu: goto label_3c9c3c;
        case 0x3c9c64u: goto label_3c9c64;
        case 0x3c9c88u: goto label_3c9c88;
        case 0x3c9cf0u: goto label_3c9cf0;
        case 0x3c9d2cu: goto label_3c9d2c;
        case 0x3c9d68u: goto label_3c9d68;
        case 0x3c9d88u: goto label_3c9d88;
        case 0x3c9db8u: goto label_3c9db8;
        case 0x3c9de8u: goto label_3c9de8;
        case 0x3c9e2cu: goto label_3c9e2c;
        case 0x3c9e70u: goto label_3c9e70;
        case 0x3c9e78u: goto label_3c9e78;
        default: break;
    }

    ctx->pc = 0x3c9c20u;

    // 0x3c9c20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c9c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3c9c24: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3c9c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3c9c28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c9c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c9c2c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3c9c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3c9c30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c9c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c9c34: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C9C34u;
    {
        const bool branch_taken_0x3c9c34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9C34u;
        // 0x3c9c38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9c34) {
            ctx->pc = 0x3C9C58u;
            goto label_3c9c58;
        }
    }
    ctx->pc = 0x3C9C3Cu;
label_3c9c3c:
    // 0x3c9c3c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3c9c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c9c40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c9c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3c9c44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c9c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c9c48: 0x0  nop
    ctx->pc = 0x3c9c48u;
    // NOP
    // 0x3c9c4c: 0x0  nop
    ctx->pc = 0x3c9c4cu;
    // NOP
    // 0x3c9c50: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3C9C50u;
    {
        const bool branch_taken_0x3c9c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c9c50) {
            ctx->pc = 0x3C9C3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c9c3c;
        }
    }
    ctx->pc = 0x3C9C58u;
label_3c9c58:
    // 0x3c9c58: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x3c9c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3c9c5c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C9C5Cu;
    {
        const bool branch_taken_0x3c9c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9C5Cu;
        // 0x3c9c60: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9c5c) {
            ctx->pc = 0x3C9C80u;
            goto label_3c9c80;
        }
    }
    ctx->pc = 0x3C9C64u;
label_3c9c64:
    // 0x3c9c64: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3c9c64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c9c68: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c9c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3c9c6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3c9c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3c9c70: 0x0  nop
    ctx->pc = 0x3c9c70u;
    // NOP
    // 0x3c9c74: 0x0  nop
    ctx->pc = 0x3c9c74u;
    // NOP
    // 0x3c9c78: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3C9C78u;
    {
        const bool branch_taken_0x3c9c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c9c78) {
            ctx->pc = 0x3C9C64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c9c64;
        }
    }
    ctx->pc = 0x3C9C80u;
label_3c9c80:
    // 0x3c9c80: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x3C9C80u;
    SET_GPR_U32(ctx, 31, 0x3C9C88u);
    ctx->pc = 0x3C9C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9C80u;
    // 0x3c9c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x3C9C80u, 0x3C9C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9C88u;
label_3c9c88:
    // 0x3c9c88: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x3c9c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c9c8c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C9C8Cu;
    {
        const bool branch_taken_0x3c9c8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9c8c) {
            ctx->pc = 0x3C9CB0u;
            goto label_3c9cb0;
        }
    }
    ctx->pc = 0x3C9C94u;
    // 0x3c9c94: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x3c9c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x3c9c98: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x3c9c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x3c9c9c: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x3c9c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x3c9ca0: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x3c9ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c9ca4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3c9ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c9ca8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3c9ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3c9cac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3c9cacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3c9cb0:
    // 0x3c9cb0: 0xa20000e4  sb          $zero, 0xE4($s0)
    ctx->pc = 0x3c9cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 228), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c9cb4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x3c9cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x3c9cb8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3c9cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x3c9cbc: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x3c9cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x3c9cc0: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x3c9cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x3c9cc4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x3c9cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x3c9cc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c9cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9ccc: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x3c9cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x3c9cd0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3c9cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3c9cd4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x3c9cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x3c9cd8: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x3c9cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3c9cdc: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x3c9cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x3c9ce0: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3c9ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c9ce4: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3c9ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3c9ce8: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x3C9CE8u;
    SET_GPR_U32(ctx, 31, 0x3C9CF0u);
    ctx->pc = 0x3C9CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9CE8u;
    // 0x3c9cec: 0x24470240  addiu       $a3, $v0, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x3C9CE8u, 0x3C9CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9CF0u;
label_3c9cf0:
    // 0x3c9cf0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x3c9cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x3c9cf4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3c9cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x3c9cf8: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x3c9cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x3c9cfc: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x3c9cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x3c9d00: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3c9d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3c9d04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c9d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9d08: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x3c9d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x3c9d0c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3c9d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3c9d10: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3c9d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x3c9d14: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x3c9d14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3c9d18: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x3c9d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x3c9d1c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3c9d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c9d20: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3c9d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3c9d24: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x3C9D24u;
    SET_GPR_U32(ctx, 31, 0x3C9D2Cu);
    ctx->pc = 0x3C9D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9D24u;
    // 0x3c9d28: 0x244702c0  addiu       $a3, $v0, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x3C9D24u, 0x3C9D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9D2Cu;
label_3c9d2c:
    // 0x3c9d2c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3c9d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x3c9d30: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x3c9d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x3c9d34: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x3c9d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x3c9d38: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x3c9d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x3c9d3c: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x3c9d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x3c9d40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c9d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9d44: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x3c9d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x3c9d48: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3c9d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3c9d4c: 0x3c02c28c  lui         $v0, 0xC28C
    ctx->pc = 0x3c9d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49804 << 16));
    // 0x3c9d50: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x3c9d50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3c9d54: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x3c9d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x3c9d58: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3c9d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c9d5c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3c9d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3c9d60: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x3C9D60u;
    SET_GPR_U32(ctx, 31, 0x3C9D68u);
    ctx->pc = 0x3C9D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9D60u;
    // 0x3c9d64: 0x24470080  addiu       $a3, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x3C9D60u, 0x3C9D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9D68u;
label_3c9d68:
    // 0x3c9d68: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3c9d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c9d6c: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x3c9d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x3c9d70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c9d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9d74: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3c9d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3c9d78: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x3c9d78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3c9d7c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3c9d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3c9d80: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x3C9D80u;
    SET_GPR_U32(ctx, 31, 0x3C9D88u);
    ctx->pc = 0x3C9D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9D80u;
    // 0x3c9d84: 0x24470180  addiu       $a3, $v0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x3C9D80u, 0x3C9D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9D88u;
label_3c9d88:
    // 0x3c9d88: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3c9d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x3c9d8c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3c9d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x3c9d90: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x3c9d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x3c9d94: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x3c9d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x3c9d98: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3c9d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x3c9d9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c9d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9da0: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3c9da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c9da4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3c9da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3c9da8: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x3c9da8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3c9dac: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3c9dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3c9db0: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x3C9DB0u;
    SET_GPR_U32(ctx, 31, 0x3C9DB8u);
    ctx->pc = 0x3C9DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9DB0u;
    // 0x3c9db4: 0x24470340  addiu       $a3, $v0, 0x340 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x3C9DB0u, 0x3C9DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9DB8u;
label_3c9db8:
    // 0x3c9db8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3c9db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x3c9dbc: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3c9dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x3c9dc0: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x3c9dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x3c9dc4: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x3c9dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x3c9dc8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3c9dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x3c9dcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c9dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9dd0: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3c9dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c9dd4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3c9dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3c9dd8: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x3c9dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3c9ddc: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3c9ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3c9de0: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x3C9DE0u;
    SET_GPR_U32(ctx, 31, 0x3C9DE8u);
    ctx->pc = 0x3C9DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9DE0u;
    // 0x3c9de4: 0x24470400  addiu       $a3, $v0, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x3C9DE0u, 0x3C9DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9DE8u;
label_3c9de8:
    // 0x3c9de8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3c9de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x3c9dec: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3c9decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x3c9df0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3c9df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3c9df4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3c9df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x3c9df8: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x3c9df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x3c9dfc: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x3c9dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x3c9e00: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3c9e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3c9e04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c9e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9e08: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x3c9e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x3c9e0c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3c9e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3c9e10: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x3c9e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x3c9e14: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x3c9e14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3c9e18: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x3c9e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x3c9e1c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3c9e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c9e20: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3c9e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3c9e24: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x3C9E24u;
    SET_GPR_U32(ctx, 31, 0x3C9E2Cu);
    ctx->pc = 0x3C9E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9E24u;
    // 0x3c9e28: 0x24470380  addiu       $a3, $v0, 0x380 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x3C9E24u, 0x3C9E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9E2Cu;
label_3c9e2c:
    // 0x3c9e2c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x3c9e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x3c9e30: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3c9e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x3c9e34: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x3c9e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x3c9e38: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x3c9e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x3c9e3c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3c9e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3c9e40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c9e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9e44: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x3c9e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x3c9e48: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3c9e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3c9e4c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3c9e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x3c9e50: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x3c9e50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3c9e54: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x3c9e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x3c9e58: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x3c9e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
    // 0x3c9e5c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x3c9e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x3c9e60: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3c9e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3c9e64: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3c9e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3c9e68: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x3C9E68u;
    SET_GPR_U32(ctx, 31, 0x3C9E70u);
    ctx->pc = 0x3C9E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9E68u;
    // 0x3c9e6c: 0x24470440  addiu       $a3, $v0, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x3C9E68u, 0x3C9E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9E70u;
label_3c9e70:
    // 0x3c9e70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C9E70u;
    {
        const bool branch_taken_0x3c9e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9E70u;
        // 0x3c9e74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9e70) {
            ctx->pc = 0x3C9E90u;
            goto label_3c9e90;
        }
    }
    ctx->pc = 0x3C9E78u;
label_3c9e78:
    // 0x3c9e78: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3c9e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3c9e7c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3c9e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3c9e80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c9e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3c9e84: 0xa4602b20  sh          $zero, 0x2B20($v1)
    ctx->pc = 0x3c9e84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 11040), (uint16_t)GPR_U32(ctx, 0));
    // 0x3c9e88: 0xa2002b24  sb          $zero, 0x2B24($s0)
    ctx->pc = 0x3c9e88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11044), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c9e8c: 0x0  nop
    ctx->pc = 0x3c9e8cu;
    // NOP
label_3c9e90:
    // 0x3c9e90: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x3c9e90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3c9e94: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3C9E94u;
    {
        const bool branch_taken_0x3c9e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c9e94) {
            ctx->pc = 0x3C9E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c9e78;
        }
    }
    ctx->pc = 0x3C9E9Cu;
    // 0x3c9e9c: 0x26030700  addiu       $v1, $s0, 0x700
    ctx->pc = 0x3c9e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1792));
    // 0x3c9ea0: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x3c9ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3c9ea4: 0x26030710  addiu       $v1, $s0, 0x710
    ctx->pc = 0x3c9ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1808));
    // 0x3c9ea8: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x3c9ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3c9eac: 0x26030720  addiu       $v1, $s0, 0x720
    ctx->pc = 0x3c9eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1824));
    // 0x3c9eb0: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x3c9eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x3c9eb4: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x3c9eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3c9eb8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3c9eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c9ebc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x3c9ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3c9ec0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3c9ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c9ec4: 0xa2070730  sb          $a3, 0x730($s0)
    ctx->pc = 0x3c9ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1840), (uint8_t)GPR_U32(ctx, 7));
    // 0x3c9ec8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c9ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c9ecc: 0xa2060731  sb          $a2, 0x731($s0)
    ctx->pc = 0x3c9eccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1841), (uint8_t)GPR_U32(ctx, 6));
    // 0x3c9ed0: 0xa2050732  sb          $a1, 0x732($s0)
    ctx->pc = 0x3c9ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1842), (uint8_t)GPR_U32(ctx, 5));
    // 0x3c9ed4: 0xa2040734  sb          $a0, 0x734($s0)
    ctx->pc = 0x3c9ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1844), (uint8_t)GPR_U32(ctx, 4));
    // 0x3c9ed8: 0xa2030232  sb          $v1, 0x232($s0)
    ctx->pc = 0x3c9ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 562), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c9edc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c9edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c9ee0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c9ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c9ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9EE4u;
        // 0x3c9ee8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9EECu;
}
