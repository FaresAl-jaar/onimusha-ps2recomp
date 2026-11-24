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

// Function: sub_001E6720
// Address: 0x1e6720 - 0x1e67f8
void sub_001E6720_0x1e6720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6720_0x1e6720");
#endif

    switch (ctx->pc) {
        case 0x1e6720u: goto label_1e6720;
        case 0x1e6724u: goto label_1e6724;
        case 0x1e6728u: goto label_1e6728;
        case 0x1e672cu: goto label_1e672c;
        case 0x1e6730u: goto label_1e6730;
        case 0x1e6734u: goto label_1e6734;
        case 0x1e6738u: goto label_1e6738;
        case 0x1e673cu: goto label_1e673c;
        case 0x1e6740u: goto label_1e6740;
        case 0x1e6744u: goto label_1e6744;
        case 0x1e6748u: goto label_1e6748;
        case 0x1e674cu: goto label_1e674c;
        case 0x1e6750u: goto label_1e6750;
        case 0x1e6754u: goto label_1e6754;
        case 0x1e6758u: goto label_1e6758;
        case 0x1e675cu: goto label_1e675c;
        case 0x1e6760u: goto label_1e6760;
        case 0x1e6764u: goto label_1e6764;
        case 0x1e6768u: goto label_1e6768;
        case 0x1e676cu: goto label_1e676c;
        case 0x1e6770u: goto label_1e6770;
        case 0x1e6774u: goto label_1e6774;
        case 0x1e6778u: goto label_1e6778;
        case 0x1e677cu: goto label_1e677c;
        case 0x1e6780u: goto label_1e6780;
        case 0x1e6784u: goto label_1e6784;
        case 0x1e6788u: goto label_1e6788;
        case 0x1e678cu: goto label_1e678c;
        case 0x1e6790u: goto label_1e6790;
        case 0x1e6794u: goto label_1e6794;
        case 0x1e6798u: goto label_1e6798;
        case 0x1e679cu: goto label_1e679c;
        case 0x1e67a0u: goto label_1e67a0;
        case 0x1e67a4u: goto label_1e67a4;
        case 0x1e67a8u: goto label_1e67a8;
        case 0x1e67acu: goto label_1e67ac;
        case 0x1e67b0u: goto label_1e67b0;
        case 0x1e67b4u: goto label_1e67b4;
        case 0x1e67b8u: goto label_1e67b8;
        case 0x1e67bcu: goto label_1e67bc;
        case 0x1e67c0u: goto label_1e67c0;
        case 0x1e67c4u: goto label_1e67c4;
        case 0x1e67c8u: goto label_1e67c8;
        case 0x1e67ccu: goto label_1e67cc;
        case 0x1e67d0u: goto label_1e67d0;
        case 0x1e67d4u: goto label_1e67d4;
        case 0x1e67d8u: goto label_1e67d8;
        case 0x1e67dcu: goto label_1e67dc;
        case 0x1e67e0u: goto label_1e67e0;
        case 0x1e67e4u: goto label_1e67e4;
        case 0x1e67e8u: goto label_1e67e8;
        case 0x1e67ecu: goto label_1e67ec;
        case 0x1e67f0u: goto label_1e67f0;
        case 0x1e67f4u: goto label_1e67f4;
        default: break;
    }

    ctx->pc = 0x1e6720u;

label_1e6720:
    // 0x1e6720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e6724:
    // 0x1e6724: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e6724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e6728:
    // 0x1e6728: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e672c:
    // 0x1e672c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e672cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e6730:
    // 0x1e6730: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e6730u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6734:
    // 0x1e6734: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1e6738:
    if (ctx->pc == 0x1E6738u) {
        ctx->pc = 0x1E6738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6734u;
        // 0x1e6738: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E673Cu;
        goto label_1e673c;
    }
    ctx->pc = 0x1E6734u;
    {
        const bool branch_taken_0x1e6734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E6738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6734u;
        // 0x1e6738: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6734) {
            ctx->pc = 0x1E6748u;
            goto label_1e6748;
        }
    }
    ctx->pc = 0x1E673Cu;
label_1e673c:
    // 0x1e673c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1e6740:
    if (ctx->pc == 0x1E6740u) {
        ctx->pc = 0x1E6740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E673Cu;
        // 0x1e6740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6744u;
        goto label_1e6744;
    }
    ctx->pc = 0x1E673Cu;
    {
        const bool branch_taken_0x1e673c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E673Cu;
        // 0x1e6740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e673c) {
            ctx->pc = 0x1E67E8u;
            goto label_1e67e8;
        }
    }
    ctx->pc = 0x1E6744u;
label_1e6744:
    // 0x1e6744: 0x0  nop
    ctx->pc = 0x1e6744u;
    // NOP
label_1e6748:
    // 0x1e6748: 0x7a030080  lq          $v1, 0x80($s0)
    ctx->pc = 0x1e6748u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 128)));
label_1e674c:
    // 0x1e674c: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1e674cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1e6750:
    // 0x1e6750: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x1e6750u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_1e6754:
    // 0x1e6754: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1e6754u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e6758:
    // 0x1e6758: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e6758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e675c:
    // 0x1e675c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1e675cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1e6760:
    // 0x1e6760: 0x86030036  lh          $v1, 0x36($s0)
    ctx->pc = 0x1e6760u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
label_1e6764:
    // 0x1e6764: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1e6768:
    if (ctx->pc == 0x1E6768u) {
        ctx->pc = 0x1E676Cu;
        goto label_1e676c;
    }
    ctx->pc = 0x1E6764u;
    {
        const bool branch_taken_0x1e6764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e6764) {
            ctx->pc = 0x1E6788u;
            goto label_1e6788;
        }
    }
    ctx->pc = 0x1E676Cu;
label_1e676c:
    // 0x1e676c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e676cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e6770:
    // 0x1e6770: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1e6770u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1e6774:
    // 0x1e6774: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1e6778:
    if (ctx->pc == 0x1E6778u) {
        ctx->pc = 0x1E6778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6774u;
        // 0x1e6778: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E677Cu;
        goto label_1e677c;
    }
    ctx->pc = 0x1E6774u;
    {
        const bool branch_taken_0x1e6774 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6774u;
        // 0x1e6778: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6774) {
            ctx->pc = 0x1E67B0u;
            goto label_1e67b0;
        }
    }
    ctx->pc = 0x1E677Cu;
label_1e677c:
    // 0x1e677c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1e677cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1e6780:
    // 0x1e6780: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e6784:
    if (ctx->pc == 0x1E6784u) {
        ctx->pc = 0x1E6784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6780u;
        // 0x1e6784: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6788u;
        goto label_1e6788;
    }
    ctx->pc = 0x1E6780u;
    {
        const bool branch_taken_0x1e6780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6780u;
        // 0x1e6784: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6780) {
            ctx->pc = 0x1E67B0u;
            goto label_1e67b0;
        }
    }
    ctx->pc = 0x1E6788u;
label_1e6788:
    // 0x1e6788: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1e6788u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1e678c:
    // 0x1e678c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e678cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e6790:
    // 0x1e6790: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1e6794:
    if (ctx->pc == 0x1E6794u) {
        ctx->pc = 0x1E6798u;
        goto label_1e6798;
    }
    ctx->pc = 0x1E6790u;
    {
        const bool branch_taken_0x1e6790 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6790) {
            ctx->pc = 0x1E67B0u;
            goto label_1e67b0;
        }
    }
    ctx->pc = 0x1E6798u;
label_1e6798:
    // 0x1e6798: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e6798u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e679c:
    // 0x1e679c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e679cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e67a0:
    // 0x1e67a0: 0x320f809  jalr        $t9
label_1e67a4:
    if (ctx->pc == 0x1E67A4u) {
        ctx->pc = 0x1E67A8u;
        goto label_1e67a8;
    }
    ctx->pc = 0x1E67A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E67A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E67A0u, 0x1E67A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E67A8u;
label_1e67a8:
    // 0x1e67a8: 0x1000000f  b           . + 4 + (0xF << 2)
label_1e67ac:
    if (ctx->pc == 0x1E67ACu) {
        ctx->pc = 0x1E67ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E67A8u;
        // 0x1e67ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E67B0u;
        goto label_1e67b0;
    }
    ctx->pc = 0x1E67A8u;
    {
        const bool branch_taken_0x1e67a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E67ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E67A8u;
        // 0x1e67ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e67a8) {
            ctx->pc = 0x1E67E8u;
            goto label_1e67e8;
        }
    }
    ctx->pc = 0x1E67B0u;
label_1e67b0:
    // 0x1e67b0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1e67b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1e67b4:
    // 0x1e67b4: 0xc076800  jal         func_1DA000
label_1e67b8:
    if (ctx->pc == 0x1E67B8u) {
        ctx->pc = 0x1E67B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E67B4u;
        // 0x1e67b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E67BCu;
        goto label_1e67bc;
    }
    ctx->pc = 0x1E67B4u;
    SET_GPR_U32(ctx, 31, 0x1E67BCu);
    ctx->pc = 0x1E67B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E67B4u;
    // 0x1e67b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E67B4u, 0x1E67BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E67BCu;
label_1e67bc:
    // 0x1e67bc: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1e67bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1e67c0:
    // 0x1e67c0: 0xc076800  jal         func_1DA000
label_1e67c4:
    if (ctx->pc == 0x1E67C4u) {
        ctx->pc = 0x1E67C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E67C0u;
        // 0x1e67c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E67C8u;
        goto label_1e67c8;
    }
    ctx->pc = 0x1E67C0u;
    SET_GPR_U32(ctx, 31, 0x1E67C8u);
    ctx->pc = 0x1E67C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E67C0u;
    // 0x1e67c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E67C0u, 0x1E67C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E67C8u;
label_1e67c8:
    // 0x1e67c8: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1e67c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1e67cc:
    // 0x1e67cc: 0xc076800  jal         func_1DA000
label_1e67d0:
    if (ctx->pc == 0x1E67D0u) {
        ctx->pc = 0x1E67D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E67CCu;
        // 0x1e67d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E67D4u;
        goto label_1e67d4;
    }
    ctx->pc = 0x1E67CCu;
    SET_GPR_U32(ctx, 31, 0x1E67D4u);
    ctx->pc = 0x1E67D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E67CCu;
    // 0x1e67d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1E67CCu, 0x1E67D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E67D4u;
label_1e67d4:
    // 0x1e67d4: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x1e67d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1e67d8:
    // 0x1e67d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e67d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e67dc:
    // 0x1e67dc: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1e67dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_1e67e0:
    // 0x1e67e0: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x1e67e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_1e67e4:
    // 0x1e67e4: 0x0  nop
    ctx->pc = 0x1e67e4u;
    // NOP
label_1e67e8:
    // 0x1e67e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e67e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e67ec:
    // 0x1e67ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e67ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e67f0:
    // 0x1e67f0: 0x3e00008  jr          $ra
label_1e67f4:
    if (ctx->pc == 0x1E67F4u) {
        ctx->pc = 0x1E67F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E67F0u;
        // 0x1e67f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E67F8u;
        goto label_fallthrough_0x1e67f0;
    }
    ctx->pc = 0x1E67F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E67F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E67F0u;
        // 0x1e67f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E67F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e67f0:
    ctx->pc = 0x1E67F8u;
}
