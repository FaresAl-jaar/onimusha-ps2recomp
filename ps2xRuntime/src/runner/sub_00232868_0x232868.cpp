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

// Function: sub_00232868
// Address: 0x232868 - 0x232990
void sub_00232868_0x232868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232868_0x232868");
#endif

    switch (ctx->pc) {
        case 0x2328acu: goto label_2328ac;
        case 0x2328b4u: goto label_2328b4;
        case 0x2328bcu: goto label_2328bc;
        case 0x2328c4u: goto label_2328c4;
        case 0x2328ccu: goto label_2328cc;
        case 0x2328d4u: goto label_2328d4;
        case 0x2328e0u: goto label_2328e0;
        case 0x2328f0u: goto label_2328f0;
        case 0x232900u: goto label_232900;
        case 0x232908u: goto label_232908;
        case 0x232910u: goto label_232910;
        case 0x232918u: goto label_232918;
        case 0x232920u: goto label_232920;
        case 0x232928u: goto label_232928;
        case 0x232930u: goto label_232930;
        case 0x232938u: goto label_232938;
        case 0x232940u: goto label_232940;
        case 0x232950u: goto label_232950;
        case 0x232964u: goto label_232964;
        case 0x23296cu: goto label_23296c;
        default: break;
    }

    ctx->pc = 0x232868u;

    // 0x232868: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23286c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x23286cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x232870: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232874: 0x2463ef68  addiu       $v1, $v1, -0x1098
    ctx->pc = 0x232874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963048));
    // 0x232878: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x232878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23287c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23287cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x232880: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x232880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x232884: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x232884u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BEF68u));
    // 0x232888: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x232888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23288c: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x23288Cu;
    {
        const bool branch_taken_0x23288c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23288Cu;
        // 0x232890: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23288c) {
            ctx->pc = 0x232978u;
            goto label_232978;
        }
    }
    ctx->pc = 0x232894u;
    // 0x232894: 0x3c10004d  lui         $s0, 0x4D
    ctx->pc = 0x232894u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)77 << 16));
    // 0x232898: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x232898u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
    // 0x23289c: 0x2610f22c  addiu       $s0, $s0, -0xDD4
    ctx->pc = 0x23289cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963756));
    // 0x2328a0: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x2328a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2328a4: 0xc08e5e6  jal         func_239798
    ctx->pc = 0x2328A4u;
    SET_GPR_U32(ctx, 31, 0x2328ACu);
    ctx->pc = 0x2328A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2328A4u;
    // 0x2328a8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239798u, 0x2328A4u, 0x2328ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2328ACu;
label_2328ac:
    // 0x2328ac: 0xc08d52a  jal         func_2354A8
    ctx->pc = 0x2328ACu;
    SET_GPR_U32(ctx, 31, 0x2328B4u);
    ctx->pc = 0x2354A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2354A8u, 0x2328ACu, 0x2328B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2328B4u;
label_2328b4:
    // 0x2328b4: 0xc08bb8a  jal         func_22EE28
    ctx->pc = 0x2328B4u;
    SET_GPR_U32(ctx, 31, 0x2328BCu);
    ctx->pc = 0x22EE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EE28u, 0x2328B4u, 0x2328BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2328BCu;
label_2328bc:
    // 0x2328bc: 0xc08dbdc  jal         func_236F70
    ctx->pc = 0x2328BCu;
    SET_GPR_U32(ctx, 31, 0x2328C4u);
    ctx->pc = 0x236F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236F70u, 0x2328BCu, 0x2328C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2328C4u;
label_2328c4:
    // 0x2328c4: 0xc093050  jal         func_24C140
    ctx->pc = 0x2328C4u;
    SET_GPR_U32(ctx, 31, 0x2328CCu);
    ctx->pc = 0x24C140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C140u, 0x2328C4u, 0x2328CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2328CCu;
label_2328cc:
    // 0x2328cc: 0xc08b528  jal         func_22D4A0
    ctx->pc = 0x2328CCu;
    SET_GPR_U32(ctx, 31, 0x2328D4u);
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x2328CCu, 0x2328D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2328D4u;
label_2328d4:
    // 0x2328d4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2328d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2328d8: 0xc094d12  jal         func_253448
    ctx->pc = 0x2328D8u;
    SET_GPR_U32(ctx, 31, 0x2328E0u);
    ctx->pc = 0x2328DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2328D8u;
    // 0x2328dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253448u, 0x2328D8u, 0x2328E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2328E0u;
label_2328e0:
    // 0x2328e0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2328e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2328e4: 0x8c45ef7c  lw          $a1, -0x1084($v0)
    ctx->pc = 0x2328e4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4BEF7Cu));
    // 0x2328e8: 0xc094d12  jal         func_253448
    ctx->pc = 0x2328E8u;
    SET_GPR_U32(ctx, 31, 0x2328F0u);
    ctx->pc = 0x2328ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2328E8u;
    // 0x2328ec: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253448u, 0x2328E8u, 0x2328F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2328F0u;
label_2328f0:
    // 0x2328f0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2328f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2328f4: 0x8c45ef70  lw          $a1, -0x1090($v0)
    ctx->pc = 0x2328f4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4BEF70u));
    // 0x2328f8: 0xc094d12  jal         func_253448
    ctx->pc = 0x2328F8u;
    SET_GPR_U32(ctx, 31, 0x232900u);
    ctx->pc = 0x2328FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2328F8u;
    // 0x2328fc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253448u, 0x2328F8u, 0x232900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232900u;
label_232900:
    // 0x232900: 0xc094eb8  jal         func_253AE0
    ctx->pc = 0x232900u;
    SET_GPR_U32(ctx, 31, 0x232908u);
    ctx->pc = 0x253AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253AE0u, 0x232900u, 0x232908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232908u;
label_232908:
    // 0x232908: 0xc08d61c  jal         func_235870
    ctx->pc = 0x232908u;
    SET_GPR_U32(ctx, 31, 0x232910u);
    ctx->pc = 0x235870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235870u, 0x232908u, 0x232910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232910u;
label_232910:
    // 0x232910: 0xc08ba8c  jal         func_22EA30
    ctx->pc = 0x232910u;
    SET_GPR_U32(ctx, 31, 0x232918u);
    ctx->pc = 0x22EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA30u, 0x232910u, 0x232918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232918u;
label_232918:
    // 0x232918: 0xc093f86  jal         func_24FE18
    ctx->pc = 0x232918u;
    SET_GPR_U32(ctx, 31, 0x232920u);
    ctx->pc = 0x24FE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FE18u, 0x232918u, 0x232920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232920u;
label_232920:
    // 0x232920: 0xc09420c  jal         func_250830
    ctx->pc = 0x232920u;
    SET_GPR_U32(ctx, 31, 0x232928u);
    ctx->pc = 0x250830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250830u, 0x232920u, 0x232928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232928u;
label_232928:
    // 0x232928: 0xc09450e  jal         func_251438
    ctx->pc = 0x232928u;
    SET_GPR_U32(ctx, 31, 0x232930u);
    ctx->pc = 0x251438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251438u, 0x232928u, 0x232930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232930u;
label_232930:
    // 0x232930: 0xc08b52e  jal         func_22D4B8
    ctx->pc = 0x232930u;
    SET_GPR_U32(ctx, 31, 0x232938u);
    ctx->pc = 0x22D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4B8u, 0x232930u, 0x232938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232938u;
label_232938:
    // 0x232938: 0xc08b51c  jal         func_22D470
    ctx->pc = 0x232938u;
    SET_GPR_U32(ctx, 31, 0x232940u);
    ctx->pc = 0x22D470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D470u, 0x232938u, 0x232940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232940u;
label_232940:
    // 0x232940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x232940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x232944: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x232944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x232948: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x232948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x23294c: 0x2470ef88  addiu       $s0, $v1, -0x1078
    ctx->pc = 0x23294cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963080));
label_232950:
    // 0x232950: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x232950u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x232954: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x232954u;
    {
        const bool branch_taken_0x232954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232954) {
            ctx->pc = 0x232958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232954u;
            // 0x232958: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232970u;
            goto label_232970;
        }
    }
    ctx->pc = 0x23295Cu;
    // 0x23295c: 0xc094c1e  jal         func_253078
    ctx->pc = 0x23295Cu;
    SET_GPR_U32(ctx, 31, 0x232964u);
    ctx->pc = 0x232960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23295Cu;
    // 0x232960: 0x2644ab78  addiu       $a0, $s2, -0x5488 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253078u, 0x23295Cu, 0x232964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232964u;
label_232964:
    // 0x232964: 0xc08e564  jal         func_239590
    ctx->pc = 0x232964u;
    SET_GPR_U32(ctx, 31, 0x23296Cu);
    ctx->pc = 0x232968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232964u;
    // 0x232968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239590u, 0x232964u, 0x23296Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23296Cu;
label_23296c:
    // 0x23296c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x23296cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_232970:
    // 0x232970: 0x621fff7  bgez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x232970u;
    {
        const bool branch_taken_0x232970 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x232974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232970u;
        // 0x232974: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232970) {
            ctx->pc = 0x232950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232950;
        }
    }
    ctx->pc = 0x232978u;
label_232978:
    // 0x232978: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23297c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23297cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x232980: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x232980u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232984: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x232984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x232988: 0x3e00008  jr          $ra
    ctx->pc = 0x232988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232988u;
        // 0x23298c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232990u;
}
