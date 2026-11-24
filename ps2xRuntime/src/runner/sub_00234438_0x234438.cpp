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

// Function: sub_00234438
// Address: 0x234438 - 0x234504
void sub_00234438_0x234438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234438_0x234438");
#endif

    switch (ctx->pc) {
        case 0x234488u: goto label_234488;
        case 0x234498u: goto label_234498;
        case 0x2344a0u: goto label_2344a0;
        case 0x2344a8u: goto label_2344a8;
        default: break;
    }

    ctx->pc = 0x234438u;

    // 0x234438: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x234438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23443c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x23443cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x234440: 0x3c16004c  lui         $s6, 0x4C
    ctx->pc = 0x234440u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)76 << 16));
    // 0x234444: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x234448: 0x26c3fcf0  addiu       $v1, $s6, -0x310
    ctx->pc = 0x234448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966512));
    // 0x23444c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23444cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x234450: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x234454: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x234454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x234458: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x234458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23445c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x23445cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x234460: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x234460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x234464: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x234464u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4BFCF0u));
    // 0x234468: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x234468u;
    {
        const bool branch_taken_0x234468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234468u;
        // 0x23446c: 0x3c15004c  lui         $s5, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234468) {
            ctx->pc = 0x2344C0u;
            goto label_2344c0;
        }
    }
    ctx->pc = 0x234470u;
    // 0x234470: 0x3c14004c  lui         $s4, 0x4C
    ctx->pc = 0x234470u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)76 << 16));
    // 0x234474: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x234474u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234478: 0x26b2fce8  addiu       $s2, $s5, -0x318
    ctx->pc = 0x234478u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966504));
    // 0x23447c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x23447cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234480: 0x2690fcb0  addiu       $s0, $s4, -0x350
    ctx->pc = 0x234480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966448));
    // 0x234484: 0x0  nop
    ctx->pc = 0x234484u;
    // NOP
label_234488:
    // 0x234488: 0xfe510000  sd          $s1, 0x0($s2)
    ctx->pc = 0x234488u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x23448c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23448cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234490: 0xc04379c  jal         func_10DE70
    ctx->pc = 0x234490u;
    SET_GPR_U32(ctx, 31, 0x234498u);
    ctx->pc = 0x234494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234490u;
    // 0x234494: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DE70u, 0x234490u, 0x234498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234498u;
label_234498:
    // 0x234498: 0xc0437c4  jal         func_10DF10
    ctx->pc = 0x234498u;
    SET_GPR_U32(ctx, 31, 0x2344A0u);
    ctx->pc = 0x23449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234498u;
    // 0x23449c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DF10u, 0x234498u, 0x2344A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2344A0u;
label_2344a0:
    // 0x2344a0: 0xc08ced2  jal         func_233B48
    ctx->pc = 0x2344A0u;
    SET_GPR_U32(ctx, 31, 0x2344A8u);
    ctx->pc = 0x2344A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2344A0u;
    // 0x2344a4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233B48u, 0x2344A0u, 0x2344A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2344A8u;
label_2344a8:
    // 0x2344a8: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x2344a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2344ac: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2344ACu;
    {
        const bool branch_taken_0x2344ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2344B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344ACu;
        // 0x2344b0: 0x26c2fcf0  addiu       $v0, $s6, -0x310 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2344ac) {
            ctx->pc = 0x234488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234488;
        }
    }
    ctx->pc = 0x2344B4u;
    // 0x2344b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2344B4u;
    {
        const bool branch_taken_0x2344b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2344B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344B4u;
        // 0x2344b8: 0xdfb60030  ld          $s6, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2344b4) {
            ctx->pc = 0x2344CCu;
            goto label_2344cc;
        }
    }
    ctx->pc = 0x2344BCu;
    // 0x2344bc: 0x0  nop
    ctx->pc = 0x2344bcu;
    // NOP
label_2344c0:
    // 0x2344c0: 0x3c14004c  lui         $s4, 0x4C
    ctx->pc = 0x2344c0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)76 << 16));
    // 0x2344c4: 0x26c2fcf0  addiu       $v0, $s6, -0x310
    ctx->pc = 0x2344c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966512));
    // 0x2344c8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2344c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2344cc:
    // 0x2344cc: 0x26a3fce8  addiu       $v1, $s5, -0x318
    ctx->pc = 0x2344ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966504));
    // 0x2344d0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2344d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2344d4: 0x2684fcb0  addiu       $a0, $s4, -0x350
    ctx->pc = 0x2344d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966448));
    // 0x2344d8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2344d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2344dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2344dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2344e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2344e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2344e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2344e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2344e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2344e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2344ec: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2344ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2344f0: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x2344f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x2344f4: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x2344f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x2344f8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2344f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2344fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2344FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344FCu;
        // 0x234500: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2344FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234504u;
}
