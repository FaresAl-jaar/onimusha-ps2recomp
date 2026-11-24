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

// Function: sub_00133D20
// Address: 0x133d20 - 0x133e2c
void sub_00133D20_0x133d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133D20_0x133d20");
#endif

    switch (ctx->pc) {
        case 0x133d94u: goto label_133d94;
        case 0x133dbcu: goto label_133dbc;
        case 0x133de0u: goto label_133de0;
        case 0x133e04u: goto label_133e04;
        default: break;
    }

    ctx->pc = 0x133d20u;

    // 0x133d20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x133d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x133d24: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x133d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x133d28: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x133d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x133d2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x133d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x133d30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x133d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x133d34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x133d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x133d38: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x133d38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133d3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x133d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x133d40: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x133d40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133d44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x133d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x133d48: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x133d48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133d4c: 0x10a2001e  beq         $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x133D4Cu;
    {
        const bool branch_taken_0x133d4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x133D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D4Cu;
        // 0x133d50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133d4c) {
            ctx->pc = 0x133DC8u;
            goto label_133dc8;
        }
    }
    ctx->pc = 0x133D54u;
    // 0x133d54: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x133d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x133d58: 0x10a2001b  beq         $a1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x133D58u;
    {
        const bool branch_taken_0x133d58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x133D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D58u;
        // 0x133d5c: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133d58) {
            ctx->pc = 0x133DC8u;
            goto label_133dc8;
        }
    }
    ctx->pc = 0x133D60u;
    // 0x133d60: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x133D60u;
    {
        const bool branch_taken_0x133d60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x133d60) {
            ctx->pc = 0x133D88u;
            goto label_133d88;
        }
    }
    ctx->pc = 0x133D68u;
    // 0x133d68: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x133d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x133d6c: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x133D6Cu;
    {
        const bool branch_taken_0x133d6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x133D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D6Cu;
        // 0x133d70: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133d6c) {
            ctx->pc = 0x133D88u;
            goto label_133d88;
        }
    }
    ctx->pc = 0x133D74u;
    // 0x133d74: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x133D74u;
    {
        const bool branch_taken_0x133d74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x133d74) {
            ctx->pc = 0x133D88u;
            goto label_133d88;
        }
    }
    ctx->pc = 0x133D7Cu;
    // 0x133d7c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x133D7Cu;
    {
        const bool branch_taken_0x133d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133d7c) {
            ctx->pc = 0x133E08u;
            goto label_133e08;
        }
    }
    ctx->pc = 0x133D84u;
    // 0x133d84: 0x0  nop
    ctx->pc = 0x133d84u;
    // NOP
label_133d88:
    // 0x133d88: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x133d88u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x133d8c: 0xc04d130  jal         func_1344C0
    ctx->pc = 0x133D8Cu;
    SET_GPR_U32(ctx, 31, 0x133D94u);
    ctx->pc = 0x133D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133D8Cu;
    // 0x133d90: 0x96650002  lhu         $a1, 0x2($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1344C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1344C0u, 0x133D8Cu, 0x133D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133D94u;
label_133d94:
    // 0x133d94: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x133d94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x133d98: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x133d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x133d9c: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x133d9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x133da0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x133da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133da4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x133da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133da8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x133da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133dac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x133dacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133db0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x133db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x133db4: 0xc04d09c  jal         func_134270
    ctx->pc = 0x133DB4u;
    SET_GPR_U32(ctx, 31, 0x133DBCu);
    ctx->pc = 0x133DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133DB4u;
    // 0x133db8: 0xa6620002  sh          $v0, 0x2($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134270u, 0x133DB4u, 0x133DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133DBCu;
label_133dbc:
    // 0x133dbc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x133DBCu;
    {
        const bool branch_taken_0x133dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133dbc) {
            ctx->pc = 0x133E08u;
            goto label_133e08;
        }
    }
    ctx->pc = 0x133DC4u;
    // 0x133dc4: 0x0  nop
    ctx->pc = 0x133dc4u;
    // NOP
label_133dc8:
    // 0x133dc8: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x133dc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x133dcc: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x133dccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x133dd0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x133dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x133dd4: 0x2a083  sra         $s4, $v0, 2
    ctx->pc = 0x133dd4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 2));
    // 0x133dd8: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x133DD8u;
    SET_GPR_U32(ctx, 31, 0x133DE0u);
    ctx->pc = 0x133DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133DD8u;
    // 0x133ddc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1344A0u, 0x133DD8u, 0x133DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133DE0u;
label_133de0:
    // 0x133de0: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x133de0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x133de4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x133de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133de8: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x133de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x133dec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x133decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133df0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x133df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x133df4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x133df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133df8: 0xa6620002  sh          $v0, 0x2($s3)
    ctx->pc = 0x133df8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x133dfc: 0xc04d09c  jal         func_134270
    ctx->pc = 0x133DFCu;
    SET_GPR_U32(ctx, 31, 0x133E04u);
    ctx->pc = 0x133E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133DFCu;
    // 0x133e00: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134270u, 0x133DFCu, 0x133E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133E04u;
label_133e04:
    // 0x133e04: 0x0  nop
    ctx->pc = 0x133e04u;
    // NOP
label_133e08:
    // 0x133e08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x133e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133e0c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x133e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133e10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x133e10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x133e14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x133e14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x133e18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x133e18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133e1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x133e1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133e20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133e20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133e24: 0x3e00008  jr          $ra
    ctx->pc = 0x133E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E24u;
        // 0x133e28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133E2Cu;
}
