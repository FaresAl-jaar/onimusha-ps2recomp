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

// Function: sub_003236F0
// Address: 0x3236f0 - 0x323864
void sub_003236F0_0x3236f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003236F0_0x3236f0");
#endif

    switch (ctx->pc) {
        case 0x323710u: goto label_323710;
        case 0x3237b0u: goto label_3237b0;
        case 0x3237d4u: goto label_3237d4;
        default: break;
    }

    ctx->pc = 0x3236f0u;

    // 0x3236f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3236f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3236f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3236f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3236f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3236f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3236fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3236fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x323700: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x323700u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323704: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x323704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x323708: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x323708u;
    SET_GPR_U32(ctx, 31, 0x323710u);
    ctx->pc = 0x32370Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323708u;
    // 0x32370c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x323708u, 0x323710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323710u;
label_323710:
    // 0x323710: 0x92640002  lbu         $a0, 0x2($s3)
    ctx->pc = 0x323710u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x323714: 0x240300a7  addiu       $v1, $zero, 0xA7
    ctx->pc = 0x323714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
    // 0x323718: 0x1483004b  bne         $a0, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x323718u;
    {
        const bool branch_taken_0x323718 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x323718) {
            ctx->pc = 0x323848u;
            goto label_323848;
        }
    }
    ctx->pc = 0x323720u;
    // 0x323720: 0x8e66004c  lw          $a2, 0x4C($s3)
    ctx->pc = 0x323720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x323724: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x323724u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x323728: 0x2405fff7  addiu       $a1, $zero, -0x9
    ctx->pc = 0x323728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x32372c: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x32372cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x323730: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x323730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x323734: 0x8cc8007c  lw          $t0, 0x7C($a2)
    ctx->pc = 0x323734u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x323738: 0x8d0605d4  lw          $a2, 0x5D4($t0)
    ctx->pc = 0x323738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1492)));
    // 0x32373c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x32373cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x323740: 0xad0605d4  sw          $a2, 0x5D4($t0)
    ctx->pc = 0x323740u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1492), GPR_U32(ctx, 6));
    // 0x323744: 0xae6504c4  sw          $a1, 0x4C4($s3)
    ctx->pc = 0x323744u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1220), GPR_U32(ctx, 5));
    // 0x323748: 0xae6504c8  sw          $a1, 0x4C8($s3)
    ctx->pc = 0x323748u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1224), GPR_U32(ctx, 5));
    // 0x32374c: 0xae6504cc  sw          $a1, 0x4CC($s3)
    ctx->pc = 0x32374cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1228), GPR_U32(ctx, 5));
    // 0x323750: 0x8e65004c  lw          $a1, 0x4C($s3)
    ctx->pc = 0x323750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x323754: 0x8ca6007c  lw          $a2, 0x7C($a1)
    ctx->pc = 0x323754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x323758: 0x8cc507c4  lw          $a1, 0x7C4($a2)
    ctx->pc = 0x323758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1988)));
    // 0x32375c: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x32375cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x323760: 0xacc507c4  sw          $a1, 0x7C4($a2)
    ctx->pc = 0x323760u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1988), GPR_U32(ctx, 5));
    // 0x323764: 0xae6404c4  sw          $a0, 0x4C4($s3)
    ctx->pc = 0x323764u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1220), GPR_U32(ctx, 4));
    // 0x323768: 0xae6404c8  sw          $a0, 0x4C8($s3)
    ctx->pc = 0x323768u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1224), GPR_U32(ctx, 4));
    // 0x32376c: 0xae6404cc  sw          $a0, 0x4CC($s3)
    ctx->pc = 0x32376cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1228), GPR_U32(ctx, 4));
    // 0x323770: 0x8e64004c  lw          $a0, 0x4C($s3)
    ctx->pc = 0x323770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x323774: 0x8c85007c  lw          $a1, 0x7C($a0)
    ctx->pc = 0x323774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x323778: 0x8ca409b4  lw          $a0, 0x9B4($a1)
    ctx->pc = 0x323778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2484)));
    // 0x32377c: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x32377cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x323780: 0xaca409b4  sw          $a0, 0x9B4($a1)
    ctx->pc = 0x323780u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2484), GPR_U32(ctx, 4));
    // 0x323784: 0xae6304c4  sw          $v1, 0x4C4($s3)
    ctx->pc = 0x323784u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1220), GPR_U32(ctx, 3));
    // 0x323788: 0xae6304c8  sw          $v1, 0x4C8($s3)
    ctx->pc = 0x323788u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1224), GPR_U32(ctx, 3));
    // 0x32378c: 0xae6304cc  sw          $v1, 0x4CC($s3)
    ctx->pc = 0x32378cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1228), GPR_U32(ctx, 3));
    // 0x323790: 0x8e64004c  lw          $a0, 0x4C($s3)
    ctx->pc = 0x323790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x323794: 0x9483006a  lhu         $v1, 0x6A($a0)
    ctx->pc = 0x323794u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 106)));
    // 0x323798: 0x2c63000a  sltiu       $v1, $v1, 0xA
    ctx->pc = 0x323798u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x32379c: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x32379Cu;
    {
        const bool branch_taken_0x32379c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3237A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32379Cu;
        // 0x3237a0: 0x2412000a  addiu       $s2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32379c) {
            ctx->pc = 0x323848u;
            goto label_323848;
        }
    }
    ctx->pc = 0x3237A4u;
    // 0x3237a4: 0x241108c0  addiu       $s1, $zero, 0x8C0
    ctx->pc = 0x3237a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2240));
    // 0x3237a8: 0x24100280  addiu       $s0, $zero, 0x280
    ctx->pc = 0x3237a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x3237ac: 0x0  nop
    ctx->pc = 0x3237acu;
    // NOP
label_3237b0:
    // 0x3237b0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x3237b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x3237b4: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x3237b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3237b8: 0x946200c6  lhu         $v0, 0xC6($v1)
    ctx->pc = 0x3237b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 198)));
    // 0x3237bc: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3237bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3237c0: 0xa46200c6  sh          $v0, 0xC6($v1)
    ctx->pc = 0x3237c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 198), (uint16_t)GPR_U32(ctx, 2));
    // 0x3237c4: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x3237c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x3237c8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3237c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3237cc: 0xc04150c  jal         func_105430
    ctx->pc = 0x3237CCu;
    SET_GPR_U32(ctx, 31, 0x3237D4u);
    ctx->pc = 0x3237D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3237CCu;
    // 0x3237d0: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x3237CCu, 0x3237D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3237D4u;
label_3237d4:
    // 0x3237d4: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x3237d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
    // 0x3237d8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3237d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x3237dc: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x3237dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3237e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3237e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3237e4: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x3237e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x3237e8: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x3237e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3237ec: 0x263100e0  addiu       $s1, $s1, 0xE0
    ctx->pc = 0x3237ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x3237f0: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x3237f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x3237f4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3237f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3237f8: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x3237f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x3237fc: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x3237fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x323800: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x323800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x323804: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x323804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x323808: 0xac650034  sw          $a1, 0x34($v1)
    ctx->pc = 0x323808u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 5));
    // 0x32380c: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x32380cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x323810: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x323810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323814: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x323814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x323818: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x323818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x32381c: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x32381cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x323820: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x323820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x323824: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x323824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x323828: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x323828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x32382c: 0xac64003c  sw          $a0, 0x3C($v1)
    ctx->pc = 0x32382cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 4));
    // 0x323830: 0x8e64004c  lw          $a0, 0x4C($s3)
    ctx->pc = 0x323830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x323834: 0x9483006a  lhu         $v1, 0x6A($a0)
    ctx->pc = 0x323834u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 106)));
    // 0x323838: 0x72082b  sltu        $at, $v1, $s2
    ctx->pc = 0x323838u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x32383c: 0x1020ffdc  beqz        $at, . + 4 + (-0x24 << 2)
    ctx->pc = 0x32383Cu;
    {
        const bool branch_taken_0x32383c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x323840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32383Cu;
        // 0x323840: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32383c) {
            ctx->pc = 0x3237B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3237b0;
        }
    }
    ctx->pc = 0x323844u;
    // 0x323844: 0x0  nop
    ctx->pc = 0x323844u;
    // NOP
label_323848:
    // 0x323848: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x323848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32384c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32384cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x323850: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x323850u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323854: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x323854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323858: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x323858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32385c: 0x3e00008  jr          $ra
    ctx->pc = 0x32385Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32385Cu;
        // 0x323860: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32385Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323864u;
}
