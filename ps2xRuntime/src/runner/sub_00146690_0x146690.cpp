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

// Function: sub_00146690
// Address: 0x146690 - 0x1467d0
void sub_00146690_0x146690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146690_0x146690");
#endif

    switch (ctx->pc) {
        case 0x1466c0u: goto label_1466c0;
        case 0x1466c8u: goto label_1466c8;
        case 0x1466f4u: goto label_1466f4;
        case 0x146710u: goto label_146710;
        case 0x14674cu: goto label_14674c;
        case 0x146770u: goto label_146770;
        case 0x146790u: goto label_146790;
        case 0x1467b0u: goto label_1467b0;
        default: break;
    }

    ctx->pc = 0x146690u;

    // 0x146690: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x146690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x146694: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x146694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x146698: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x146698u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14669c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14669cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1466a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1466a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1466a4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1466a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1466a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1466a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1466ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1466acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1466b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1466b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1466b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1466b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1466b8: 0xc0518bc  jal         func_1462F0
    ctx->pc = 0x1466B8u;
    SET_GPR_U32(ctx, 31, 0x1466C0u);
    ctx->pc = 0x1466BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1466B8u;
    // 0x1466bc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1462F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1462F0u, 0x1466B8u, 0x1466C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1466C0u;
label_1466c0:
    // 0x1466c0: 0x26900250  addiu       $s0, $s4, 0x250
    ctx->pc = 0x1466c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 592));
    // 0x1466c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1466c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1466c8:
    // 0x1466c8: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1466c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1466cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1466CCu;
    {
        const bool branch_taken_0x1466cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1466cc) {
            ctx->pc = 0x1466F8u;
            goto label_1466f8;
        }
    }
    ctx->pc = 0x1466D4u;
    // 0x1466d4: 0xc6600084  lwc1        $f0, 0x84($s3)
    ctx->pc = 0x1466d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1466d8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1466d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1466dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1466dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1466e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1466e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1466e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1466e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1466e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1466e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1466ec: 0xc051c70  jal         func_1471C0
    ctx->pc = 0x1466ECu;
    SET_GPR_U32(ctx, 31, 0x1466F4u);
    ctx->pc = 0x1466F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1466ECu;
    // 0x1466f0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1471C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1471C0u, 0x1466ECu, 0x1466F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1466F4u;
label_1466f4:
    // 0x1466f4: 0x0  nop
    ctx->pc = 0x1466f4u;
    // NOP
label_1466f8:
    // 0x1466f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1466f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1466fc: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1466fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x146700: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x146700u;
    {
        const bool branch_taken_0x146700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146700u;
        // 0x146704: 0x26100038  addiu       $s0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146700) {
            ctx->pc = 0x1466C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1466c8;
        }
    }
    ctx->pc = 0x146708u;
    // 0x146708: 0x26910100  addiu       $s1, $s4, 0x100
    ctx->pc = 0x146708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
    // 0x14670c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14670cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_146710:
    // 0x146710: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x146710u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x146714: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x146714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x146718: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x146718u;
    {
        const bool branch_taken_0x146718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x146718) {
            ctx->pc = 0x146750u;
            goto label_146750;
        }
    }
    ctx->pc = 0x146720u;
    // 0x146720: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x146720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x146724: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x146724u;
    {
        const bool branch_taken_0x146724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146724) {
            ctx->pc = 0x146750u;
            goto label_146750;
        }
    }
    ctx->pc = 0x14672Cu;
    // 0x14672c: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x14672cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x146730: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x146730u;
    {
        const bool branch_taken_0x146730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146730) {
            ctx->pc = 0x146750u;
            goto label_146750;
        }
    }
    ctx->pc = 0x146738u;
    // 0x146738: 0xc66c0084  lwc1        $f12, 0x84($s3)
    ctx->pc = 0x146738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14673c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14673cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146740: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x146740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146744: 0xc051a2c  jal         func_1468B0
    ctx->pc = 0x146744u;
    SET_GPR_U32(ctx, 31, 0x14674Cu);
    ctx->pc = 0x146748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146744u;
    // 0x146748: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1468B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1468B0u, 0x146744u, 0x14674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14674Cu;
label_14674c:
    // 0x14674c: 0x0  nop
    ctx->pc = 0x14674cu;
    // NOP
label_146750:
    // 0x146750: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x146750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x146754: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x146754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x146758: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x146758u;
    {
        const bool branch_taken_0x146758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146758u;
        // 0x14675c: 0x26310054  addiu       $s1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146758) {
            ctx->pc = 0x146710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146710;
        }
    }
    ctx->pc = 0x146760u;
    // 0x146760: 0x92900352  lbu         $s0, 0x352($s4)
    ctx->pc = 0x146760u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 850)));
    // 0x146764: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x146764u;
    {
        const bool branch_taken_0x146764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x146768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146764u;
        // 0x146768: 0x8e910344  lw          $s1, 0x344($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 836)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146764) {
            ctx->pc = 0x1467A0u;
            goto label_1467a0;
        }
    }
    ctx->pc = 0x14676Cu;
    // 0x14676c: 0x0  nop
    ctx->pc = 0x14676cu;
    // NOP
label_146770:
    // 0x146770: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x146770u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x146774: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x146774u;
    {
        const bool branch_taken_0x146774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146774) {
            ctx->pc = 0x146790u;
            goto label_146790;
        }
    }
    ctx->pc = 0x14677Cu;
    // 0x14677c: 0xc66c0084  lwc1        $f12, 0x84($s3)
    ctx->pc = 0x14677cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x146780: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x146780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146784: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x146784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146788: 0xc051a2c  jal         func_1468B0
    ctx->pc = 0x146788u;
    SET_GPR_U32(ctx, 31, 0x146790u);
    ctx->pc = 0x14678Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146788u;
    // 0x14678c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1468B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1468B0u, 0x146788u, 0x146790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146790u;
label_146790:
    // 0x146790: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x146790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x146794: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x146794u;
    {
        const bool branch_taken_0x146794 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x146798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146794u;
        // 0x146798: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146794) {
            ctx->pc = 0x146770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146770;
        }
    }
    ctx->pc = 0x14679Cu;
    // 0x14679c: 0x0  nop
    ctx->pc = 0x14679cu;
    // NOP
label_1467a0:
    // 0x1467a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1467a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1467a4: 0xc66c0084  lwc1        $f12, 0x84($s3)
    ctx->pc = 0x1467a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1467a8: 0xc051aa8  jal         func_146AA0
    ctx->pc = 0x1467A8u;
    SET_GPR_U32(ctx, 31, 0x1467B0u);
    ctx->pc = 0x1467ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1467A8u;
    // 0x1467ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146AA0u, 0x1467A8u, 0x1467B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1467B0u;
label_1467b0:
    // 0x1467b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1467b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1467b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1467b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1467b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1467b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1467bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1467bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1467c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1467c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1467c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1467c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1467c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1467C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1467CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1467C8u;
        // 0x1467cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1467C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1467D0u;
}
