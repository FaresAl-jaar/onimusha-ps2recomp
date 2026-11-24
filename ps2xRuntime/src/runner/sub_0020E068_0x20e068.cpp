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

// Function: sub_0020E068
// Address: 0x20e068 - 0x20e124
void sub_0020E068_0x20e068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E068_0x20e068");
#endif

    switch (ctx->pc) {
        case 0x20e0a4u: goto label_20e0a4;
        case 0x20e0ccu: goto label_20e0cc;
        default: break;
    }

    ctx->pc = 0x20e068u;

    // 0x20e068: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20e068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20e06c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20e06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20e070: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20e070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e074: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x20e074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x20e078: 0x26131020  addiu       $s3, $s0, 0x1020
    ctx->pc = 0x20e078u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4128));
    // 0x20e07c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x20e07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x20e080: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x20e080u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e084: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x20e084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x20e088: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x20e088u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e08c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20e08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20e090: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20e090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20e094: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20e094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20e098: 0x8e112004  lw          $s1, 0x2004($s0)
    ctx->pc = 0x20e098u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8196)));
    // 0x20e09c: 0xc0882e4  jal         func_220B90
    ctx->pc = 0x20E09Cu;
    SET_GPR_U32(ctx, 31, 0x20E0A4u);
    ctx->pc = 0x20E0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E09Cu;
    // 0x20e0a0: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220B90u, 0x20E09Cu, 0x20E0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E0A4u;
label_20e0a4:
    // 0x20e0a4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x20E0A4u;
    {
        const bool branch_taken_0x20e0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E0A4u;
        // 0x20e0a8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e0a4) {
            ctx->pc = 0x20E100u;
            goto label_20e100;
        }
    }
    ctx->pc = 0x20E0ACu;
    // 0x20e0ac: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x20e0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x20e0b0: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x20E0B0u;
    {
        const bool branch_taken_0x20e0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20e0b0) {
            ctx->pc = 0x20E0B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E0B0u;
            // 0x20e0b4: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E0F0u;
            goto label_20e0f0;
        }
    }
    ctx->pc = 0x20E0B8u;
    // 0x20e0b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20e0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e0bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20e0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e0c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20e0c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e0c4: 0xc08384a  jal         func_20E128
    ctx->pc = 0x20E0C4u;
    SET_GPR_U32(ctx, 31, 0x20E0CCu);
    ctx->pc = 0x20E0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E0C4u;
    // 0x20e0c8: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E128u, 0x20E0C4u, 0x20E0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E0CCu;
label_20e0cc:
    // 0x20e0cc: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x20e0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x20e0d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20e0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e0d4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x20e0d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20e0d8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x20E0D8u;
    {
        const bool branch_taken_0x20e0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e0d8) {
            ctx->pc = 0x20E0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E0D8u;
            // 0x20e0dc: 0xae840000  sw          $a0, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E0F4u;
            goto label_20e0f4;
        }
    }
    ctx->pc = 0x20E0E0u;
    // 0x20e0e0: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x20e0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x20e0e4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x20e0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e0e8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x20e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20e0ec: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x20e0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_20e0f0:
    // 0x20e0f0: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x20e0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
label_20e0f4:
    // 0x20e0f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20e0f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e0f8: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x20e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x20e0fc: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x20e0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_20e100:
    // 0x20e100: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20e100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e104: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20e104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e108: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20e108u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e10c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x20e10cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20e110: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x20e110u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20e114: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x20e114u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20e118: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20e118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20e11c: 0x3e00008  jr          $ra
    ctx->pc = 0x20E11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E11Cu;
        // 0x20e120: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E124u;
}
