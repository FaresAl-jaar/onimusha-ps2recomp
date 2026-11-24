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

// Function: sub_00118480
// Address: 0x118480 - 0x11852c
void sub_00118480_0x118480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118480_0x118480");
#endif

    switch (ctx->pc) {
        case 0x118498u: goto label_118498;
        case 0x1184b8u: goto label_1184b8;
        case 0x1184d0u: goto label_1184d0;
        case 0x1184d8u: goto label_1184d8;
        case 0x1184e0u: goto label_1184e0;
        case 0x1184ecu: goto label_1184ec;
        case 0x1184f0u: goto label_1184f0;
        case 0x1184f8u: goto label_1184f8;
        case 0x118508u: goto label_118508;
        default: break;
    }

    ctx->pc = 0x118480u;

    // 0x118480: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x118480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x118484: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x118484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x118488: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x118488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11848c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11848cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118490: 0xc046106  jal         func_118418
    ctx->pc = 0x118490u;
    SET_GPR_U32(ctx, 31, 0x118498u);
    ctx->pc = 0x118494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118490u;
    // 0x118494: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118418u, 0x118490u, 0x118498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118498u;
label_118498:
    // 0x118498: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x118498u;
    {
        const bool branch_taken_0x118498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118498u;
        // 0x11849c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118498) {
            ctx->pc = 0x118514u;
            goto label_118514;
        }
    }
    ctx->pc = 0x1184A0u;
    // 0x1184a0: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1184a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1184a4: 0x24503980  addiu       $s0, $v0, 0x3980
    ctx->pc = 0x1184a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 14720));
    // 0x1184a8: 0x8c443980  lw          $a0, 0x3980($v0)
    ctx->pc = 0x1184a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14720)));
    // 0x1184ac: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1184acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1184b0: 0xc0460ec  jal         func_1183B0
    ctx->pc = 0x1184B0u;
    SET_GPR_U32(ctx, 31, 0x1184B8u);
    ctx->pc = 0x1184B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1184B0u;
    // 0x1184b4: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1183B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1183B0u, 0x1184B0u, 0x1184B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1184B8u;
label_1184b8:
    // 0x1184b8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1184b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1184bc: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x1184bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x1184c0: 0x240607a8  addiu       $a2, $zero, 0x7A8
    ctx->pc = 0x1184c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1960));
    // 0x1184c4: 0x24a531d8  addiu       $a1, $a1, 0x31D8
    ctx->pc = 0x1184c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12760));
    // 0x1184c8: 0xc0460f0  jal         func_1183C0
    ctx->pc = 0x1184C8u;
    SET_GPR_U32(ctx, 31, 0x1184D0u);
    ctx->pc = 0x1184CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1184C8u;
    // 0x1184cc: 0x34844000  ori         $a0, $a0, 0x4000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1183C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1183C0u, 0x1184C8u, 0x1184D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1184D0u;
label_1184d0:
    // 0x1184d0: 0xc043898  jal         func_10E260
    ctx->pc = 0x1184D0u;
    SET_GPR_U32(ctx, 31, 0x1184D8u);
    ctx->pc = 0x1184D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1184D0u;
    // 0x1184d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x1184D0u, 0x1184D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1184D8u;
label_1184d8:
    // 0x1184d8: 0xc043898  jal         func_10E260
    ctx->pc = 0x1184D8u;
    SET_GPR_U32(ctx, 31, 0x1184E0u);
    ctx->pc = 0x1184DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1184D8u;
    // 0x1184dc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x1184D8u, 0x1184E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1184E0u;
label_1184e0:
    // 0x1184e0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1184e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1184e4: 0xc0460ec  jal         func_1183B0
    ctx->pc = 0x1184E4u;
    SET_GPR_U32(ctx, 31, 0x1184ECu);
    ctx->pc = 0x1184E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1184E4u;
    // 0x1184e8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1183B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1183B0u, 0x1184E4u, 0x1184ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1184ECu;
label_1184ec:
    // 0x1184ec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1184ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1184f0:
    // 0x1184f0: 0xc046102  jal         func_118408
    ctx->pc = 0x1184F0u;
    SET_GPR_U32(ctx, 31, 0x1184F8u);
    ctx->pc = 0x1184F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1184F0u;
    // 0x1184f4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118408u, 0x1184F0u, 0x1184F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1184F8u;
label_1184f8:
    // 0x1184f8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1184f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1184fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1184fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118500: 0xc0460ec  jal         func_1183B0
    ctx->pc = 0x118500u;
    SET_GPR_U32(ctx, 31, 0x118508u);
    ctx->pc = 0x118504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118500u;
    // 0x118504: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1183B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1183B0u, 0x118500u, 0x118508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118508u;
label_118508:
    // 0x118508: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x118508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x11850c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11850Cu;
    {
        const bool branch_taken_0x11850c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11850c) {
            ctx->pc = 0x118510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11850Cu;
            // 0x118510: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1184F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1184f0;
        }
    }
    ctx->pc = 0x118514u;
label_118514:
    // 0x118514: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x118514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118518: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118518u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11851c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11851cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118520: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118524: 0x3e00008  jr          $ra
    ctx->pc = 0x118524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118524u;
        // 0x118528: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11852Cu;
}
