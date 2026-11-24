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

// Function: sub_00129410
// Address: 0x129410 - 0x129624
void sub_00129410_0x129410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129410_0x129410");
#endif

    switch (ctx->pc) {
        case 0x12945cu: goto label_12945c;
        case 0x129490u: goto label_129490;
        case 0x129494u: goto label_129494;
        case 0x1294fcu: goto label_1294fc;
        case 0x12950cu: goto label_12950c;
        case 0x129520u: goto label_129520;
        case 0x129538u: goto label_129538;
        case 0x12956cu: goto label_12956c;
        case 0x129580u: goto label_129580;
        case 0x12958cu: goto label_12958c;
        case 0x1295a4u: goto label_1295a4;
        default: break;
    }

    ctx->pc = 0x129410u;

    // 0x129410: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x129410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x129414: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x129414u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x129418: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x129418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x12941c: 0x25ed3a90  addiu       $t5, $t7, 0x3A90
    ctx->pc = 0x12941cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 14992));
    // 0x129420: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x129420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x129424: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x129424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x129428: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x129428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12942c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12942cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x129430: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x129430u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129434: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x129434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x129438: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x129438u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12943c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x12943cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x129440: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x129440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x129444: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x129444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x129448: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x129448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x12944c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x12944cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x129450: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x129450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x129454: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x129454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x129458: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x129458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_12945c:
    // 0x12945c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x12945cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x129460: 0x20d7021  addu        $t6, $s0, $t5
    ctx->pc = 0x129460u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x129464: 0x91cf0000  lbu         $t7, 0x0($t6)
    ctx->pc = 0x129464u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x129468: 0x31ef0008  andi        $t7, $t7, 0x8
    ctx->pc = 0x129468u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)8);
    // 0x12946c: 0x0  nop
    ctx->pc = 0x12946cu;
    // NOP
    // 0x129470: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129470u;
    {
        const bool branch_taken_0x129470 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x129474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129470u;
        // 0x129474: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129470) {
            ctx->pc = 0x12945Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12945c;
        }
    }
    ctx->pc = 0x129478u;
    // 0x129478: 0x240f002d  addiu       $t7, $zero, 0x2D
    ctx->pc = 0x129478u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12947c: 0x160f0065  bne         $s0, $t7, . + 4 + (0x65 << 2)
    ctx->pc = 0x12947Cu;
    {
        const bool branch_taken_0x12947c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x129480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12947Cu;
        // 0x129480: 0x240f002b  addiu       $t7, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12947c) {
            ctx->pc = 0x129614u;
            goto label_129614;
        }
    }
    ctx->pc = 0x129484u;
    // 0x129484: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x129484u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x129488: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x129488u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12948c: 0xafae0008  sw          $t6, 0x8($sp)
    ctx->pc = 0x12948cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
label_129490:
    // 0x129490: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x129490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_129494:
    // 0x129494: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x129494u;
    {
        const bool branch_taken_0x129494 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x129498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129494u;
        // 0x129498: 0x240f0010  addiu       $t7, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129494) {
            ctx->pc = 0x1294A4u;
            goto label_1294a4;
        }
    }
    ctx->pc = 0x12949Cu;
    // 0x12949c: 0x164f000c  bne         $s2, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x12949Cu;
    {
        const bool branch_taken_0x12949c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x12949c) {
            ctx->pc = 0x1294D0u;
            goto label_1294d0;
        }
    }
    ctx->pc = 0x1294A4u;
label_1294a4:
    // 0x1294a4: 0x240f0030  addiu       $t7, $zero, 0x30
    ctx->pc = 0x1294a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1294a8: 0x160f0009  bne         $s0, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x1294A8u;
    {
        const bool branch_taken_0x1294a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x1294ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1294A8u;
        // 0x1294ac: 0x240f0078  addiu       $t7, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1294a8) {
            ctx->pc = 0x1294D0u;
            goto label_1294d0;
        }
    }
    ctx->pc = 0x1294B0u;
    // 0x1294b0: 0x822e0000  lb          $t6, 0x0($s1)
    ctx->pc = 0x1294b0u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1294b4: 0x11cf0003  beq         $t6, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1294B4u;
    {
        const bool branch_taken_0x1294b4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1294B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1294B4u;
        // 0x1294b8: 0x240f0058  addiu       $t7, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1294b4) {
            ctx->pc = 0x1294C4u;
            goto label_1294c4;
        }
    }
    ctx->pc = 0x1294BCu;
    // 0x1294bc: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1294BCu;
    {
        const bool branch_taken_0x1294bc = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1294bc) {
            ctx->pc = 0x1294D0u;
            goto label_1294d0;
        }
    }
    ctx->pc = 0x1294C4u;
label_1294c4:
    // 0x1294c4: 0x82300001  lb          $s0, 0x1($s1)
    ctx->pc = 0x1294c4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1294c8: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x1294c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1294cc: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1294ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_1294d0:
    // 0x1294d0: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1294D0u;
    {
        const bool branch_taken_0x1294d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1294D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1294D0u;
        // 0x1294d4: 0x240a82d  daddu       $s5, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1294d0) {
            ctx->pc = 0x1294ECu;
            goto label_1294ec;
        }
    }
    ctx->pc = 0x1294D8u;
    // 0x1294d8: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x1294d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1294dc: 0x3a0e0030  xori        $t6, $s0, 0x30
    ctx->pc = 0x1294dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)48);
    // 0x1294e0: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x1294e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1294e4: 0x1ee900b  movn        $s2, $t7, $t6
    ctx->pc = 0x1294e4u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 15));
    // 0x1294e8: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x1294e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1294ec:
    // 0x1294ec: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1294ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1294f0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1294f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1294f4: 0xc04b590  jal         func_12D640
    ctx->pc = 0x1294F4u;
    SET_GPR_U32(ctx, 31, 0x1294FCu);
    ctx->pc = 0x1294F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1294F4u;
    // 0x1294f8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D640u, 0x1294F4u, 0x1294FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1294FCu;
label_1294fc:
    // 0x1294fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1294fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129500: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x129500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x129504: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x129504u;
    SET_GPR_U32(ctx, 31, 0x12950Cu);
    ctx->pc = 0x129508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129504u;
    // 0x129508: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x129504u, 0x12950Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12950Cu;
label_12950c:
    // 0x12950c: 0x2f03c  dsll32      $fp, $v0, 0
    ctx->pc = 0x12950cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 0));
    // 0x129510: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x129510u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x129514: 0x1ef03f  dsra32      $fp, $fp, 0
    ctx->pc = 0x129514u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 0));
    // 0x129518: 0x25f63a90  addiu       $s6, $t7, 0x3A90
    ctx->pc = 0x129518u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 14992));
    // 0x12951c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12951cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_129520:
    // 0x129520: 0x2167821  addu        $t7, $s0, $s6
    ctx->pc = 0x129520u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x129524: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x129524u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x129528: 0x31ae0004  andi        $t6, $t5, 0x4
    ctx->pc = 0x129528u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)4);
    // 0x12952c: 0x11c00032  beqz        $t6, . + 4 + (0x32 << 2)
    ctx->pc = 0x12952Cu;
    {
        const bool branch_taken_0x12952c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x129530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12952Cu;
        // 0x129530: 0x31af0003  andi        $t7, $t5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12952c) {
            ctx->pc = 0x1295F8u;
            goto label_1295f8;
        }
    }
    ctx->pc = 0x129534u;
    // 0x129534: 0x2610ffd0  addiu       $s0, $s0, -0x30
    ctx->pc = 0x129534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967248));
label_129538:
    // 0x129538: 0x212782a  slt         $t7, $s0, $s2
    ctx->pc = 0x129538u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x12953c: 0x11e00013  beqz        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x12953Cu;
    {
        const bool branch_taken_0x12953c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12953c) {
            ctx->pc = 0x12958Cu;
            goto label_12958c;
        }
    }
    ctx->pc = 0x129544u;
    // 0x129544: 0x6600008  bltz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x129544u;
    {
        const bool branch_taken_0x129544 = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x129548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129544u;
        // 0x129548: 0x282782b  sltu        $t7, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129544) {
            ctx->pc = 0x129568u;
            goto label_129568;
        }
    }
    ctx->pc = 0x12954Cu;
    // 0x12954c: 0x55e00007  bnel        $t7, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x12954Cu;
    {
        const bool branch_taken_0x12954c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12954c) {
            ctx->pc = 0x129550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12954Cu;
            // 0x129550: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12956Cu;
            goto label_12956c;
        }
    }
    ctx->pc = 0x129554u;
    // 0x129554: 0x14540008  bne         $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x129554u;
    {
        const bool branch_taken_0x129554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x129558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129554u;
        // 0x129558: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129554) {
            ctx->pc = 0x129578u;
            goto label_129578;
        }
    }
    ctx->pc = 0x12955Cu;
    // 0x12955c: 0x3d0782a  slt         $t7, $fp, $s0
    ctx->pc = 0x12955cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x129560: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x129560u;
    {
        const bool branch_taken_0x129560 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x129560) {
            ctx->pc = 0x129578u;
            goto label_129578;
        }
    }
    ctx->pc = 0x129568u;
label_129568:
    // 0x129568: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x129568u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12956c:
    // 0x12956c: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x12956cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x129570: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x129570u;
    {
        const bool branch_taken_0x129570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129570u;
        // 0x129574: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129570) {
            ctx->pc = 0x129520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129520;
        }
    }
    ctx->pc = 0x129578u;
label_129578:
    // 0x129578: 0xc04b098  jal         func_12C260
    ctx->pc = 0x129578u;
    SET_GPR_U32(ctx, 31, 0x129580u);
    ctx->pc = 0x12957Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129578u;
    // 0x12957c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C260u, 0x129578u, 0x129580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129580u;
label_129580:
    // 0x129580: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x129580u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129584: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x129584u;
    {
        const bool branch_taken_0x129584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129584u;
        // 0x129588: 0x202102d  daddu       $v0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129584) {
            ctx->pc = 0x12956Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12956c;
        }
    }
    ctx->pc = 0x12958Cu;
label_12958c:
    // 0x12958c: 0x6610017  bgez        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x12958Cu;
    {
        const bool branch_taken_0x12958c = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x129590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12958Cu;
        // 0x129590: 0x8fae0008  lw          $t6, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12958c) {
            ctx->pc = 0x1295ECu;
            goto label_1295ec;
        }
    }
    ctx->pc = 0x129594u;
    // 0x129594: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x129594u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129598: 0x240f0022  addiu       $t7, $zero, 0x22
    ctx->pc = 0x129598u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x12959c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12959cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1295a0: 0xadcf0000  sw          $t7, 0x0($t6)
    ctx->pc = 0x1295a0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 15));
label_1295a4:
    // 0x1295a4: 0x8faf0004  lw          $t7, 0x4($sp)
    ctx->pc = 0x1295a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1295a8: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1295A8u;
    {
        const bool branch_taken_0x1295a8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1295ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295A8u;
        // 0x1295ac: 0x262fffff  addiu       $t7, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1295a8) {
            ctx->pc = 0x1295BCu;
            goto label_1295bc;
        }
    }
    ctx->pc = 0x1295B0u;
    // 0x1295b0: 0x8fae0004  lw          $t6, 0x4($sp)
    ctx->pc = 0x1295b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1295b4: 0x1f3b80b  movn        $s7, $t7, $s3
    ctx->pc = 0x1295b4u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
    // 0x1295b8: 0xadd70000  sw          $s7, 0x0($t6)
    ctx->pc = 0x1295b8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 23));
label_1295bc:
    // 0x1295bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1295bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1295c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1295c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1295c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1295c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1295c8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1295c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1295cc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1295ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1295d0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1295d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1295d4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1295d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1295d8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1295d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1295dc: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1295dcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1295e0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1295e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1295e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1295E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1295E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295E4u;
        // 0x1295e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1295E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1295ECu;
label_1295ec:
    // 0x1295ec: 0x2782f  dsubu       $t7, $zero, $v0
    ctx->pc = 0x1295ecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x1295f0: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x1295F0u;
    {
        const bool branch_taken_0x1295f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1295F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295F0u;
        // 0x1295f4: 0x1ee100b  movn        $v0, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1295f0) {
            ctx->pc = 0x1295A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1295a4;
        }
    }
    ctx->pc = 0x1295F8u;
label_1295f8:
    // 0x1295f8: 0x11e0ffe4  beqz        $t7, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1295F8u;
    {
        const bool branch_taken_0x1295f8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1295FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1295F8u;
        // 0x1295fc: 0x260effa9  addiu       $t6, $s0, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1295f8) {
            ctx->pc = 0x12958Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12958c;
        }
    }
    ctx->pc = 0x129600u;
    // 0x129600: 0x260fffc9  addiu       $t7, $s0, -0x37
    ctx->pc = 0x129600u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967241));
    // 0x129604: 0x31ad0001  andi        $t5, $t5, 0x1
    ctx->pc = 0x129604u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x129608: 0x1e0802d  daddu       $s0, $t7, $zero
    ctx->pc = 0x129608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12960c: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x12960Cu;
    {
        const bool branch_taken_0x12960c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12960Cu;
        // 0x129610: 0x1cd800a  movz        $s0, $t6, $t5 (Delay Slot)
        if (GPR_U64(ctx, 13) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12960c) {
            ctx->pc = 0x129538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129538;
        }
    }
    ctx->pc = 0x129614u;
label_129614:
    // 0x129614: 0x160fff9f  bne         $s0, $t7, . + 4 + (-0x61 << 2)
    ctx->pc = 0x129614u;
    {
        const bool branch_taken_0x129614 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        if (branch_taken_0x129614) {
            ctx->pc = 0x129494u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129494;
        }
    }
    ctx->pc = 0x12961Cu;
    // 0x12961c: 0x1000ff9c  b           . + 4 + (-0x64 << 2)
    ctx->pc = 0x12961Cu;
    {
        const bool branch_taken_0x12961c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12961Cu;
        // 0x129620: 0x82300000  lb          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12961c) {
            ctx->pc = 0x129490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129490;
        }
    }
    ctx->pc = 0x129624u;
}
