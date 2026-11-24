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

// Function: sub_0010A0A0
// Address: 0x10a0a0 - 0x10a1e4
void sub_0010A0A0_0x10a0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A0A0_0x10a0a0");
#endif

    switch (ctx->pc) {
        case 0x10a0bcu: goto label_10a0bc;
        case 0x10a0ccu: goto label_10a0cc;
        case 0x10a0dcu: goto label_10a0dc;
        case 0x10a0f8u: goto label_10a0f8;
        case 0x10a108u: goto label_10a108;
        case 0x10a124u: goto label_10a124;
        case 0x10a134u: goto label_10a134;
        case 0x10a140u: goto label_10a140;
        case 0x10a148u: goto label_10a148;
        case 0x10a154u: goto label_10a154;
        case 0x10a164u: goto label_10a164;
        default: break;
    }

    ctx->pc = 0x10a0a0u;

    // 0x10a0a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10a0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10a0a4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x10a0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10a0a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a0ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10a0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10a0b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10a0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10a0b4: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A0B4u;
    SET_GPR_U32(ctx, 31, 0x10A0BCu);
    ctx->pc = 0x10A0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A0B4u;
    // 0x10a0b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A0B4u, 0x10A0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A0BCu;
label_10a0bc:
    // 0x10a0bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10a0bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a0c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a0c4: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A0C4u;
    SET_GPR_U32(ctx, 31, 0x10A0CCu);
    ctx->pc = 0x10A0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A0C4u;
    // 0x10a0c8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A0C4u, 0x10A0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A0CCu;
label_10a0cc:
    // 0x10a0cc: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x10a0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x10a0d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a0d4: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A0D4u;
    SET_GPR_U32(ctx, 31, 0x10A0DCu);
    ctx->pc = 0x10A0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A0D4u;
    // 0x10a0d8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A0D4u, 0x10A0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A0DCu;
label_10a0dc:
    // 0x10a0dc: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x10a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x10a0e0: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x10a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x10a0e4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x10a0e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x10a0e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10A0E8u;
    {
        const bool branch_taken_0x10a0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A0E8u;
        // 0x10a0ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a0e8) {
            ctx->pc = 0x10A110u;
            goto label_10a110;
        }
    }
    ctx->pc = 0x10A0F0u;
    // 0x10a0f0: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A0F0u;
    SET_GPR_U32(ctx, 31, 0x10A0F8u);
    ctx->pc = 0x10A0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A0F0u;
    // 0x10a0f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A0F0u, 0x10A0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A0F8u;
label_10a0f8:
    // 0x10a0f8: 0xae020164  sw          $v0, 0x164($s0)
    ctx->pc = 0x10a0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
    // 0x10a0fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a100: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A100u;
    SET_GPR_U32(ctx, 31, 0x10A108u);
    ctx->pc = 0x10A104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A100u;
    // 0x10a104: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A100u, 0x10A108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A108u;
label_10a108:
    // 0x10a108: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x10a108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
    // 0x10a10c: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x10a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_10a110:
    // 0x10a110: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10a110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10a114: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10A114u;
    {
        const bool branch_taken_0x10a114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A114u;
        // 0x10a118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a114) {
            ctx->pc = 0x10A14Cu;
            goto label_10a14c;
        }
    }
    ctx->pc = 0x10A11Cu;
    // 0x10a11c: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A11Cu;
    SET_GPR_U32(ctx, 31, 0x10A124u);
    ctx->pc = 0x10A120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A11Cu;
    // 0x10a120: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A11Cu, 0x10A124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A124u;
label_10a124:
    // 0x10a124: 0xae02016c  sw          $v0, 0x16C($s0)
    ctx->pc = 0x10a124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 2));
    // 0x10a128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a12c: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A12Cu;
    SET_GPR_U32(ctx, 31, 0x10A134u);
    ctx->pc = 0x10A130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A12Cu;
    // 0x10a130: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A12Cu, 0x10A134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A134u;
label_10a134:
    // 0x10a134: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10A134u;
    {
        const bool branch_taken_0x10a134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A134u;
        // 0x10a138: 0xae020170  sw          $v0, 0x170($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a134) {
            ctx->pc = 0x10A148u;
            goto label_10a148;
        }
    }
    ctx->pc = 0x10A13Cu;
    // 0x10a13c: 0x0  nop
    ctx->pc = 0x10a13cu;
    // NOP
label_10a140:
    // 0x10a140: 0xc042a10  jal         func_10A840
    ctx->pc = 0x10A140u;
    SET_GPR_U32(ctx, 31, 0x10A148u);
    ctx->pc = 0x10A144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A140u;
    // 0x10a144: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A840u, 0x10A140u, 0x10A148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A148u;
label_10a148:
    // 0x10a148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a14c:
    // 0x10a14c: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A14Cu;
    SET_GPR_U32(ctx, 31, 0x10A154u);
    ctx->pc = 0x10A150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A14Cu;
    // 0x10a150: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A14Cu, 0x10A154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A154u;
label_10a154:
    // 0x10a154: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10A154u;
    {
        const bool branch_taken_0x10a154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A154u;
        // 0x10a158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a154) {
            ctx->pc = 0x10A140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a140;
        }
    }
    ctx->pc = 0x10A15Cu;
    // 0x10a15c: 0xc04298e  jal         func_10A638
    ctx->pc = 0x10A15Cu;
    SET_GPR_U32(ctx, 31, 0x10A164u);
    ctx->pc = 0x10A160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A15Cu;
    // 0x10a160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A638u, 0x10A15Cu, 0x10A164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A164u;
label_10a164:
    // 0x10a164: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x10a164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x10a168: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10a168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a16c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10a170: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10A170u;
    {
        const bool branch_taken_0x10a170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A170u;
        // 0x10a174: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a170) {
            ctx->pc = 0x10A198u;
            goto label_10a198;
        }
    }
    ctx->pc = 0x10A178u;
    // 0x10a178: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x10A178u;
    {
        const bool branch_taken_0x10a178 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a178) {
            ctx->pc = 0x10A17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A178u;
            // 0x10a17c: 0x8e02085c  lw          $v0, 0x85C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A19Cu;
            goto label_10a19c;
        }
    }
    ctx->pc = 0x10A180u;
    // 0x10a180: 0x6230004  bgezl       $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A180u;
    {
        const bool branch_taken_0x10a180 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x10a180) {
            ctx->pc = 0x10A184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A180u;
            // 0x10a184: 0xae000864  sw          $zero, 0x864($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A194u;
            goto label_10a194;
        }
    }
    ctx->pc = 0x10A188u;
    // 0x10a188: 0x8e020864  lw          $v0, 0x864($s0)
    ctx->pc = 0x10a188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2148)));
    // 0x10a18c: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x10a18cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x10a190: 0xae000864  sw          $zero, 0x864($s0)
    ctx->pc = 0x10a190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 0));
label_10a194:
    // 0x10a194: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10a194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10a198:
    // 0x10a198: 0x8e02085c  lw          $v0, 0x85C($s0)
    ctx->pc = 0x10a198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
label_10a19c:
    // 0x10a19c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x10a19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x10a1a0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A1A0u;
    {
        const bool branch_taken_0x10a1a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A1A0u;
        // 0x10a1a4: 0xae0301bc  sw          $v1, 0x1BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a1a0) {
            ctx->pc = 0x10A1BCu;
            goto label_10a1bc;
        }
    }
    ctx->pc = 0x10A1A8u;
    // 0x10a1a8: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x10a1a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x10a1ac: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A1ACu;
    {
        const bool branch_taken_0x10a1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a1ac) {
            ctx->pc = 0x10A1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A1ACu;
            // 0x10a1b0: 0x8e020860  lw          $v0, 0x860($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A1C0u;
            goto label_10a1c0;
        }
    }
    ctx->pc = 0x10A1B4u;
    // 0x10a1b4: 0x24620400  addiu       $v0, $v1, 0x400
    ctx->pc = 0x10a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x10a1b8: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x10a1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
label_10a1bc:
    // 0x10a1bc: 0x8e020860  lw          $v0, 0x860($s0)
    ctx->pc = 0x10a1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2144)));
label_10a1c0:
    // 0x10a1c0: 0x8e0401bc  lw          $a0, 0x1BC($s0)
    ctx->pc = 0x10a1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x10a1c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10a1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a1c8: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x10a1c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x10a1cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10a1ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a1d0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x10a1d0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x10a1d4: 0xae020860  sw          $v0, 0x860($s0)
    ctx->pc = 0x10a1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2144), GPR_U32(ctx, 2));
    // 0x10a1d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a1d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x10A1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A1DCu;
        // 0x10a1e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A1E4u;
}
