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

// Function: sub_00113278
// Address: 0x113278 - 0x113368
void sub_00113278_0x113278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113278_0x113278");
#endif

    switch (ctx->pc) {
        case 0x113294u: goto label_113294;
        case 0x1132acu: goto label_1132ac;
        case 0x1132b4u: goto label_1132b4;
        case 0x1132c4u: goto label_1132c4;
        case 0x1132d8u: goto label_1132d8;
        case 0x1132e8u: goto label_1132e8;
        case 0x11332cu: goto label_11332c;
        case 0x11333cu: goto label_11333c;
        case 0x113350u: goto label_113350;
        default: break;
    }

    ctx->pc = 0x113278u;

    // 0x113278: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x113278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11327c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11327cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x113280: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x113280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113284: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x113284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x113288: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x113288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11328c: 0xc044b50  jal         func_112D40
    ctx->pc = 0x11328Cu;
    SET_GPR_U32(ctx, 31, 0x113294u);
    ctx->pc = 0x113290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11328Cu;
    // 0x113290: 0x240400fd  addiu       $a0, $zero, 0xFD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x11328Cu, 0x113294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113294u;
label_113294:
    // 0x113294: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x113294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x113298: 0x8c622b3c  lw          $v0, 0x2B3C($v1)
    ctx->pc = 0x113298u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x402B3Cu));
    // 0x11329c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11329Cu;
    {
        const bool branch_taken_0x11329c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11329c) {
            ctx->pc = 0x1132ACu;
            goto label_1132ac;
        }
    }
    ctx->pc = 0x1132A4u;
    // 0x1132a4: 0xc044b9a  jal         func_112E68
    ctx->pc = 0x1132A4u;
    SET_GPR_U32(ctx, 31, 0x1132ACu);
    ctx->pc = 0x112E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112E68u, 0x1132A4u, 0x1132ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1132ACu;
label_1132ac:
    // 0x1132ac: 0xc044c1c  jal         func_113070
    ctx->pc = 0x1132ACu;
    SET_GPR_U32(ctx, 31, 0x1132B4u);
    ctx->pc = 0x113070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113070u, 0x1132ACu, 0x1132B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1132B4u;
label_1132b4:
    // 0x1132b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1132B4u;
    {
        const bool branch_taken_0x1132b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1132b4) {
            ctx->pc = 0x1132D0u;
            goto label_1132d0;
        }
    }
    ctx->pc = 0x1132BCu;
    // 0x1132bc: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x1132BCu;
    SET_GPR_U32(ctx, 31, 0x1132C4u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x1132BCu, 0x1132C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1132C4u;
label_1132c4:
    // 0x1132c4: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1132c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1132c8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1132C8u;
    {
        const bool branch_taken_0x1132c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1132CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132C8u;
        // 0x1132cc: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132c8) {
            ctx->pc = 0x113354u;
            goto label_113354;
        }
    }
    ctx->pc = 0x1132D0u;
label_1132d0:
    // 0x1132d0: 0xc0449b2  jal         func_1126C8
    ctx->pc = 0x1132D0u;
    SET_GPR_U32(ctx, 31, 0x1132D8u);
    ctx->pc = 0x1126C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1126C8u, 0x1132D0u, 0x1132D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1132D8u;
label_1132d8:
    // 0x1132d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1132D8u;
    {
        const bool branch_taken_0x1132d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1132DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132D8u;
        // 0x1132dc: 0x3c070069  lui         $a3, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132d8) {
            ctx->pc = 0x1132F0u;
            goto label_1132f0;
        }
    }
    ctx->pc = 0x1132E0u;
    // 0x1132e0: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x1132E0u;
    SET_GPR_U32(ctx, 31, 0x1132E8u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x1132E0u, 0x1132E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1132E8u;
label_1132e8:
    // 0x1132e8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1132E8u;
    {
        const bool branch_taken_0x1132e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1132ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132E8u;
        // 0x1132ec: 0x2402fff0  addiu       $v0, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132e8) {
            ctx->pc = 0x113354u;
            goto label_113354;
        }
    }
    ctx->pc = 0x1132F0u;
label_1132f0:
    // 0x1132f0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1132f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1132f4: 0x2451f8c0  addiu       $s1, $v0, -0x740
    ctx->pc = 0x1132f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965440));
    // 0x1132f8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x1132f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x1132fc: 0xacf0ec80  sw          $s0, -0x1380($a3)
    ctx->pc = 0x1132fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294962304), GPR_U32(ctx, 16));
    // 0x113300: 0x24840380  addiu       $a0, $a0, 0x380
    ctx->pc = 0x113300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    // 0x113304: 0x24e7ec80  addiu       $a3, $a3, -0x1380
    ctx->pc = 0x113304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962304));
    // 0x113308: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x113308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11330c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x11330cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x113310: 0x240500fd  addiu       $a1, $zero, 0xFD
    ctx->pc = 0x113310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x113314: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x113314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113318: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x113318u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11331c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x11331cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113320: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x113320u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x113324: 0xc0449f4  jal         func_1127D0
    ctx->pc = 0x113324u;
    SET_GPR_U32(ctx, 31, 0x11332Cu);
    ctx->pc = 0x113328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113324u;
    // 0x113328: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127D0u, 0x113324u, 0x11332Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11332Cu;
label_11332c:
    // 0x11332c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11332Cu;
    {
        const bool branch_taken_0x11332c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x113330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11332Cu;
        // 0x113330: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11332c) {
            ctx->pc = 0x113344u;
            goto label_113344;
        }
    }
    ctx->pc = 0x113334u;
    // 0x113334: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x113334u;
    SET_GPR_U32(ctx, 31, 0x11333Cu);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x113334u, 0x11333Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11333Cu;
label_11333c:
    // 0x11333c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11333Cu;
    {
        const bool branch_taken_0x11333c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11333Cu;
        // 0x113340: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11333c) {
            ctx->pc = 0x113354u;
            goto label_113354;
        }
    }
    ctx->pc = 0x113344u;
label_113344:
    // 0x113344: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x113344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x113348: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x113348u;
    SET_GPR_U32(ctx, 31, 0x113350u);
    ctx->pc = 0x11334Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113348u;
    // 0x11334c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x113348u, 0x113350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113350u;
label_113350:
    // 0x113350: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x113350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_113354:
    // 0x113354: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x113354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x113358: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x113358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11335c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11335cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113360: 0x3e00008  jr          $ra
    ctx->pc = 0x113360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113360u;
        // 0x113364: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113368u;
}
