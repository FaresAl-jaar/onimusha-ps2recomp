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

// Function: sub_00204950
// Address: 0x204950 - 0x2049cc
void sub_00204950_0x204950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204950_0x204950");
#endif

    switch (ctx->pc) {
        case 0x2049a0u: goto label_2049a0;
        default: break;
    }

    ctx->pc = 0x204950u;

    // 0x204950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x204950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x204954: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x204954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x204958: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x204958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20495c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20495cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x204960: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x204960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x204964: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x204964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x204968: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x204968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20496c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20496cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204970: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x204970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x204974: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x204974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x204978: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x204978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x20497c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20497Cu;
    {
        const bool branch_taken_0x20497c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x204980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20497Cu;
        // 0x204980: 0xae00008c  sw          $zero, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20497c) {
            ctx->pc = 0x2049A0u;
            goto label_2049a0;
        }
    }
    ctx->pc = 0x204984u;
    // 0x204984: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x204984u;
    {
        const bool branch_taken_0x204984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204984u;
        // 0x204988: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204984) {
            ctx->pc = 0x2049A4u;
            goto label_2049a4;
        }
    }
    ctx->pc = 0x20498Cu;
    // 0x20498c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x20498cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x204990: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x204990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x204994: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x204994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204998: 0xc089f52  jal         func_227D48
    ctx->pc = 0x204998u;
    SET_GPR_U32(ctx, 31, 0x2049A0u);
    ctx->pc = 0x20499Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204998u;
    // 0x20499c: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D48u, 0x204998u, 0x2049A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2049A0u;
label_2049a0:
    // 0x2049a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2049a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2049a4:
    // 0x2049a4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2049A4u;
    {
        const bool branch_taken_0x2049a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2049A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049A4u;
        // 0x2049a8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2049a4) {
            ctx->pc = 0x2049BCu;
            goto label_2049bc;
        }
    }
    ctx->pc = 0x2049ACu;
    // 0x2049ac: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2049ACu;
    {
        const bool branch_taken_0x2049ac = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2049ac) {
            ctx->pc = 0x2049B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2049ACu;
            // 0x2049b0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2049C0u;
            goto label_2049c0;
        }
    }
    ctx->pc = 0x2049B4u;
    // 0x2049b4: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x2049b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    // 0x2049b8: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x2049b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_2049bc:
    // 0x2049bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2049bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2049c0:
    // 0x2049c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2049c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2049c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2049C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2049C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049C4u;
        // 0x2049c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2049C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2049CCu;
}
