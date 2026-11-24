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

// Function: sub_0035F240
// Address: 0x35f240 - 0x35f468
void sub_0035F240_0x35f240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F240_0x35f240");
#endif

    switch (ctx->pc) {
        case 0x35f2bcu: goto label_35f2bc;
        case 0x35f2d8u: goto label_35f2d8;
        case 0x35f338u: goto label_35f338;
        case 0x35f340u: goto label_35f340;
        case 0x35f35cu: goto label_35f35c;
        case 0x35f3b8u: goto label_35f3b8;
        case 0x35f454u: goto label_35f454;
        default: break;
    }

    ctx->pc = 0x35f240u;

    // 0x35f240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35f240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35f244: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x35f244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x35f248: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35f248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35f24c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x35f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x35f250: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35f250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35f254: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x35f254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35f258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35f258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35f25c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35f25cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f260: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x35f260u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f264: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x35f264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f268: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x35f268u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f26c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x35f26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x35f270: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x35f270u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f274: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x35f274u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x35f278: 0xac801fa0  sw          $zero, 0x1FA0($a0)
    ctx->pc = 0x35f278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8096), GPR_U32(ctx, 0));
    // 0x35f27c: 0xac801fa4  sw          $zero, 0x1FA4($a0)
    ctx->pc = 0x35f27cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8100), GPR_U32(ctx, 0));
    // 0x35f280: 0xac831fa8  sw          $v1, 0x1FA8($a0)
    ctx->pc = 0x35f280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8104), GPR_U32(ctx, 3));
    // 0x35f284: 0xa4821fac  sh          $v0, 0x1FAC($a0)
    ctx->pc = 0x35f284u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8108), (uint16_t)GPR_U32(ctx, 2));
    // 0x35f288: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x35f288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x35f28c: 0xa4821fae  sh          $v0, 0x1FAE($a0)
    ctx->pc = 0x35f28cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8110), (uint16_t)GPR_U32(ctx, 2));
    // 0x35f290: 0xa4861fb0  sh          $a2, 0x1FB0($a0)
    ctx->pc = 0x35f290u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8112), (uint16_t)GPR_U32(ctx, 6));
    // 0x35f294: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x35f294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x35f298: 0xa4851fb2  sh          $a1, 0x1FB2($a0)
    ctx->pc = 0x35f298u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8114), (uint16_t)GPR_U32(ctx, 5));
    // 0x35f29c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x35f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x35f2a0: 0xa0831fb6  sb          $v1, 0x1FB6($a0)
    ctx->pc = 0x35f2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8118), (uint8_t)GPR_U32(ctx, 3));
    // 0x35f2a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35f2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f2a8: 0xa0800007  sb          $zero, 0x7($a0)
    ctx->pc = 0x35f2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f2ac: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x35f2acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x35f2b0: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x35f2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x35f2b4: 0xc049590  jal         func_125640
    ctx->pc = 0x35F2B4u;
    SET_GPR_U32(ctx, 31, 0x35F2BCu);
    ctx->pc = 0x35F2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F2B4u;
    // 0x35f2b8: 0x26241f90  addiu       $a0, $s1, 0x1F90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x35F2B4u, 0x35F2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F2BCu;
label_35f2bc:
    // 0x35f2bc: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x35f2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x35f2c0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x35F2C0u;
    {
        const bool branch_taken_0x35f2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F2C0u;
        // 0x35f2c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f2c0) {
            ctx->pc = 0x35F330u;
            goto label_35f330;
        }
    }
    ctx->pc = 0x35F2C8u;
    // 0x35f2c8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x35f2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x35f2cc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x35f2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x35f2d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35f2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f2d4: 0x2484a270  addiu       $a0, $a0, -0x5D90
    ctx->pc = 0x35f2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943344));
label_35f2d8:
    // 0x35f2d8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x35f2d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35f2dc: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x35F2DCu;
    {
        const bool branch_taken_0x35f2dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35f2dc) {
            ctx->pc = 0x35F310u;
            goto label_35f310;
        }
    }
    ctx->pc = 0x35F2E4u;
    // 0x35f2e4: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x35f2e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x35f2e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35F2E8u;
    {
        const bool branch_taken_0x35f2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f2e8) {
            ctx->pc = 0x35F2F8u;
            goto label_35f2f8;
        }
    }
    ctx->pc = 0x35F2F0u;
    // 0x35f2f0: 0xa6250004  sh          $a1, 0x4($s1)
    ctx->pc = 0x35f2f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x35f2f4: 0x0  nop
    ctx->pc = 0x35f2f4u;
    // NOP
label_35f2f8:
    // 0x35f2f8: 0x2261021  addu        $v0, $s1, $a2
    ctx->pc = 0x35f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x35f2fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x35f2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x35f300: 0x28c10008  slti        $at, $a2, 0x8
    ctx->pc = 0x35f300u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x35f304: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x35F304u;
    {
        const bool branch_taken_0x35f304 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F304u;
        // 0x35f308: 0xa0451f90  sb          $a1, 0x1F90($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8080), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f304) {
            ctx->pc = 0x35F310u;
            goto label_35f310;
        }
    }
    ctx->pc = 0x35F30Cu;
    // 0x35f30c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35f30cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35f310:
    // 0x35f310: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x35f310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x35f314: 0x2ca2003f  sltiu       $v0, $a1, 0x3F
    ctx->pc = 0x35f314u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)63) ? 1 : 0);
    // 0x35f318: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x35F318u;
    {
        const bool branch_taken_0x35f318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F318u;
        // 0x35f31c: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f318) {
            ctx->pc = 0x35F2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f2d8;
        }
    }
    ctx->pc = 0x35F320u;
    // 0x35f320: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x35f320u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x35f324: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x35f324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x35f328: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x35F328u;
    {
        const bool branch_taken_0x35f328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F328u;
        // 0x35f32c: 0xa2220002  sb          $v0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f328) {
            ctx->pc = 0x35F3B0u;
            goto label_35f3b0;
        }
    }
    ctx->pc = 0x35F330u;
label_35f330:
    // 0x35f330: 0xc0d8c94  jal         func_363250
    ctx->pc = 0x35F330u;
    SET_GPR_U32(ctx, 31, 0x35F338u);
    ctx->pc = 0x363250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363250u, 0x35F330u, 0x35F338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F338u;
label_35f338:
    // 0x35f338: 0xc0d8ca0  jal         func_363280
    ctx->pc = 0x35F338u;
    SET_GPR_U32(ctx, 31, 0x35F340u);
    ctx->pc = 0x35F33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F338u;
    // 0x35f33c: 0xa6220004  sh          $v0, 0x4($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363280u, 0x35F338u, 0x35F340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F340u;
label_35f340:
    // 0x35f340: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35f340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f344: 0x1a00001a  blez        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x35F344u;
    {
        const bool branch_taken_0x35f344 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x35F348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F344u;
        // 0x35f348: 0x2a010012  slti        $at, $s0, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)18) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f344) {
            ctx->pc = 0x35F3B0u;
            goto label_35f3b0;
        }
    }
    ctx->pc = 0x35F34Cu;
    // 0x35f34c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x35F34Cu;
    {
        const bool branch_taken_0x35f34c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F34Cu;
        // 0x35f350: 0x3c04007e  lui         $a0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f34c) {
            ctx->pc = 0x35F3B0u;
            goto label_35f3b0;
        }
    }
    ctx->pc = 0x35F354u;
    // 0x35f354: 0xc054568  jal         func_1515A0
    ctx->pc = 0x35F354u;
    SET_GPR_U32(ctx, 31, 0x35F35Cu);
    ctx->pc = 0x35F358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F354u;
    // 0x35f358: 0x24846ac0  addiu       $a0, $a0, 0x6AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1515A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1515A0u, 0x35F354u, 0x35F35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F35Cu;
label_35f35c:
    // 0x35f35c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x35F35Cu;
    {
        const bool branch_taken_0x35f35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F35Cu;
        // 0x35f360: 0x1018c0  sll         $v1, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f35c) {
            ctx->pc = 0x35F3B0u;
            goto label_35f3b0;
        }
    }
    ctx->pc = 0x35F364u;
    // 0x35f364: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x35f364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x35f368: 0x2442a1d0  addiu       $v0, $v0, -0x5E30
    ctx->pc = 0x35f368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943184));
    // 0x35f36c: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x35f36cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x35f370: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x35f370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35f374: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x35f374u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35f378: 0xa2221f90  sb          $v0, 0x1F90($s1)
    ctx->pc = 0x35f378u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8080), (uint8_t)GPR_U32(ctx, 2));
    // 0x35f37c: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x35f37cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x35f380: 0xa2221f91  sb          $v0, 0x1F91($s1)
    ctx->pc = 0x35f380u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8081), (uint8_t)GPR_U32(ctx, 2));
    // 0x35f384: 0x80620002  lb          $v0, 0x2($v1)
    ctx->pc = 0x35f384u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x35f388: 0xa2221f92  sb          $v0, 0x1F92($s1)
    ctx->pc = 0x35f388u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8082), (uint8_t)GPR_U32(ctx, 2));
    // 0x35f38c: 0x80620003  lb          $v0, 0x3($v1)
    ctx->pc = 0x35f38cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x35f390: 0xa2221f93  sb          $v0, 0x1F93($s1)
    ctx->pc = 0x35f390u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8083), (uint8_t)GPR_U32(ctx, 2));
    // 0x35f394: 0x80620004  lb          $v0, 0x4($v1)
    ctx->pc = 0x35f394u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35f398: 0xa2221f94  sb          $v0, 0x1F94($s1)
    ctx->pc = 0x35f398u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8084), (uint8_t)GPR_U32(ctx, 2));
    // 0x35f39c: 0x80620005  lb          $v0, 0x5($v1)
    ctx->pc = 0x35f39cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x35f3a0: 0xa2221f95  sb          $v0, 0x1F95($s1)
    ctx->pc = 0x35f3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8085), (uint8_t)GPR_U32(ctx, 2));
    // 0x35f3a4: 0x80620006  lb          $v0, 0x6($v1)
    ctx->pc = 0x35f3a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x35f3a8: 0xa2221f96  sb          $v0, 0x1F96($s1)
    ctx->pc = 0x35f3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8086), (uint8_t)GPR_U32(ctx, 2));
    // 0x35f3ac: 0x0  nop
    ctx->pc = 0x35f3acu;
    // NOP
label_35f3b0:
    // 0x35f3b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x35F3B0u;
    {
        const bool branch_taken_0x35f3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F3B0u;
        // 0x35f3b4: 0xa2200006  sb          $zero, 0x6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f3b0) {
            ctx->pc = 0x35F3C8u;
            goto label_35f3c8;
        }
    }
    ctx->pc = 0x35F3B8u;
label_35f3b8:
    // 0x35f3b8: 0x82220006  lb          $v0, 0x6($s1)
    ctx->pc = 0x35f3b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x35f3bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35f3c0: 0xa2220006  sb          $v0, 0x6($s1)
    ctx->pc = 0x35f3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x35f3c4: 0x0  nop
    ctx->pc = 0x35f3c4u;
    // NOP
label_35f3c8:
    // 0x35f3c8: 0x82240006  lb          $a0, 0x6($s1)
    ctx->pc = 0x35f3c8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x35f3cc: 0x86230004  lh          $v1, 0x4($s1)
    ctx->pc = 0x35f3ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x35f3d0: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x35f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x35f3d4: 0x80421f90  lb          $v0, 0x1F90($v0)
    ctx->pc = 0x35f3d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8080)));
    // 0x35f3d8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35F3D8u;
    {
        const bool branch_taken_0x35f3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x35F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F3D8u;
        // 0x35f3dc: 0x28820007  slti        $v0, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f3d8) {
            ctx->pc = 0x35F3E8u;
            goto label_35f3e8;
        }
    }
    ctx->pc = 0x35F3E0u;
    // 0x35f3e0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x35F3E0u;
    {
        const bool branch_taken_0x35f3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f3e0) {
            ctx->pc = 0x35F3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35f3b8;
        }
    }
    ctx->pc = 0x35F3E8u;
label_35f3e8:
    // 0x35f3e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35F3E8u;
    {
        const bool branch_taken_0x35f3e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F3E8u;
        // 0x35f3ec: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f3e8) {
            ctx->pc = 0x35F3F8u;
            goto label_35f3f8;
        }
    }
    ctx->pc = 0x35F3F0u;
    // 0x35f3f0: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35F3F0u;
    {
        const bool branch_taken_0x35f3f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x35f3f0) {
            ctx->pc = 0x35F400u;
            goto label_35f400;
        }
    }
    ctx->pc = 0x35F3F8u;
label_35f3f8:
    // 0x35f3f8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x35F3F8u;
    {
        const bool branch_taken_0x35f3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F3F8u;
        // 0x35f3fc: 0xa6200004  sh          $zero, 0x4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f3f8) {
            ctx->pc = 0x35F448u;
            goto label_35f448;
        }
    }
    ctx->pc = 0x35F400u;
label_35f400:
    // 0x35f400: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35F400u;
    {
        const bool branch_taken_0x35f400 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f400) {
            ctx->pc = 0x35F418u;
            goto label_35f418;
        }
    }
    ctx->pc = 0x35F408u;
    // 0x35f408: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x35f408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x35f40c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x35f40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x35f410: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x35f410u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x35f414: 0x0  nop
    ctx->pc = 0x35f414u;
    // NOP
label_35f418:
    // 0x35f418: 0x82220006  lb          $v0, 0x6($s1)
    ctx->pc = 0x35f418u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x35f41c: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x35f41cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x35f420: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x35F420u;
    {
        const bool branch_taken_0x35f420 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f420) {
            ctx->pc = 0x35F448u;
            goto label_35f448;
        }
    }
    ctx->pc = 0x35F428u;
    // 0x35f428: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x35f428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x35f42c: 0x80421f91  lb          $v0, 0x1F91($v0)
    ctx->pc = 0x35f42cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8081)));
    // 0x35f430: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35F430u;
    {
        const bool branch_taken_0x35f430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f430) {
            ctx->pc = 0x35F448u;
            goto label_35f448;
        }
    }
    ctx->pc = 0x35F438u;
    // 0x35f438: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x35f438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x35f43c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x35f43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x35f440: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x35f440u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x35f444: 0x0  nop
    ctx->pc = 0x35f444u;
    // NOP
label_35f448:
    // 0x35f448: 0x86250004  lh          $a1, 0x4($s1)
    ctx->pc = 0x35f448u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x35f44c: 0xc0d7c14  jal         func_35F050
    ctx->pc = 0x35F44Cu;
    SET_GPR_U32(ctx, 31, 0x35F454u);
    ctx->pc = 0x35F450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F44Cu;
    // 0x35f450: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F050u, 0x35F44Cu, 0x35F454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F454u;
label_35f454:
    // 0x35f454: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35f454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f458: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35f458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f45c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35f45cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f460: 0x3e00008  jr          $ra
    ctx->pc = 0x35F460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F460u;
        // 0x35f464: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F468u;
}
