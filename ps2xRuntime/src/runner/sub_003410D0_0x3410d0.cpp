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

// Function: sub_003410D0
// Address: 0x3410d0 - 0x341204
void sub_003410D0_0x3410d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003410D0_0x3410d0");
#endif

    switch (ctx->pc) {
        case 0x34110cu: goto label_34110c;
        case 0x341130u: goto label_341130;
        case 0x341144u: goto label_341144;
        case 0x341168u: goto label_341168;
        case 0x341174u: goto label_341174;
        case 0x341198u: goto label_341198;
        case 0x3411b0u: goto label_3411b0;
        case 0x3411d0u: goto label_3411d0;
        case 0x3411dcu: goto label_3411dc;
        case 0x3411f4u: goto label_3411f4;
        default: break;
    }

    ctx->pc = 0x3410d0u;

    // 0x3410d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3410d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3410d4: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x3410d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3410d8: 0x10200047  beqz        $at, . + 4 + (0x47 << 2)
    ctx->pc = 0x3410D8u;
    {
        const bool branch_taken_0x3410d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3410DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3410D8u;
        // 0x3410dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3410d8) {
            ctx->pc = 0x3411F8u;
            goto label_3411f8;
        }
    }
    ctx->pc = 0x3410E0u;
    // 0x3410e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3410e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3410e4: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3410e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3410e8: 0x2484f350  addiu       $a0, $a0, -0xCB0
    ctx->pc = 0x3410e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964048));
    // 0x3410ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3410ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3410f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3410f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3410f4: 0x600008  jr          $v1
    ctx->pc = 0x3410F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x341100u: goto label_341100;
            case 0x341118u: goto label_341118;
            case 0x341150u: goto label_341150;
            case 0x341180u: goto label_341180;
            case 0x3411B8u: goto label_3411b8;
            case 0x3411E8u: goto label_3411e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3410F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3410FCu;
    // 0x3410fc: 0x0  nop
    ctx->pc = 0x3410fcu;
    // NOP
label_341100:
    // 0x341100: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x341100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x341104: 0xc0d0428  jal         func_3410A0
    ctx->pc = 0x341104u;
    SET_GPR_U32(ctx, 31, 0x34110Cu);
    ctx->pc = 0x341108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341104u;
    // 0x341108: 0x248440d0  addiu       $a0, $a0, 0x40D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3410A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3410A0u, 0x341104u, 0x34110Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34110Cu;
label_34110c:
    // 0x34110c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x34110Cu;
    {
        const bool branch_taken_0x34110c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34110c) {
            ctx->pc = 0x3411F8u;
            goto label_3411f8;
        }
    }
    ctx->pc = 0x341114u;
    // 0x341114: 0x0  nop
    ctx->pc = 0x341114u;
    // NOP
label_341118:
    // 0x341118: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x341118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x34111c: 0x24842160  addiu       $a0, $a0, 0x2160
    ctx->pc = 0x34111cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8544));
    // 0x341120: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x341120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x341124: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x341124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341128: 0xc0e1a84  jal         func_386A10
    ctx->pc = 0x341128u;
    SET_GPR_U32(ctx, 31, 0x341130u);
    ctx->pc = 0x34112Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341128u;
    // 0x34112c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386A10u, 0x341128u, 0x341130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341130u;
label_341130:
    // 0x341130: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x341130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x341134: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x341134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x341138: 0x248440d0  addiu       $a0, $a0, 0x40D0
    ctx->pc = 0x341138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16592));
    // 0x34113c: 0xc0d0428  jal         func_3410A0
    ctx->pc = 0x34113Cu;
    SET_GPR_U32(ctx, 31, 0x341144u);
    ctx->pc = 0x341140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34113Cu;
    // 0x341140: 0xac2040d8  sw          $zero, 0x40D8($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 16600), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3410A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3410A0u, 0x34113Cu, 0x341144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341144u;
label_341144:
    // 0x341144: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x341144u;
    {
        const bool branch_taken_0x341144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341144) {
            ctx->pc = 0x3411F8u;
            goto label_3411f8;
        }
    }
    ctx->pc = 0x34114Cu;
    // 0x34114c: 0x0  nop
    ctx->pc = 0x34114cu;
    // NOP
label_341150:
    // 0x341150: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x341150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x341154: 0x24842160  addiu       $a0, $a0, 0x2160
    ctx->pc = 0x341154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8544));
    // 0x341158: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x341158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34115c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34115cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341160: 0xc0e1a84  jal         func_386A10
    ctx->pc = 0x341160u;
    SET_GPR_U32(ctx, 31, 0x341168u);
    ctx->pc = 0x341164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341160u;
    // 0x341164: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386A10u, 0x341160u, 0x341168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341168u;
label_341168:
    // 0x341168: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x341168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x34116c: 0xc0d0430  jal         func_3410C0
    ctx->pc = 0x34116Cu;
    SET_GPR_U32(ctx, 31, 0x341174u);
    ctx->pc = 0x341170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34116Cu;
    // 0x341170: 0x248440d0  addiu       $a0, $a0, 0x40D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3410C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3410C0u, 0x34116Cu, 0x341174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341174u;
label_341174:
    // 0x341174: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x341174u;
    {
        const bool branch_taken_0x341174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341174) {
            ctx->pc = 0x3411F8u;
            goto label_3411f8;
        }
    }
    ctx->pc = 0x34117Cu;
    // 0x34117c: 0x0  nop
    ctx->pc = 0x34117cu;
    // NOP
label_341180:
    // 0x341180: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x341180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x341184: 0x24842160  addiu       $a0, $a0, 0x2160
    ctx->pc = 0x341184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8544));
    // 0x341188: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x341188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34118c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34118cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341190: 0xc0e1a84  jal         func_386A10
    ctx->pc = 0x341190u;
    SET_GPR_U32(ctx, 31, 0x341198u);
    ctx->pc = 0x341194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341190u;
    // 0x341194: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386A10u, 0x341190u, 0x341198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341198u;
label_341198:
    // 0x341198: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x341198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x34119c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34119cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3411a0: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x3411a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x3411a4: 0x248440d0  addiu       $a0, $a0, 0x40D0
    ctx->pc = 0x3411a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16592));
    // 0x3411a8: 0xc0d0428  jal         func_3410A0
    ctx->pc = 0x3411A8u;
    SET_GPR_U32(ctx, 31, 0x3411B0u);
    ctx->pc = 0x3411ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3411A8u;
    // 0x3411ac: 0xac2240d8  sw          $v0, 0x40D8($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 16600), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3410A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3410A0u, 0x3411A8u, 0x3411B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3411B0u;
label_3411b0:
    // 0x3411b0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3411B0u;
    {
        const bool branch_taken_0x3411b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3411b0) {
            ctx->pc = 0x3411F8u;
            goto label_3411f8;
        }
    }
    ctx->pc = 0x3411B8u;
label_3411b8:
    // 0x3411b8: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x3411b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x3411bc: 0x24842160  addiu       $a0, $a0, 0x2160
    ctx->pc = 0x3411bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8544));
    // 0x3411c0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x3411c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3411c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3411c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3411c8: 0xc0e1a84  jal         func_386A10
    ctx->pc = 0x3411C8u;
    SET_GPR_U32(ctx, 31, 0x3411D0u);
    ctx->pc = 0x3411CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3411C8u;
    // 0x3411cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386A10u, 0x3411C8u, 0x3411D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3411D0u;
label_3411d0:
    // 0x3411d0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3411d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3411d4: 0xc0d0430  jal         func_3410C0
    ctx->pc = 0x3411D4u;
    SET_GPR_U32(ctx, 31, 0x3411DCu);
    ctx->pc = 0x3411D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3411D4u;
    // 0x3411d8: 0x248440d0  addiu       $a0, $a0, 0x40D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3410C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3410C0u, 0x3411D4u, 0x3411DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3411DCu;
label_3411dc:
    // 0x3411dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3411DCu;
    {
        const bool branch_taken_0x3411dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3411dc) {
            ctx->pc = 0x3411F8u;
            goto label_3411f8;
        }
    }
    ctx->pc = 0x3411E4u;
    // 0x3411e4: 0x0  nop
    ctx->pc = 0x3411e4u;
    // NOP
label_3411e8:
    // 0x3411e8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3411e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3411ec: 0xc0d0428  jal         func_3410A0
    ctx->pc = 0x3411ECu;
    SET_GPR_U32(ctx, 31, 0x3411F4u);
    ctx->pc = 0x3411F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3411ECu;
    // 0x3411f0: 0x248440d0  addiu       $a0, $a0, 0x40D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3410A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3410A0u, 0x3411ECu, 0x3411F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3411F4u;
label_3411f4:
    // 0x3411f4: 0x0  nop
    ctx->pc = 0x3411f4u;
    // NOP
label_3411f8:
    // 0x3411f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3411f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3411fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3411FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3411FCu;
        // 0x341200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3411FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341204u;
}
