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

// Function: sub_00153350
// Address: 0x153350 - 0x153490
void sub_00153350_0x153350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153350_0x153350");
#endif

    switch (ctx->pc) {
        case 0x153398u: goto label_153398;
        case 0x1533b0u: goto label_1533b0;
        case 0x1533e0u: goto label_1533e0;
        case 0x153410u: goto label_153410;
        case 0x15342cu: goto label_15342c;
        default: break;
    }

    ctx->pc = 0x153350u;

    // 0x153350: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x153350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x153354: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x153354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x153358: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x153358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15335c: 0x2403fc19  addiu       $v1, $zero, -0x3E7
    ctx->pc = 0x15335cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966297));
    // 0x153360: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x153360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x153364: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x153364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x153368: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x153368u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15336c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15336cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x153370: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x153370u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153374: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x153374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x153378: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x153378u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15337c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15337cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x153380: 0x8c30ac74  lw          $s0, -0x538C($at)
    ctx->pc = 0x153380u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x40AC74u));
    // 0x153384: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x153384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x153388: 0x10830033  beq         $a0, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x153388u;
    {
        const bool branch_taken_0x153388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153388u;
        // 0x15338c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153388) {
            ctx->pc = 0x153458u;
            goto label_153458;
        }
    }
    ctx->pc = 0x153390u;
    // 0x153390: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x153390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x153394: 0x0  nop
    ctx->pc = 0x153394u;
    // NOP
label_153398:
    // 0x153398: 0x1482002b  bne         $a0, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x153398u;
    {
        const bool branch_taken_0x153398 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x15339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153398u;
        // 0x15339c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153398) {
            ctx->pc = 0x153448u;
            goto label_153448;
        }
    }
    ctx->pc = 0x1533A0u;
    // 0x1533a0: 0x1482000b  bne         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1533A0u;
    {
        const bool branch_taken_0x1533a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1533a0) {
            ctx->pc = 0x1533D0u;
            goto label_1533d0;
        }
    }
    ctx->pc = 0x1533A8u;
    // 0x1533a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1533a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1533ac: 0x0  nop
    ctx->pc = 0x1533acu;
    // NOP
label_1533b0:
    // 0x1533b0: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x1533b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1533b4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1533b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1533b8: 0x0  nop
    ctx->pc = 0x1533b8u;
    // NOP
    // 0x1533bc: 0x0  nop
    ctx->pc = 0x1533bcu;
    // NOP
    // 0x1533c0: 0x0  nop
    ctx->pc = 0x1533c0u;
    // NOP
    // 0x1533c4: 0x1062fffa  beq         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1533C4u;
    {
        const bool branch_taken_0x1533c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1533c4) {
            ctx->pc = 0x1533B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1533b0;
        }
    }
    ctx->pc = 0x1533CCu;
    // 0x1533cc: 0x0  nop
    ctx->pc = 0x1533ccu;
    // NOP
label_1533d0:
    // 0x1533d0: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x1533d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x1533d4: 0xacb00008  sw          $s0, 0x8($a1)
    ctx->pc = 0x1533d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 16));
    // 0x1533d8: 0xc054c10  jal         func_153040
    ctx->pc = 0x1533D8u;
    SET_GPR_U32(ctx, 31, 0x1533E0u);
    ctx->pc = 0x1533DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1533D8u;
    // 0x1533dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153040u, 0x1533D8u, 0x1533E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1533E0u;
label_1533e0:
    // 0x1533e0: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x1533e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1533e4: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1533E4u;
    {
        const bool branch_taken_0x1533e4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1533E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1533E4u;
        // 0x1533e8: 0x242082b  sltu        $at, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1533e4) {
            ctx->pc = 0x153458u;
            goto label_153458;
        }
    }
    ctx->pc = 0x1533ECu;
    // 0x1533ec: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x1533ECu;
    {
        const bool branch_taken_0x1533ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1533F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1533ECu;
        // 0x1533f0: 0x1212c0  sll         $v0, $s2, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1533ec) {
            ctx->pc = 0x153430u;
            goto label_153430;
        }
    }
    ctx->pc = 0x1533F4u;
    // 0x1533f4: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x1533f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1533f8: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1533f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1533fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1533fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153400: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x153400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x153404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x153404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153408: 0xc049590  jal         func_125640
    ctx->pc = 0x153408u;
    SET_GPR_U32(ctx, 31, 0x153410u);
    ctx->pc = 0x15340Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153408u;
    // 0x15340c: 0xa6120012  sh          $s2, 0x12($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x153408u, 0x153410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153410u;
label_153410:
    // 0x153410: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x153410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x153414: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x153414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x153418: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x153418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15341c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15341cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153420: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x153420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x153424: 0xc054c10  jal         func_153040
    ctx->pc = 0x153424u;
    SET_GPR_U32(ctx, 31, 0x15342Cu);
    ctx->pc = 0x153428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153424u;
    // 0x153428: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153040u, 0x153424u, 0x15342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15342Cu;
label_15342c:
    // 0x15342c: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x15342cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_153430:
    // 0x153430: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x153430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x153434: 0xa6130010  sh          $s3, 0x10($s0)
    ctx->pc = 0x153434u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 19));
    // 0x153438: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x153438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15343c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x15343cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x153440: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x153440u;
    {
        const bool branch_taken_0x153440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153440u;
        // 0x153444: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153440) {
            ctx->pc = 0x153458u;
            goto label_153458;
        }
    }
    ctx->pc = 0x153448u;
label_153448:
    // 0x153448: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x153448u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15344c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x15344cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x153450: 0x1483ffd1  bne         $a0, $v1, . + 4 + (-0x2F << 2)
    ctx->pc = 0x153450u;
    {
        const bool branch_taken_0x153450 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x153450) {
            ctx->pc = 0x153398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153398;
        }
    }
    ctx->pc = 0x153458u;
label_153458:
    // 0x153458: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x153458u;
    {
        const bool branch_taken_0x153458 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x153458) {
            ctx->pc = 0x153468u;
            goto label_153468;
        }
    }
    ctx->pc = 0x153460u;
    // 0x153460: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x153460u;
    {
        const bool branch_taken_0x153460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153460u;
        // 0x153464: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153460) {
            ctx->pc = 0x153470u;
            goto label_153470;
        }
    }
    ctx->pc = 0x153468u;
label_153468:
    // 0x153468: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x153468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15346c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15346cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_153470:
    // 0x153470: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x153470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x153474: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x153474u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x153478: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x153478u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15347c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15347cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153480: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x153480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153488: 0x3e00008  jr          $ra
    ctx->pc = 0x153488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153488u;
        // 0x15348c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153490u;
}
