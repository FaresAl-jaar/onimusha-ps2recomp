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

// Function: sub_00384C70
// Address: 0x384c70 - 0x384d88
void sub_00384C70_0x384c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384C70_0x384c70");
#endif

    switch (ctx->pc) {
        case 0x384c9cu: goto label_384c9c;
        case 0x384cbcu: goto label_384cbc;
        case 0x384d08u: goto label_384d08;
        case 0x384d10u: goto label_384d10;
        case 0x384d78u: goto label_384d78;
        default: break;
    }

    ctx->pc = 0x384c70u;

    // 0x384c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x384c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x384c74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x384c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x384c78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x384c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x384c7c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x384c7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x384c80: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x384C80u;
    {
        const bool branch_taken_0x384c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x384C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C80u;
        // 0x384c84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384c80) {
            ctx->pc = 0x384C90u;
            goto label_384c90;
        }
    }
    ctx->pc = 0x384C88u;
    // 0x384c88: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x384C88u;
    {
        const bool branch_taken_0x384c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x384c88) {
            ctx->pc = 0x384D78u;
            goto label_384d78;
        }
    }
    ctx->pc = 0x384C90u;
label_384c90:
    // 0x384c90: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x384c90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x384c94: 0xc063d48  jal         func_18F520
    ctx->pc = 0x384C94u;
    SET_GPR_U32(ctx, 31, 0x384C9Cu);
    ctx->pc = 0x384C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384C94u;
    // 0x384c98: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x384C94u, 0x384C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384C9Cu;
label_384c9c:
    // 0x384c9c: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x384C9Cu;
    {
        const bool branch_taken_0x384c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384C9Cu;
        // 0x384ca0: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384c9c) {
            ctx->pc = 0x384D78u;
            goto label_384d78;
        }
    }
    ctx->pc = 0x384CA4u;
    // 0x384ca4: 0x8c24ea24  lw          $a0, -0x15DC($at)
    ctx->pc = 0x384ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961700)));
    // 0x384ca8: 0x30832008  andi        $v1, $a0, 0x2008
    ctx->pc = 0x384ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8200);
    // 0x384cac: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x384CACu;
    {
        const bool branch_taken_0x384cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x384cac) {
            ctx->pc = 0x384CC8u;
            goto label_384cc8;
        }
    }
    ctx->pc = 0x384CB4u;
    // 0x384cb4: 0xc0e1370  jal         func_384DC0
    ctx->pc = 0x384CB4u;
    SET_GPR_U32(ctx, 31, 0x384CBCu);
    ctx->pc = 0x384CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384CB4u;
    // 0x384cb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384DC0u, 0x384CB4u, 0x384CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384CBCu;
label_384cbc:
    // 0x384cbc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x384CBCu;
    {
        const bool branch_taken_0x384cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x384cbc) {
            ctx->pc = 0x384D78u;
            goto label_384d78;
        }
    }
    ctx->pc = 0x384CC4u;
    // 0x384cc4: 0x0  nop
    ctx->pc = 0x384cc4u;
    // NOP
label_384cc8:
    // 0x384cc8: 0x30834000  andi        $v1, $a0, 0x4000
    ctx->pc = 0x384cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x384ccc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x384CCCu;
    {
        const bool branch_taken_0x384ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x384ccc) {
            ctx->pc = 0x384D18u;
            goto label_384d18;
        }
    }
    ctx->pc = 0x384CD4u;
    // 0x384cd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x384cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x384cd8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x384cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x384cdc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x384cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x384ce0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x384ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x384ce4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x384ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x384ce8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x384ce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384cec: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x384cecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x384cf0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x384cf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384cf4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x384cf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384cf8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x384cf8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384cfc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x384cfcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384d00: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x384D00u;
    SET_GPR_U32(ctx, 31, 0x384D08u);
    ctx->pc = 0x384D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384D00u;
    // 0x384d04: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x384D00u, 0x384D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384D08u;
label_384d08:
    // 0x384d08: 0xc0e1008  jal         func_384020
    ctx->pc = 0x384D08u;
    SET_GPR_U32(ctx, 31, 0x384D10u);
    ctx->pc = 0x384D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384D08u;
    // 0x384d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384020u, 0x384D08u, 0x384D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384D10u;
label_384d10:
    // 0x384d10: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x384D10u;
    {
        const bool branch_taken_0x384d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x384d10) {
            ctx->pc = 0x384D78u;
            goto label_384d78;
        }
    }
    ctx->pc = 0x384D18u;
label_384d18:
    // 0x384d18: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x384d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x384d1c: 0x346300a0  ori         $v1, $v1, 0xA0
    ctx->pc = 0x384d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)160);
    // 0x384d20: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x384d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x384d24: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x384D24u;
    {
        const bool branch_taken_0x384d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x384d24) {
            ctx->pc = 0x384D78u;
            goto label_384d78;
        }
    }
    ctx->pc = 0x384D2Cu;
    // 0x384d2c: 0x8202002a  lb          $v0, 0x2A($s0)
    ctx->pc = 0x384d2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x384d30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x384D30u;
    {
        const bool branch_taken_0x384d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D30u;
        // 0x384d34: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384d30) {
            ctx->pc = 0x384D40u;
            goto label_384d40;
        }
    }
    ctx->pc = 0x384D38u;
    // 0x384d38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x384D38u;
    {
        const bool branch_taken_0x384d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D38u;
        // 0x384d3c: 0xa202002a  sb          $v0, 0x2A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384d38) {
            ctx->pc = 0x384D48u;
            goto label_384d48;
        }
    }
    ctx->pc = 0x384D40u;
label_384d40:
    // 0x384d40: 0xa200002a  sb          $zero, 0x2A($s0)
    ctx->pc = 0x384d40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 0));
    // 0x384d44: 0x0  nop
    ctx->pc = 0x384d44u;
    // NOP
label_384d48:
    // 0x384d48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x384d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x384d4c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x384d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x384d50: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x384d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x384d54: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x384d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x384d58: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x384d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x384d5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x384d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384d60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x384d60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384d64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x384d64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384d68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x384d68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384d6c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x384d6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384d70: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x384D70u;
    SET_GPR_U32(ctx, 31, 0x384D78u);
    ctx->pc = 0x384D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384D70u;
    // 0x384d74: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x384D70u, 0x384D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384D78u;
label_384d78:
    // 0x384d78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x384d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x384d7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x384d7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384d80: 0x3e00008  jr          $ra
    ctx->pc = 0x384D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384D80u;
        // 0x384d84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384D88u;
}
