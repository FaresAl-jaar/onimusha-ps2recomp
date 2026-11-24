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

// Function: sub_00276080
// Address: 0x276080 - 0x276198
void sub_00276080_0x276080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276080_0x276080");
#endif

    switch (ctx->pc) {
        case 0x2760c8u: goto label_2760c8;
        case 0x2760d8u: goto label_2760d8;
        case 0x276124u: goto label_276124;
        case 0x276188u: goto label_276188;
        default: break;
    }

    ctx->pc = 0x276080u;

    // 0x276080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x276084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276088: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x276088u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27608c: 0x2c41000b  sltiu       $at, $v0, 0xB
    ctx->pc = 0x27608cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x276090: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x276090u;
    {
        const bool branch_taken_0x276090 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x276094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276090u;
        // 0x276094: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276090) {
            ctx->pc = 0x276188u;
            goto label_276188;
        }
    }
    ctx->pc = 0x276098u;
    // 0x276098: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x276098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x27609c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27609cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2760a0: 0x24635b10  addiu       $v1, $v1, 0x5B10
    ctx->pc = 0x2760a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23312));
    // 0x2760a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2760a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2760a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2760a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2760ac: 0x400008  jr          $v0
    ctx->pc = 0x2760ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2760B8u: goto label_2760b8;
            case 0x2760D0u: goto label_2760d0;
            case 0x2760E0u: goto label_2760e0;
            case 0x2760F0u: goto label_2760f0;
            case 0x276110u: goto label_276110;
            case 0x276130u: goto label_276130;
            case 0x276140u: goto label_276140;
            case 0x276150u: goto label_276150;
            case 0x276180u: goto label_276180;
            case 0x276188u: goto label_276188;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2760ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2760B4u;
    // 0x2760b4: 0x0  nop
    ctx->pc = 0x2760b4u;
    // NOP
label_2760b8:
    // 0x2760b8: 0x90a60002  lbu         $a2, 0x2($a1)
    ctx->pc = 0x2760b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2760bc: 0x8ce40860  lw          $a0, 0x860($a3)
    ctx->pc = 0x2760bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2144)));
    // 0x2760c0: 0xc0cf0c4  jal         func_33C310
    ctx->pc = 0x2760C0u;
    SET_GPR_U32(ctx, 31, 0x2760C8u);
    ctx->pc = 0x2760C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2760C0u;
    // 0x2760c4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C310u, 0x2760C0u, 0x2760C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2760C8u;
label_2760c8:
    // 0x2760c8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2760C8u;
    {
        const bool branch_taken_0x2760c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2760c8) {
            ctx->pc = 0x276188u;
            goto label_276188;
        }
    }
    ctx->pc = 0x2760D0u;
label_2760d0:
    // 0x2760d0: 0xc0a2500  jal         func_289400
    ctx->pc = 0x2760D0u;
    SET_GPR_U32(ctx, 31, 0x2760D8u);
    ctx->pc = 0x2760D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2760D0u;
    // 0x2760d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289400u, 0x2760D0u, 0x2760D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2760D8u;
label_2760d8:
    // 0x2760d8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2760D8u;
    {
        const bool branch_taken_0x2760d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2760d8) {
            ctx->pc = 0x276188u;
            goto label_276188;
        }
    }
    ctx->pc = 0x2760E0u;
label_2760e0:
    // 0x2760e0: 0x8ce206cc  lw          $v0, 0x6CC($a3)
    ctx->pc = 0x2760e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1740)));
    // 0x2760e4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2760e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2760e8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2760E8u;
    {
        const bool branch_taken_0x2760e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2760ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2760E8u;
        // 0x2760ec: 0xace206cc  sw          $v0, 0x6CC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2760e8) {
            ctx->pc = 0x276188u;
            goto label_276188;
        }
    }
    ctx->pc = 0x2760F0u;
label_2760f0:
    // 0x2760f0: 0x8ce32ab0  lw          $v1, 0x2AB0($a3)
    ctx->pc = 0x2760f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 10928)));
    // 0x2760f4: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2760F4u;
    {
        const bool branch_taken_0x2760f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2760f4) {
            ctx->pc = 0x276188u;
            goto label_276188;
        }
    }
    ctx->pc = 0x2760FCu;
    // 0x2760fc: 0x8c6206cc  lw          $v0, 0x6CC($v1)
    ctx->pc = 0x2760fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1740)));
    // 0x276100: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x276100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x276104: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x276104u;
    {
        const bool branch_taken_0x276104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276104u;
        // 0x276108: 0xac6206cc  sw          $v0, 0x6CC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1740), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276104) {
            ctx->pc = 0x276188u;
            goto label_276188;
        }
    }
    ctx->pc = 0x27610Cu;
    // 0x27610c: 0x0  nop
    ctx->pc = 0x27610cu;
    // NOP
label_276110:
    // 0x276110: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x276110u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x276114: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x276114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276118: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x276118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27611c: 0xc0cf7d0  jal         func_33DF40
    ctx->pc = 0x27611Cu;
    SET_GPR_U32(ctx, 31, 0x276124u);
    ctx->pc = 0x276120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27611Cu;
    // 0x276120: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x33DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33DF40u, 0x27611Cu, 0x276124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276124u;
label_276124:
    // 0x276124: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x276124u;
    {
        const bool branch_taken_0x276124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276124) {
            ctx->pc = 0x276188u;
            goto label_276188;
        }
    }
    ctx->pc = 0x27612Cu;
    // 0x27612c: 0x0  nop
    ctx->pc = 0x27612cu;
    // NOP
label_276130:
    // 0x276130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276134: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x276134u;
    {
        const bool branch_taken_0x276134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276134u;
        // 0x276138: 0xa0e23051  sb          $v0, 0x3051($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 12369), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276134) {
            ctx->pc = 0x276188u;
            goto label_276188;
        }
    }
    ctx->pc = 0x27613Cu;
    // 0x27613c: 0x0  nop
    ctx->pc = 0x27613cu;
    // NOP
label_276140:
    // 0x276140: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x276140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x276144: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x276144u;
    {
        const bool branch_taken_0x276144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276144u;
        // 0x276148: 0xa0e23051  sb          $v0, 0x3051($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 12369), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276144) {
            ctx->pc = 0x276188u;
            goto label_276188;
        }
    }
    ctx->pc = 0x27614Cu;
    // 0x27614c: 0x0  nop
    ctx->pc = 0x27614cu;
    // NOP
label_276150:
    // 0x276150: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x276150u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x276154: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x276154u;
    {
        const bool branch_taken_0x276154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x276154) {
            ctx->pc = 0x276170u;
            goto label_276170;
        }
    }
    ctx->pc = 0x27615Cu;
    // 0x27615c: 0x94e20824  lhu         $v0, 0x824($a3)
    ctx->pc = 0x27615cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2084)));
    // 0x276160: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x276160u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x276164: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x276164u;
    {
        const bool branch_taken_0x276164 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x276164) {
            ctx->pc = 0x276188u;
            goto label_276188;
        }
    }
    ctx->pc = 0x27616Cu;
    // 0x27616c: 0x0  nop
    ctx->pc = 0x27616cu;
    // NOP
label_276170:
    // 0x276170: 0x8ce20148  lw          $v0, 0x148($a3)
    ctx->pc = 0x276170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 328)));
    // 0x276174: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x276174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x276178: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x276178u;
    {
        const bool branch_taken_0x276178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276178u;
        // 0x27617c: 0xace20148  sw          $v0, 0x148($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276178) {
            ctx->pc = 0x276188u;
            goto label_276188;
        }
    }
    ctx->pc = 0x276180u;
label_276180:
    // 0x276180: 0xc098e90  jal         func_263A40
    ctx->pc = 0x276180u;
    SET_GPR_U32(ctx, 31, 0x276188u);
    ctx->pc = 0x263A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263A40u, 0x276180u, 0x276188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276188u;
label_276188:
    // 0x276188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27618c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27618cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276190: 0x3e00008  jr          $ra
    ctx->pc = 0x276190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276190u;
        // 0x276194: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276198u;
}
