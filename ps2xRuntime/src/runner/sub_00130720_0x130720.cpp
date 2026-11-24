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

// Function: sub_00130720
// Address: 0x130720 - 0x130838
void sub_00130720_0x130720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130720_0x130720");
#endif

    switch (ctx->pc) {
        case 0x130770u: goto label_130770;
        case 0x130800u: goto label_130800;
        default: break;
    }

    ctx->pc = 0x130720u;

    // 0x130720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x130720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x130724: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x130724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x130728: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x130728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13072c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x13072cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x130730: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x130730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x130734: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x130734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x130738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x130738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13073c: 0x90308070  lbu         $s0, -0x7F90($at)
    ctx->pc = 0x13073cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294934640)));
    // 0x130740: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x130740u;
    {
        const bool branch_taken_0x130740 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x130744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130740u;
        // 0x130744: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130740) {
            ctx->pc = 0x130820u;
            goto label_130820;
        }
    }
    ctx->pc = 0x130748u;
    // 0x130748: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x130748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x13074c: 0x8c25cec0  lw          $a1, -0x3140($at)
    ctx->pc = 0x13074cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954688)));
    // 0x130750: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x130750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x130754: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x130754u;
    {
        const bool branch_taken_0x130754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x130754) {
            ctx->pc = 0x130820u;
            goto label_130820;
        }
    }
    ctx->pc = 0x13075Cu;
    // 0x13075c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x13075cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x130760: 0x34218074  ori         $at, $at, 0x8074
    ctx->pc = 0x130760u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32884);
    // 0x130764: 0x1a00002e  blez        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x130764u;
    {
        const bool branch_taken_0x130764 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x130768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130764u;
        // 0x130768: 0x818821  addu        $s1, $a0, $at (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130764) {
            ctx->pc = 0x130820u;
            goto label_130820;
        }
    }
    ctx->pc = 0x13076Cu;
    // 0x13076c: 0x0  nop
    ctx->pc = 0x13076cu;
    // NOP
label_130770:
    // 0x130770: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x130770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130774: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x130774u;
    {
        const bool branch_taken_0x130774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x130774) {
            ctx->pc = 0x130818u;
            goto label_130818;
        }
    }
    ctx->pc = 0x13077Cu;
    // 0x13077c: 0x96230006  lhu         $v1, 0x6($s1)
    ctx->pc = 0x13077cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x130780: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x130780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x130784: 0xa6230006  sh          $v1, 0x6($s1)
    ctx->pc = 0x130784u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x130788: 0x96240006  lhu         $a0, 0x6($s1)
    ctx->pc = 0x130788u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x13078c: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x13078cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x130790: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x130790u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x130794: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x130794u;
    {
        const bool branch_taken_0x130794 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x130794) {
            ctx->pc = 0x130810u;
            goto label_130810;
        }
    }
    ctx->pc = 0x13079Cu;
    // 0x13079c: 0xa6200006  sh          $zero, 0x6($s1)
    ctx->pc = 0x13079cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x1307a0: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x1307a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1307a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1307a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1307a8: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x1307a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1307ac: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x1307acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1307b0: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x1307b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1307b4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1307b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1307b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1307B8u;
    {
        const bool branch_taken_0x1307b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1307b8) {
            ctx->pc = 0x1307C8u;
            goto label_1307c8;
        }
    }
    ctx->pc = 0x1307C0u;
    // 0x1307c0: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x1307c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1307c4: 0x0  nop
    ctx->pc = 0x1307c4u;
    // NOP
label_1307c8:
    // 0x1307c8: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1307c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1307cc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1307ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1307d0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1307d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1307d4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1307d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1307d8: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x1307d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1307dc: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1307dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1307e0: 0x92250001  lbu         $a1, 0x1($s1)
    ctx->pc = 0x1307e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x1307e4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1307e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1307e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1307e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1307ec: 0x92260002  lbu         $a2, 0x2($s1)
    ctx->pc = 0x1307ecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1307f0: 0xdce70010  ld          $a3, 0x10($a3)
    ctx->pc = 0x1307f0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1307f4: 0x8c44008c  lw          $a0, 0x8C($v0)
    ctx->pc = 0x1307f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1307f8: 0xc04cfd8  jal         func_133F60
    ctx->pc = 0x1307F8u;
    SET_GPR_U32(ctx, 31, 0x130800u);
    ctx->pc = 0x1307FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1307F8u;
    // 0x1307fc: 0xe39024  and         $s2, $a3, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133F60u, 0x1307F8u, 0x130800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130800u;
label_130800:
    // 0x130800: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x130800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x130804: 0x2422025  or          $a0, $s2, $v0
    ctx->pc = 0x130804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x130808: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x130808u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x13080c: 0x0  nop
    ctx->pc = 0x13080cu;
    // NOP
label_130810:
    // 0x130810: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x130810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x130814: 0x0  nop
    ctx->pc = 0x130814u;
    // NOP
label_130818:
    // 0x130818: 0x1e00ffd5  bgtz        $s0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x130818u;
    {
        const bool branch_taken_0x130818 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x13081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130818u;
        // 0x13081c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130818) {
            ctx->pc = 0x130770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130770;
        }
    }
    ctx->pc = 0x130820u;
label_130820:
    // 0x130820: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x130820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130824: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x130824u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x130828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13082c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13082cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130830: 0x3e00008  jr          $ra
    ctx->pc = 0x130830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130830u;
        // 0x130834: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130838u;
}
