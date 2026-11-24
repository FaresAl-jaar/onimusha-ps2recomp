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

// Function: sub_002058F0
// Address: 0x2058f0 - 0x205a2c
void sub_002058F0_0x2058f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002058F0_0x2058f0");
#endif

    switch (ctx->pc) {
        case 0x205910u: goto label_205910;
        case 0x205940u: goto label_205940;
        case 0x205958u: goto label_205958;
        case 0x205974u: goto label_205974;
        case 0x20597cu: goto label_20597c;
        case 0x205988u: goto label_205988;
        case 0x205990u: goto label_205990;
        case 0x205998u: goto label_205998;
        case 0x2059a0u: goto label_2059a0;
        case 0x2059a8u: goto label_2059a8;
        case 0x2059b0u: goto label_2059b0;
        case 0x2059b8u: goto label_2059b8;
        case 0x2059c0u: goto label_2059c0;
        case 0x2059c8u: goto label_2059c8;
        case 0x2059d0u: goto label_2059d0;
        case 0x2059d8u: goto label_2059d8;
        case 0x2059e0u: goto label_2059e0;
        case 0x2059e8u: goto label_2059e8;
        case 0x2059f0u: goto label_2059f0;
        default: break;
    }

    ctx->pc = 0x2058f0u;

    // 0x2058f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2058f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2058f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2058f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2058f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2058f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2058fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2058fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x205900: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x205900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x205904: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x205904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x205908: 0xc081544  jal         func_205510
    ctx->pc = 0x205908u;
    SET_GPR_U32(ctx, 31, 0x205910u);
    ctx->pc = 0x205510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205510u, 0x205908u, 0x205910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205910u;
label_205910:
    // 0x205910: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x205910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x205914: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205918: 0x246386d8  addiu       $v1, $v1, -0x7928
    ctx->pc = 0x205918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936280));
    // 0x20591c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20591cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B86D8u));
    // 0x205920: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x205920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x205924: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x205924u;
    {
        const bool branch_taken_0x205924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205924u;
        // 0x205928: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205924) {
            ctx->pc = 0x205A10u;
            goto label_205a10;
        }
    }
    ctx->pc = 0x20592Cu;
    // 0x20592c: 0x2490006c  addiu       $s0, $a0, 0x6C
    ctx->pc = 0x20592cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
    // 0x205930: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x205930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205934: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x205934u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205938: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x205938u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20593c: 0x0  nop
    ctx->pc = 0x20593cu;
    // NOP
label_205940:
    // 0x205940: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x205940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x205944: 0x54530005  bnel        $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x205944u;
    {
        const bool branch_taken_0x205944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x205944) {
            ctx->pc = 0x205948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205944u;
            // 0x205948: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20595Cu;
            goto label_20595c;
        }
    }
    ctx->pc = 0x20594Cu;
    // 0x20594c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20594cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205950: 0xc080e42  jal         func_203908
    ctx->pc = 0x205950u;
    SET_GPR_U32(ctx, 31, 0x205958u);
    ctx->pc = 0x205954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205950u;
    // 0x205954: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203908u, 0x205950u, 0x205958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205958u;
label_205958:
    // 0x205958: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x205958u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_20595c:
    // 0x20595c: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x20595Cu;
    {
        const bool branch_taken_0x20595c = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x205960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20595Cu;
        // 0x205960: 0x26100304  addiu       $s0, $s0, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20595c) {
            ctx->pc = 0x205940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_205940;
        }
    }
    ctx->pc = 0x205964u;
    // 0x205964: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x205964u;
    {
        const bool branch_taken_0x205964 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x205968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205964u;
        // 0x205968: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205964) {
            ctx->pc = 0x205988u;
            goto label_205988;
        }
    }
    ctx->pc = 0x20596Cu;
    // 0x20596c: 0xc083178  jal         func_20C5E0
    ctx->pc = 0x20596Cu;
    SET_GPR_U32(ctx, 31, 0x205974u);
    ctx->pc = 0x205970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20596Cu;
    // 0x205970: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C5E0u, 0x20596Cu, 0x205974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205974u;
label_205974:
    // 0x205974: 0xc082e64  jal         func_20B990
    ctx->pc = 0x205974u;
    SET_GPR_U32(ctx, 31, 0x20597Cu);
    ctx->pc = 0x20B990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B990u, 0x205974u, 0x20597Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20597Cu;
label_20597c:
    // 0x20597c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20597cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205980: 0xc083178  jal         func_20C5E0
    ctx->pc = 0x205980u;
    SET_GPR_U32(ctx, 31, 0x205988u);
    ctx->pc = 0x205984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205980u;
    // 0x205984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C5E0u, 0x205980u, 0x205988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205988u;
label_205988:
    // 0x205988: 0xc082dea  jal         func_20B7A8
    ctx->pc = 0x205988u;
    SET_GPR_U32(ctx, 31, 0x205990u);
    ctx->pc = 0x20B7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B7A8u, 0x205988u, 0x205990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205990u;
label_205990:
    // 0x205990: 0xc082daa  jal         func_20B6A8
    ctx->pc = 0x205990u;
    SET_GPR_U32(ctx, 31, 0x205998u);
    ctx->pc = 0x20B6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B6A8u, 0x205990u, 0x205998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205998u;
label_205998:
    // 0x205998: 0xc082dd6  jal         func_20B758
    ctx->pc = 0x205998u;
    SET_GPR_U32(ctx, 31, 0x2059A0u);
    ctx->pc = 0x20B758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B758u, 0x205998u, 0x2059A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2059A0u;
label_2059a0:
    // 0x2059a0: 0xc082dc0  jal         func_20B700
    ctx->pc = 0x2059A0u;
    SET_GPR_U32(ctx, 31, 0x2059A8u);
    ctx->pc = 0x20B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B700u, 0x2059A0u, 0x2059A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2059A8u;
label_2059a8:
    // 0x2059a8: 0xc0821d2  jal         func_208748
    ctx->pc = 0x2059A8u;
    SET_GPR_U32(ctx, 31, 0x2059B0u);
    ctx->pc = 0x208748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208748u, 0x2059A8u, 0x2059B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2059B0u;
label_2059b0:
    // 0x2059b0: 0xc093050  jal         func_24C140
    ctx->pc = 0x2059B0u;
    SET_GPR_U32(ctx, 31, 0x2059B8u);
    ctx->pc = 0x24C140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C140u, 0x2059B0u, 0x2059B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2059B8u;
label_2059b8:
    // 0x2059b8: 0xc0816ca  jal         func_205B28
    ctx->pc = 0x2059B8u;
    SET_GPR_U32(ctx, 31, 0x2059C0u);
    ctx->pc = 0x205B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205B28u, 0x2059B8u, 0x2059C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2059C0u;
label_2059c0:
    // 0x2059c0: 0xc08ca1a  jal         func_232868
    ctx->pc = 0x2059C0u;
    SET_GPR_U32(ctx, 31, 0x2059C8u);
    ctx->pc = 0x232868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232868u, 0x2059C0u, 0x2059C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2059C8u;
label_2059c8:
    // 0x2059c8: 0xc083206  jal         func_20C818
    ctx->pc = 0x2059C8u;
    SET_GPR_U32(ctx, 31, 0x2059D0u);
    ctx->pc = 0x20C818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C818u, 0x2059C8u, 0x2059D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2059D0u;
label_2059d0:
    // 0x2059d0: 0xc09450e  jal         func_251438
    ctx->pc = 0x2059D0u;
    SET_GPR_U32(ctx, 31, 0x2059D8u);
    ctx->pc = 0x251438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251438u, 0x2059D0u, 0x2059D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2059D8u;
label_2059d8:
    // 0x2059d8: 0xc093f86  jal         func_24FE18
    ctx->pc = 0x2059D8u;
    SET_GPR_U32(ctx, 31, 0x2059E0u);
    ctx->pc = 0x24FE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FE18u, 0x2059D8u, 0x2059E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2059E0u;
label_2059e0:
    // 0x2059e0: 0xc09420c  jal         func_250830
    ctx->pc = 0x2059E0u;
    SET_GPR_U32(ctx, 31, 0x2059E8u);
    ctx->pc = 0x250830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250830u, 0x2059E0u, 0x2059E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2059E8u;
label_2059e8:
    // 0x2059e8: 0xc081ac4  jal         func_206B10
    ctx->pc = 0x2059E8u;
    SET_GPR_U32(ctx, 31, 0x2059F0u);
    ctx->pc = 0x206B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206B10u, 0x2059E8u, 0x2059F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2059F0u;
label_2059f0:
    // 0x2059f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2059f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2059f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2059f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2059f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2059f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2059fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2059fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205a00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x205a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x205a04: 0x8082d6e  j           func_20B5B8
    ctx->pc = 0x205A04u;
    ctx->pc = 0x205A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205A04u;
    // 0x205a08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B5B8u;
    sub_0020B5B8_0x20b5b8(rdram, ctx, runtime); return;
    ctx->pc = 0x205A0Cu;
    // 0x205a0c: 0x0  nop
    ctx->pc = 0x205a0cu;
    // NOP
label_205a10:
    // 0x205a10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205a10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205a14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x205a14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205a18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x205a18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205a1c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x205a1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205a20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x205a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x205a24: 0x3e00008  jr          $ra
    ctx->pc = 0x205A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205A24u;
        // 0x205a28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205A2Cu;
}
