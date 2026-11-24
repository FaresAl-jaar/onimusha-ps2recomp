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

// Function: sub_0020A8C0
// Address: 0x20a8c0 - 0x20a97c
void sub_0020A8C0_0x20a8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A8C0_0x20a8c0");
#endif

    switch (ctx->pc) {
        case 0x20a900u: goto label_20a900;
        case 0x20a918u: goto label_20a918;
        case 0x20a93cu: goto label_20a93c;
        case 0x20a950u: goto label_20a950;
        default: break;
    }

    ctx->pc = 0x20a8c0u;

    // 0x20a8c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20a8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20a8c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20a8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20a8c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20a8c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a8cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20a8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20a8d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20a8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20a8d4: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x20a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x20a8d8: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x20A8D8u;
    {
        const bool branch_taken_0x20a8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a8d8) {
            ctx->pc = 0x20A8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A8D8u;
            // 0x20a8dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A96Cu;
            goto label_20a96c;
        }
    }
    ctx->pc = 0x20A8E0u;
    // 0x20a8e0: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x20a8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x20a8e4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x20A8E4u;
    {
        const bool branch_taken_0x20a8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8E4u;
        // 0x20a8e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8e4) {
            ctx->pc = 0x20A968u;
            goto label_20a968;
        }
    }
    ctx->pc = 0x20A8ECu;
    // 0x20a8ec: 0x8e0302e8  lw          $v1, 0x2E8($s0)
    ctx->pc = 0x20a8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
    // 0x20a8f0: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20A8F0u;
    {
        const bool branch_taken_0x20a8f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20a8f0) {
            ctx->pc = 0x20A8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A8F0u;
            // 0x20a8f4: 0x2462fffe  addiu       $v0, $v1, -0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A928u;
            goto label_20a928;
        }
    }
    ctx->pc = 0x20A8F8u;
    // 0x20a8f8: 0xc081dae  jal         func_2076B8
    ctx->pc = 0x20A8F8u;
    SET_GPR_U32(ctx, 31, 0x20A900u);
    ctx->pc = 0x2076B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2076B8u, 0x20A8F8u, 0x20A900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A900u;
label_20a900:
    // 0x20a900: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20a900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a904: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20a904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a908: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20A908u;
    {
        const bool branch_taken_0x20a908 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x20a908) {
            ctx->pc = 0x20A90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A908u;
            // 0x20a90c: 0x8e0302e8  lw          $v1, 0x2E8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A924u;
            goto label_20a924;
        }
    }
    ctx->pc = 0x20A910u;
    // 0x20a910: 0xc082a90  jal         func_20AA40
    ctx->pc = 0x20A910u;
    SET_GPR_U32(ctx, 31, 0x20A918u);
    ctx->pc = 0x20A914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A910u;
    // 0x20a914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AA40u, 0x20A910u, 0x20A918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A918u;
label_20a918:
    // 0x20a918: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x20A918u;
    {
        const bool branch_taken_0x20a918 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x20A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A918u;
        // 0x20a91c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a918) {
            ctx->pc = 0x20A968u;
            goto label_20a968;
        }
    }
    ctx->pc = 0x20A920u;
    // 0x20a920: 0xae1102e8  sw          $s1, 0x2E8($s0)
    ctx->pc = 0x20a920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 17));
label_20a924:
    // 0x20a924: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x20a924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_20a928:
    // 0x20a928: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x20a928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x20a92c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x20A92Cu;
    {
        const bool branch_taken_0x20a92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a92c) {
            ctx->pc = 0x20A930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A92Cu;
            // 0x20a930: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A96Cu;
            goto label_20a96c;
        }
    }
    ctx->pc = 0x20A934u;
    // 0x20a934: 0xc081dca  jal         func_207728
    ctx->pc = 0x20A934u;
    SET_GPR_U32(ctx, 31, 0x20A93Cu);
    ctx->pc = 0x20A938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A934u;
    // 0x20a938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207728u, 0x20A934u, 0x20A93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A93Cu;
label_20a93c:
    // 0x20a93c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20a93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20a940: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20A940u;
    {
        const bool branch_taken_0x20a940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20a940) {
            ctx->pc = 0x20A944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A940u;
            // 0x20a944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A954u;
            goto label_20a954;
        }
    }
    ctx->pc = 0x20A948u;
    // 0x20a948: 0xc082a62  jal         func_20A988
    ctx->pc = 0x20A948u;
    SET_GPR_U32(ctx, 31, 0x20A950u);
    ctx->pc = 0x20A94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A948u;
    // 0x20a94c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A988u, 0x20A948u, 0x20A950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A950u;
label_20a950:
    // 0x20a950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a954:
    // 0x20a954: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a958: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20a958u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a95c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20a95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a960: 0x8082ac0  j           func_20AB00
    ctx->pc = 0x20A960u;
    ctx->pc = 0x20A964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A960u;
    // 0x20a964: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AB00u;
    sub_0020AB00_0x20ab00(rdram, ctx, runtime); return;
    ctx->pc = 0x20A968u;
label_20a968:
    // 0x20a968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20a96c:
    // 0x20a96c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20a96cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a970: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20a970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a974: 0x3e00008  jr          $ra
    ctx->pc = 0x20A974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A974u;
        // 0x20a978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A97Cu;
}
