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

// Function: sub_00118248
// Address: 0x118248 - 0x118344
void sub_00118248_0x118248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118248_0x118248");
#endif

    switch (ctx->pc) {
        case 0x118288u: goto label_118288;
        case 0x118294u: goto label_118294;
        case 0x1182a4u: goto label_1182a4;
        case 0x1182b8u: goto label_1182b8;
        case 0x1182d0u: goto label_1182d0;
        case 0x1182e4u: goto label_1182e4;
        case 0x118300u: goto label_118300;
        default: break;
    }

    ctx->pc = 0x118248u;

    // 0x118248: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x118248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11824c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x11824cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x118250: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x118250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x118254: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x118254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x118258: 0x3c150012  lui         $s5, 0x12
    ctx->pc = 0x118258u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)18 << 16));
    // 0x11825c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11825cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x118260: 0x3c140012  lui         $s4, 0x12
    ctx->pc = 0x118260u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)18 << 16));
    // 0x118264: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x118264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x118268: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x118268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11826c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11826cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118270: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x118270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x118274: 0x245031c0  addiu       $s0, $v0, 0x31C0
    ctx->pc = 0x118274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12736));
    // 0x118278: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x118278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x11827c: 0x8c4431c0  lw          $a0, 0x31C0($v0)
    ctx->pc = 0x11827cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4031C0u));
    // 0x118280: 0xc0460d2  jal         func_118348
    ctx->pc = 0x118280u;
    SET_GPR_U32(ctx, 31, 0x118288u);
    ctx->pc = 0x118284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118280u;
    // 0x118284: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118348u, 0x118280u, 0x118288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118288u;
label_118288:
    // 0x118288: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x118288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11828c: 0xc0460d2  jal         func_118348
    ctx->pc = 0x11828Cu;
    SET_GPR_U32(ctx, 31, 0x118294u);
    ctx->pc = 0x118290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11828Cu;
    // 0x118290: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118348u, 0x11828Cu, 0x118294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118294u;
label_118294:
    // 0x118294: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x118294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x118298: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x118298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x11829c: 0xc046080  jal         func_118200
    ctx->pc = 0x11829Cu;
    SET_GPR_U32(ctx, 31, 0x1182A4u);
    ctx->pc = 0x1182A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11829Cu;
    // 0x1182a0: 0x26a681c0  addiu       $a2, $s5, -0x7E40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294934976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118200u, 0x11829Cu, 0x1182A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1182A4u;
label_1182a4:
    // 0x1182a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1182a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182a8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1182a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1182ac: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1182acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x1182b0: 0xc046080  jal         func_118200
    ctx->pc = 0x1182B0u;
    SET_GPR_U32(ctx, 31, 0x1182B8u);
    ctx->pc = 0x1182B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1182B0u;
    // 0x1182b4: 0x26868188  addiu       $a2, $s4, -0x7E78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294934920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118200u, 0x1182B0u, 0x1182B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1182B8u;
label_1182b8:
    // 0x1182b8: 0x2671fdf4  addiu       $s1, $s3, -0x20C
    ctx->pc = 0x1182b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
    // 0x1182bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1182bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182c0: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x1182c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
    // 0x1182c4: 0x12300014  beq         $s1, $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1182C4u;
    {
        const bool branch_taken_0x1182c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x1182C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1182C4u;
        // 0x1182c8: 0x3c160040  lui         $s6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1182c4) {
            ctx->pc = 0x118318u;
            goto label_118318;
        }
    }
    ctx->pc = 0x1182CCu;
    // 0x1182cc: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x1182ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1182d0:
    // 0x1182d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1182D0u;
    {
        const bool branch_taken_0x1182d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1182D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1182D0u;
        // 0x1182d4: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1182d0) {
            ctx->pc = 0x1182F0u;
            goto label_1182f0;
        }
    }
    ctx->pc = 0x1182D8u;
    // 0x1182d8: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1182d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x1182dc: 0xc046080  jal         func_118200
    ctx->pc = 0x1182DCu;
    SET_GPR_U32(ctx, 31, 0x1182E4u);
    ctx->pc = 0x1182E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1182DCu;
    // 0x1182e0: 0x26a681c0  addiu       $a2, $s5, -0x7E40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294934976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118200u, 0x1182DCu, 0x1182E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1182E4u;
label_1182e4:
    // 0x1182e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1182e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1182E8u;
    {
        const bool branch_taken_0x1182e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1182ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1182E8u;
        // 0x1182ec: 0x2671fdf4  addiu       $s1, $s3, -0x20C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1182e8) {
            ctx->pc = 0x118308u;
            goto label_118308;
        }
    }
    ctx->pc = 0x1182F0u;
label_1182f0:
    // 0x1182f0: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1182f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1182f4: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x1182f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x1182f8: 0xc046080  jal         func_118200
    ctx->pc = 0x1182F8u;
    SET_GPR_U32(ctx, 31, 0x118300u);
    ctx->pc = 0x1182FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1182F8u;
    // 0x1182fc: 0x26868188  addiu       $a2, $s4, -0x7E78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294934920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118200u, 0x1182F8u, 0x118300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118300u;
label_118300:
    // 0x118300: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x118300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118304: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x118304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
label_118308:
    // 0x118308: 0x1630fff1  bne         $s1, $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x118308u;
    {
        const bool branch_taken_0x118308 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x11830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118308u;
        // 0x11830c: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118308) {
            ctx->pc = 0x1182D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1182d0;
        }
    }
    ctx->pc = 0x118310u;
    // 0x118310: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x118310u;
    {
        const bool branch_taken_0x118310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118310u;
        // 0x118314: 0xaed131b8  sw          $s1, 0x31B8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 12728), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118310) {
            ctx->pc = 0x11831Cu;
            goto label_11831c;
        }
    }
    ctx->pc = 0x118318u;
label_118318:
    // 0x118318: 0xaed131b8  sw          $s1, 0x31B8($s6)
    ctx->pc = 0x118318u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12728), GPR_U32(ctx, 17));
label_11831c:
    // 0x11831c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x11831cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x118320: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x118320u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x118324: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x118324u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x118328: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x118328u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11832c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11832cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118330: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118334: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11833c: 0x3e00008  jr          $ra
    ctx->pc = 0x11833Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11833Cu;
        // 0x118340: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11833Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118344u;
}
