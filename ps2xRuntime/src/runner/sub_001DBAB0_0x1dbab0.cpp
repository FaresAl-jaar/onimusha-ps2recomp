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

// Function: sub_001DBAB0
// Address: 0x1dbab0 - 0x1dbb34
void sub_001DBAB0_0x1dbab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBAB0_0x1dbab0");
#endif

    switch (ctx->pc) {
        case 0x1dbab0u: goto label_1dbab0;
        case 0x1dbab4u: goto label_1dbab4;
        case 0x1dbab8u: goto label_1dbab8;
        case 0x1dbabcu: goto label_1dbabc;
        case 0x1dbac0u: goto label_1dbac0;
        case 0x1dbac4u: goto label_1dbac4;
        case 0x1dbac8u: goto label_1dbac8;
        case 0x1dbaccu: goto label_1dbacc;
        case 0x1dbad0u: goto label_1dbad0;
        case 0x1dbad4u: goto label_1dbad4;
        case 0x1dbad8u: goto label_1dbad8;
        case 0x1dbadcu: goto label_1dbadc;
        case 0x1dbae0u: goto label_1dbae0;
        case 0x1dbae4u: goto label_1dbae4;
        case 0x1dbae8u: goto label_1dbae8;
        case 0x1dbaecu: goto label_1dbaec;
        case 0x1dbaf0u: goto label_1dbaf0;
        case 0x1dbaf4u: goto label_1dbaf4;
        case 0x1dbaf8u: goto label_1dbaf8;
        case 0x1dbafcu: goto label_1dbafc;
        case 0x1dbb00u: goto label_1dbb00;
        case 0x1dbb04u: goto label_1dbb04;
        case 0x1dbb08u: goto label_1dbb08;
        case 0x1dbb0cu: goto label_1dbb0c;
        case 0x1dbb10u: goto label_1dbb10;
        case 0x1dbb14u: goto label_1dbb14;
        case 0x1dbb18u: goto label_1dbb18;
        case 0x1dbb1cu: goto label_1dbb1c;
        case 0x1dbb20u: goto label_1dbb20;
        case 0x1dbb24u: goto label_1dbb24;
        case 0x1dbb28u: goto label_1dbb28;
        case 0x1dbb2cu: goto label_1dbb2c;
        case 0x1dbb30u: goto label_1dbb30;
        default: break;
    }

    ctx->pc = 0x1dbab0u;

label_1dbab0:
    // 0x1dbab0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1dbab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1dbab4:
    // 0x1dbab4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1dbab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1dbab8:
    // 0x1dbab8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1dbab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1dbabc:
    // 0x1dbabc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dbabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1dbac0:
    // 0x1dbac0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1dbac0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dbac4:
    // 0x1dbac4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dbac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1dbac8:
    // 0x1dbac8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1dbac8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1dbacc:
    // 0x1dbacc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dbaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1dbad0:
    // 0x1dbad0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1dbad0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1dbad4:
    // 0x1dbad4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dbad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dbad8:
    // 0x1dbad8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1dbad8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1dbadc:
    // 0x1dbadc: 0xc076ed0  jal         func_1DBB40
label_1dbae0:
    if (ctx->pc == 0x1DBAE0u) {
        ctx->pc = 0x1DBAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBADCu;
        // 0x1dbae0: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBAE4u;
        goto label_1dbae4;
    }
    ctx->pc = 0x1DBADCu;
    SET_GPR_U32(ctx, 31, 0x1DBAE4u);
    ctx->pc = 0x1DBAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBADCu;
    // 0x1dbae0: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB40u, 0x1DBADCu, 0x1DBAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBAE4u;
label_1dbae4:
    // 0x1dbae4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1dbae8:
    if (ctx->pc == 0x1DBAE8u) {
        ctx->pc = 0x1DBAECu;
        goto label_1dbaec;
    }
    ctx->pc = 0x1DBAE4u;
    {
        const bool branch_taken_0x1dbae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbae4) {
            ctx->pc = 0x1DBAF4u;
            goto label_1dbaf4;
        }
    }
    ctx->pc = 0x1DBAECu;
label_1dbaec:
    // 0x1dbaec: 0x10000009  b           . + 4 + (0x9 << 2)
label_1dbaf0:
    if (ctx->pc == 0x1DBAF0u) {
        ctx->pc = 0x1DBAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBAECu;
        // 0x1dbaf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBAF4u;
        goto label_1dbaf4;
    }
    ctx->pc = 0x1DBAECu;
    {
        const bool branch_taken_0x1dbaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBAECu;
        // 0x1dbaf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbaec) {
            ctx->pc = 0x1DBB14u;
            goto label_1dbb14;
        }
    }
    ctx->pc = 0x1DBAF4u;
label_1dbaf4:
    // 0x1dbaf4: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x1dbaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1dbaf8:
    // 0x1dbaf8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1dbaf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dbafc:
    // 0x1dbafc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1dbafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1dbb00:
    // 0x1dbb00: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1dbb00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dbb04:
    // 0x1dbb04: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1dbb04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1dbb08:
    // 0x1dbb08: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1dbb08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1dbb0c:
    // 0x1dbb0c: 0x320f809  jalr        $t9
label_1dbb10:
    if (ctx->pc == 0x1DBB10u) {
        ctx->pc = 0x1DBB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB0Cu;
        // 0x1dbb10: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBB14u;
        goto label_1dbb14;
    }
    ctx->pc = 0x1DBB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DBB14u);
        ctx->pc = 0x1DBB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB0Cu;
        // 0x1dbb10: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBB0Cu, 0x1DBB14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DBB14u;
label_1dbb14:
    // 0x1dbb14: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1dbb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1dbb18:
    // 0x1dbb18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dbb18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dbb1c:
    // 0x1dbb1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dbb1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dbb20:
    // 0x1dbb20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dbb20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dbb24:
    // 0x1dbb24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dbb24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dbb28:
    // 0x1dbb28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dbb28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dbb2c:
    // 0x1dbb2c: 0x3e00008  jr          $ra
label_1dbb30:
    if (ctx->pc == 0x1DBB30u) {
        ctx->pc = 0x1DBB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB2Cu;
        // 0x1dbb30: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBB34u;
        goto label_fallthrough_0x1dbb2c;
    }
    ctx->pc = 0x1DBB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB2Cu;
        // 0x1dbb30: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dbb2c:
    ctx->pc = 0x1DBB34u;
}
