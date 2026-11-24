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

// Function: sub_001E57C0
// Address: 0x1e57c0 - 0x1e5898
void sub_001E57C0_0x1e57c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E57C0_0x1e57c0");
#endif

    switch (ctx->pc) {
        case 0x1e57c0u: goto label_1e57c0;
        case 0x1e57c4u: goto label_1e57c4;
        case 0x1e57c8u: goto label_1e57c8;
        case 0x1e57ccu: goto label_1e57cc;
        case 0x1e57d0u: goto label_1e57d0;
        case 0x1e57d4u: goto label_1e57d4;
        case 0x1e57d8u: goto label_1e57d8;
        case 0x1e57dcu: goto label_1e57dc;
        case 0x1e57e0u: goto label_1e57e0;
        case 0x1e57e4u: goto label_1e57e4;
        case 0x1e57e8u: goto label_1e57e8;
        case 0x1e57ecu: goto label_1e57ec;
        case 0x1e57f0u: goto label_1e57f0;
        case 0x1e57f4u: goto label_1e57f4;
        case 0x1e57f8u: goto label_1e57f8;
        case 0x1e57fcu: goto label_1e57fc;
        case 0x1e5800u: goto label_1e5800;
        case 0x1e5804u: goto label_1e5804;
        case 0x1e5808u: goto label_1e5808;
        case 0x1e580cu: goto label_1e580c;
        case 0x1e5810u: goto label_1e5810;
        case 0x1e5814u: goto label_1e5814;
        case 0x1e5818u: goto label_1e5818;
        case 0x1e581cu: goto label_1e581c;
        case 0x1e5820u: goto label_1e5820;
        case 0x1e5824u: goto label_1e5824;
        case 0x1e5828u: goto label_1e5828;
        case 0x1e582cu: goto label_1e582c;
        case 0x1e5830u: goto label_1e5830;
        case 0x1e5834u: goto label_1e5834;
        case 0x1e5838u: goto label_1e5838;
        case 0x1e583cu: goto label_1e583c;
        case 0x1e5840u: goto label_1e5840;
        case 0x1e5844u: goto label_1e5844;
        case 0x1e5848u: goto label_1e5848;
        case 0x1e584cu: goto label_1e584c;
        case 0x1e5850u: goto label_1e5850;
        case 0x1e5854u: goto label_1e5854;
        case 0x1e5858u: goto label_1e5858;
        case 0x1e585cu: goto label_1e585c;
        case 0x1e5860u: goto label_1e5860;
        case 0x1e5864u: goto label_1e5864;
        case 0x1e5868u: goto label_1e5868;
        case 0x1e586cu: goto label_1e586c;
        case 0x1e5870u: goto label_1e5870;
        case 0x1e5874u: goto label_1e5874;
        case 0x1e5878u: goto label_1e5878;
        case 0x1e587cu: goto label_1e587c;
        case 0x1e5880u: goto label_1e5880;
        case 0x1e5884u: goto label_1e5884;
        case 0x1e5888u: goto label_1e5888;
        case 0x1e588cu: goto label_1e588c;
        case 0x1e5890u: goto label_1e5890;
        case 0x1e5894u: goto label_1e5894;
        default: break;
    }

    ctx->pc = 0x1e57c0u;

label_1e57c0:
    // 0x1e57c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e57c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e57c4:
    // 0x1e57c4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e57c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e57c8:
    // 0x1e57c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e57c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e57cc:
    // 0x1e57cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e57ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e57d0:
    // 0x1e57d0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e57d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1e57d4:
    // 0x1e57d4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1e57d8:
    if (ctx->pc == 0x1E57D8u) {
        ctx->pc = 0x1E57D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E57D4u;
        // 0x1e57d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E57DCu;
        goto label_1e57dc;
    }
    ctx->pc = 0x1E57D4u;
    {
        const bool branch_taken_0x1e57d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E57D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E57D4u;
        // 0x1e57d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e57d4) {
            ctx->pc = 0x1E57E8u;
            goto label_1e57e8;
        }
    }
    ctx->pc = 0x1E57DCu;
label_1e57dc:
    // 0x1e57dc: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1e57e0:
    if (ctx->pc == 0x1E57E0u) {
        ctx->pc = 0x1E57E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E57DCu;
        // 0x1e57e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E57E4u;
        goto label_1e57e4;
    }
    ctx->pc = 0x1E57DCu;
    {
        const bool branch_taken_0x1e57dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E57E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E57DCu;
        // 0x1e57e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e57dc) {
            ctx->pc = 0x1E5888u;
            goto label_1e5888;
        }
    }
    ctx->pc = 0x1E57E4u;
label_1e57e4:
    // 0x1e57e4: 0x0  nop
    ctx->pc = 0x1e57e4u;
    // NOP
label_1e57e8:
    // 0x1e57e8: 0x7a030080  lq          $v1, 0x80($s0)
    ctx->pc = 0x1e57e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 128)));
label_1e57ec:
    // 0x1e57ec: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1e57ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1e57f0:
    // 0x1e57f0: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x1e57f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_1e57f4:
    // 0x1e57f4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1e57f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e57f8:
    // 0x1e57f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e57f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e57fc:
    // 0x1e57fc: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1e57fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1e5800:
    // 0x1e5800: 0x86030036  lh          $v1, 0x36($s0)
    ctx->pc = 0x1e5800u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
label_1e5804:
    // 0x1e5804: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1e5808:
    if (ctx->pc == 0x1E5808u) {
        ctx->pc = 0x1E580Cu;
        goto label_1e580c;
    }
    ctx->pc = 0x1E5804u;
    {
        const bool branch_taken_0x1e5804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e5804) {
            ctx->pc = 0x1E5828u;
            goto label_1e5828;
        }
    }
    ctx->pc = 0x1E580Cu;
label_1e580c:
    // 0x1e580c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e580cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e5810:
    // 0x1e5810: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1e5810u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1e5814:
    // 0x1e5814: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1e5818:
    if (ctx->pc == 0x1E5818u) {
        ctx->pc = 0x1E5818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5814u;
        // 0x1e5818: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E581Cu;
        goto label_1e581c;
    }
    ctx->pc = 0x1E5814u;
    {
        const bool branch_taken_0x1e5814 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5814u;
        // 0x1e5818: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5814) {
            ctx->pc = 0x1E5850u;
            goto label_1e5850;
        }
    }
    ctx->pc = 0x1E581Cu;
label_1e581c:
    // 0x1e581c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1e581cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1e5820:
    // 0x1e5820: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e5824:
    if (ctx->pc == 0x1E5824u) {
        ctx->pc = 0x1E5824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5820u;
        // 0x1e5824: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5828u;
        goto label_1e5828;
    }
    ctx->pc = 0x1E5820u;
    {
        const bool branch_taken_0x1e5820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5820u;
        // 0x1e5824: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5820) {
            ctx->pc = 0x1E5850u;
            goto label_1e5850;
        }
    }
    ctx->pc = 0x1E5828u;
label_1e5828:
    // 0x1e5828: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e5828u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e582c:
    // 0x1e582c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e582cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e5830:
    // 0x1e5830: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1e5834:
    if (ctx->pc == 0x1E5834u) {
        ctx->pc = 0x1E5838u;
        goto label_1e5838;
    }
    ctx->pc = 0x1E5830u;
    {
        const bool branch_taken_0x1e5830 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5830) {
            ctx->pc = 0x1E5850u;
            goto label_1e5850;
        }
    }
    ctx->pc = 0x1E5838u;
label_1e5838:
    // 0x1e5838: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e5838u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e583c:
    // 0x1e583c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e583cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e5840:
    // 0x1e5840: 0x320f809  jalr        $t9
label_1e5844:
    if (ctx->pc == 0x1E5844u) {
        ctx->pc = 0x1E5848u;
        goto label_1e5848;
    }
    ctx->pc = 0x1E5840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E5848u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5840u, 0x1E5848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E5848u;
label_1e5848:
    // 0x1e5848: 0x1000000f  b           . + 4 + (0xF << 2)
label_1e584c:
    if (ctx->pc == 0x1E584Cu) {
        ctx->pc = 0x1E584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5848u;
        // 0x1e584c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5850u;
        goto label_1e5850;
    }
    ctx->pc = 0x1E5848u;
    {
        const bool branch_taken_0x1e5848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5848u;
        // 0x1e584c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5848) {
            ctx->pc = 0x1E5888u;
            goto label_1e5888;
        }
    }
    ctx->pc = 0x1E5850u;
label_1e5850:
    // 0x1e5850: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1e5850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1e5854:
    // 0x1e5854: 0xc076800  jal         func_1DA000
label_1e5858:
    if (ctx->pc == 0x1E5858u) {
        ctx->pc = 0x1E5858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5854u;
        // 0x1e5858: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E585Cu;
        goto label_1e585c;
    }
    ctx->pc = 0x1E5854u;
    SET_GPR_U32(ctx, 31, 0x1E585Cu);
    ctx->pc = 0x1E5858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5854u;
    // 0x1e5858: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E5854u, 0x1E585Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E585Cu;
label_1e585c:
    // 0x1e585c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1e585cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1e5860:
    // 0x1e5860: 0xc076800  jal         func_1DA000
label_1e5864:
    if (ctx->pc == 0x1E5864u) {
        ctx->pc = 0x1E5864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5860u;
        // 0x1e5864: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5868u;
        goto label_1e5868;
    }
    ctx->pc = 0x1E5860u;
    SET_GPR_U32(ctx, 31, 0x1E5868u);
    ctx->pc = 0x1E5864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5860u;
    // 0x1e5864: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E5860u, 0x1E5868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5868u;
label_1e5868:
    // 0x1e5868: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1e5868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1e586c:
    // 0x1e586c: 0xc076800  jal         func_1DA000
label_1e5870:
    if (ctx->pc == 0x1E5870u) {
        ctx->pc = 0x1E5870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E586Cu;
        // 0x1e5870: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5874u;
        goto label_1e5874;
    }
    ctx->pc = 0x1E586Cu;
    SET_GPR_U32(ctx, 31, 0x1E5874u);
    ctx->pc = 0x1E5870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E586Cu;
    // 0x1e5870: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E586Cu, 0x1E5874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5874u;
label_1e5874:
    // 0x1e5874: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1e5874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1e5878:
    // 0x1e5878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e587c:
    // 0x1e587c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1e587cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_1e5880:
    // 0x1e5880: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x1e5880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_1e5884:
    // 0x1e5884: 0x0  nop
    ctx->pc = 0x1e5884u;
    // NOP
label_1e5888:
    // 0x1e5888: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e588c:
    // 0x1e588c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e588cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e5890:
    // 0x1e5890: 0x3e00008  jr          $ra
label_1e5894:
    if (ctx->pc == 0x1E5894u) {
        ctx->pc = 0x1E5894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5890u;
        // 0x1e5894: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5898u;
        goto label_fallthrough_0x1e5890;
    }
    ctx->pc = 0x1E5890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5890u;
        // 0x1e5894: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e5890:
    ctx->pc = 0x1E5898u;
}
