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

// Function: sub_00234368
// Address: 0x234368 - 0x234434
void sub_00234368_0x234368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234368_0x234368");
#endif

    switch (ctx->pc) {
        case 0x2343b8u: goto label_2343b8;
        case 0x2343c8u: goto label_2343c8;
        case 0x2343d0u: goto label_2343d0;
        case 0x2343d8u: goto label_2343d8;
        default: break;
    }

    ctx->pc = 0x234368u;

    // 0x234368: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x234368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23436c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x23436cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x234370: 0x3c16004c  lui         $s6, 0x4C
    ctx->pc = 0x234370u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)76 << 16));
    // 0x234374: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x234378: 0x26c3fd10  addiu       $v1, $s6, -0x2F0
    ctx->pc = 0x234378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966544));
    // 0x23437c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23437cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x234380: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x234384: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x234384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x234388: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x234388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23438c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x23438cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x234390: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x234390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x234394: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x234394u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4BFD10u));
    // 0x234398: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x234398u;
    {
        const bool branch_taken_0x234398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234398u;
        // 0x23439c: 0x3c15004c  lui         $s5, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234398) {
            ctx->pc = 0x2343F0u;
            goto label_2343f0;
        }
    }
    ctx->pc = 0x2343A0u;
    // 0x2343a0: 0x3c14004c  lui         $s4, 0x4C
    ctx->pc = 0x2343a0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)76 << 16));
    // 0x2343a4: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x2343a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2343a8: 0x26b2fd08  addiu       $s2, $s5, -0x2F8
    ctx->pc = 0x2343a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966536));
    // 0x2343ac: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2343acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2343b0: 0x2690fcbc  addiu       $s0, $s4, -0x344
    ctx->pc = 0x2343b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966460));
    // 0x2343b4: 0x0  nop
    ctx->pc = 0x2343b4u;
    // NOP
label_2343b8:
    // 0x2343b8: 0xfe510000  sd          $s1, 0x0($s2)
    ctx->pc = 0x2343b8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x2343bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2343bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2343c0: 0xc04379c  jal         func_10DE70
    ctx->pc = 0x2343C0u;
    SET_GPR_U32(ctx, 31, 0x2343C8u);
    ctx->pc = 0x2343C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2343C0u;
    // 0x2343c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DE70u, 0x2343C0u, 0x2343C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2343C8u;
label_2343c8:
    // 0x2343c8: 0xc0437c4  jal         func_10DF10
    ctx->pc = 0x2343C8u;
    SET_GPR_U32(ctx, 31, 0x2343D0u);
    ctx->pc = 0x2343CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2343C8u;
    // 0x2343cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DF10u, 0x2343C8u, 0x2343D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2343D0u;
label_2343d0:
    // 0x2343d0: 0xc08ced2  jal         func_233B48
    ctx->pc = 0x2343D0u;
    SET_GPR_U32(ctx, 31, 0x2343D8u);
    ctx->pc = 0x2343D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2343D0u;
    // 0x2343d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233B48u, 0x2343D0u, 0x2343D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2343D8u;
label_2343d8:
    // 0x2343d8: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x2343d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2343dc: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2343DCu;
    {
        const bool branch_taken_0x2343dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2343E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343DCu;
        // 0x2343e0: 0x26c2fd10  addiu       $v0, $s6, -0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2343dc) {
            ctx->pc = 0x2343B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2343b8;
        }
    }
    ctx->pc = 0x2343E4u;
    // 0x2343e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2343E4u;
    {
        const bool branch_taken_0x2343e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2343E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2343E4u;
        // 0x2343e8: 0xdfb60030  ld          $s6, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2343e4) {
            ctx->pc = 0x2343FCu;
            goto label_2343fc;
        }
    }
    ctx->pc = 0x2343ECu;
    // 0x2343ec: 0x0  nop
    ctx->pc = 0x2343ecu;
    // NOP
label_2343f0:
    // 0x2343f0: 0x3c14004c  lui         $s4, 0x4C
    ctx->pc = 0x2343f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)76 << 16));
    // 0x2343f4: 0x26c2fd10  addiu       $v0, $s6, -0x2F0
    ctx->pc = 0x2343f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966544));
    // 0x2343f8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2343f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2343fc:
    // 0x2343fc: 0x26a3fd08  addiu       $v1, $s5, -0x2F8
    ctx->pc = 0x2343fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966536));
    // 0x234400: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x234400u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x234404: 0x2684fcbc  addiu       $a0, $s4, -0x344
    ctx->pc = 0x234404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966460));
    // 0x234408: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x234408u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23440c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23440cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234410: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x234410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x234414: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x234414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234418: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x234418u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23441c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x23441cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x234420: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x234420u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x234424: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x234424u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x234428: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x234428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x23442c: 0x3e00008  jr          $ra
    ctx->pc = 0x23442Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23442Cu;
        // 0x234430: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23442Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234434u;
}
