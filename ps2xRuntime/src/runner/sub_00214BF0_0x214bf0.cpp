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

// Function: sub_00214BF0
// Address: 0x214bf0 - 0x214c78
void sub_00214BF0_0x214bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214BF0_0x214bf0");
#endif

    switch (ctx->pc) {
        case 0x214c38u: goto label_214c38;
        case 0x214c4cu: goto label_214c4c;
        default: break;
    }

    ctx->pc = 0x214bf0u;

    // 0x214bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x214bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x214bf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x214bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214bf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x214bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x214bfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x214bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x214c00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x214c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x214c04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x214c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x214c08: 0x8c831fc0  lw          $v1, 0x1FC0($a0)
    ctx->pc = 0x214c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8128)));
    // 0x214c0c: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x214c0cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214c10: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x214C10u;
    {
        const bool branch_taken_0x214c10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x214C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C10u;
        // 0x214c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214c10) {
            ctx->pc = 0x214C5Cu;
            goto label_214c5c;
        }
    }
    ctx->pc = 0x214C18u;
    // 0x214c18: 0x68082  srl         $s0, $a2, 2
    ctx->pc = 0x214c18u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x214c1c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x214c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x214c20: 0x2e020011  sltiu       $v0, $s0, 0x11
    ctx->pc = 0x214c20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x214c24: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x214c24u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x214c28: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x214C28u;
    {
        const bool branch_taken_0x214c28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x214C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C28u;
        // 0x214c2c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214c28) {
            ctx->pc = 0x214C58u;
            goto label_214c58;
        }
    }
    ctx->pc = 0x214C30u;
    // 0x214c30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x214c30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x214c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_214c38:
    // 0x214c38: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x214c38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x214c3c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x214c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c40: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x214c40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x214c44: 0xc080472  jal         func_2011C8
    ctx->pc = 0x214C44u;
    SET_GPR_U32(ctx, 31, 0x214C4Cu);
    ctx->pc = 0x214C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C44u;
    // 0x214c48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2011C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2011C8u, 0x214C44u, 0x214C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214C4Cu;
label_214c4c:
    // 0x214c4c: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x214c4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x214c50: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x214C50u;
    {
        const bool branch_taken_0x214c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x214C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C50u;
        // 0x214c54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214c50) {
            ctx->pc = 0x214C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214c38;
        }
    }
    ctx->pc = 0x214C58u;
label_214c58:
    // 0x214c58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x214c58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_214c5c:
    // 0x214c5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214c60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214c60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214c64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x214c64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214c68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x214c68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x214c6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x214c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214c70: 0x3e00008  jr          $ra
    ctx->pc = 0x214C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C70u;
        // 0x214c74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214C78u;
}
