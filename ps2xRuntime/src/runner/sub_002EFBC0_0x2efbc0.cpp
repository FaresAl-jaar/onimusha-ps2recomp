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

// Function: sub_002EFBC0
// Address: 0x2efbc0 - 0x2f0358
void sub_002EFBC0_0x2efbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFBC0_0x2efbc0");
#endif

    switch (ctx->pc) {
        case 0x2efc08u: goto label_2efc08;
        case 0x2efd10u: goto label_2efd10;
        case 0x2efdbcu: goto label_2efdbc;
        case 0x2efddcu: goto label_2efddc;
        case 0x2efe24u: goto label_2efe24;
        case 0x2efe30u: goto label_2efe30;
        case 0x2efe54u: goto label_2efe54;
        case 0x2efe70u: goto label_2efe70;
        case 0x2efe7cu: goto label_2efe7c;
        case 0x2efec4u: goto label_2efec4;
        case 0x2efed8u: goto label_2efed8;
        case 0x2efee8u: goto label_2efee8;
        case 0x2efef0u: goto label_2efef0;
        case 0x2eff38u: goto label_2eff38;
        case 0x2eff60u: goto label_2eff60;
        case 0x2f003cu: goto label_2f003c;
        case 0x2f0078u: goto label_2f0078;
        case 0x2f0188u: goto label_2f0188;
        case 0x2f0198u: goto label_2f0198;
        case 0x2f01a0u: goto label_2f01a0;
        case 0x2f01b4u: goto label_2f01b4;
        case 0x2f01e0u: goto label_2f01e0;
        case 0x2f0230u: goto label_2f0230;
        case 0x2f0248u: goto label_2f0248;
        case 0x2f0258u: goto label_2f0258;
        case 0x2f0270u: goto label_2f0270;
        case 0x2f02b0u: goto label_2f02b0;
        case 0x2f0318u: goto label_2f0318;
        case 0x2f0328u: goto label_2f0328;
        default: break;
    }

    ctx->pc = 0x2efbc0u;

    // 0x2efbc0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2efbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2efbc4: 0x2403007b  addiu       $v1, $zero, 0x7B
    ctx->pc = 0x2efbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x2efbc8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2efbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2efbcc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2efbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2efbd0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2efbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2efbd4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2efbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2efbd8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2efbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2efbdc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2efbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2efbe0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2efbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2efbe4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2efbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2efbe8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2efbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2efbec: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2efbecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2efbf0: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x2efbf0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2efbf4: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFBF4u;
    {
        const bool branch_taken_0x2efbf4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2EFBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFBF4u;
        // 0x2efbf8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efbf4) {
            ctx->pc = 0x2EFC08u;
            goto label_2efc08;
        }
    }
    ctx->pc = 0x2EFBFCu;
    // 0x2efbfc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2efbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2efc00: 0xc0bbc74  jal         func_2EF1D0
    ctx->pc = 0x2EFC00u;
    SET_GPR_U32(ctx, 31, 0x2EFC08u);
    ctx->pc = 0x2EFC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFC00u;
    // 0x2efc04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF1D0u, 0x2EFC00u, 0x2EFC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFC08u;
label_2efc08:
    // 0x2efc08: 0x8e850148  lw          $a1, 0x148($s4)
    ctx->pc = 0x2efc08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x2efc0c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2efc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2efc10: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x2efc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x2efc14: 0x24030383  addiu       $v1, $zero, 0x383
    ctx->pc = 0x2efc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 899));
    // 0x2efc18: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x2efc18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2efc1c: 0xae840148  sw          $a0, 0x148($s4)
    ctx->pc = 0x2efc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 4));
    // 0x2efc20: 0x8e840148  lw          $a0, 0x148($s4)
    ctx->pc = 0x2efc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x2efc24: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x2efc24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x2efc28: 0xae840148  sw          $a0, 0x148($s4)
    ctx->pc = 0x2efc28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 4));
    // 0x2efc2c: 0x8e840148  lw          $a0, 0x148($s4)
    ctx->pc = 0x2efc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x2efc30: 0x34841000  ori         $a0, $a0, 0x1000
    ctx->pc = 0x2efc30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4096);
    // 0x2efc34: 0xae840148  sw          $a0, 0x148($s4)
    ctx->pc = 0x2efc34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 4));
    // 0x2efc38: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x2efc38u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x2efc3c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFC3Cu;
    {
        const bool branch_taken_0x2efc3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EFC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC3Cu;
        // 0x2efc40: 0x24030393  addiu       $v1, $zero, 0x393 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 915));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc3c) {
            ctx->pc = 0x2EFC50u;
            goto label_2efc50;
        }
    }
    ctx->pc = 0x2EFC44u;
    // 0x2efc44: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EFC44u;
    {
        const bool branch_taken_0x2efc44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2efc44) {
            ctx->pc = 0x2EFC60u;
            goto label_2efc60;
        }
    }
    ctx->pc = 0x2EFC4Cu;
    // 0x2efc4c: 0x0  nop
    ctx->pc = 0x2efc4cu;
    // NOP
label_2efc50:
    // 0x2efc50: 0x8e840148  lw          $a0, 0x148($s4)
    ctx->pc = 0x2efc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x2efc54: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x2efc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x2efc58: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2efc58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2efc5c: 0xae830148  sw          $v1, 0x148($s4)
    ctx->pc = 0x2efc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 3));
label_2efc60:
    // 0x2efc60: 0x928307d9  lbu         $v1, 0x7D9($s4)
    ctx->pc = 0x2efc60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2009)));
    // 0x2efc64: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2EFC64u;
    {
        const bool branch_taken_0x2efc64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC64u;
        // 0x2efc68: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc64) {
            ctx->pc = 0x2EFC90u;
            goto label_2efc90;
        }
    }
    ctx->pc = 0x2EFC6Cu;
    // 0x2efc6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2efc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2efc70: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EFC70u;
    {
        const bool branch_taken_0x2efc70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2efc70) {
            ctx->pc = 0x2EFC88u;
            goto label_2efc88;
        }
    }
    ctx->pc = 0x2EFC78u;
    // 0x2efc78: 0x8e830148  lw          $v1, 0x148($s4)
    ctx->pc = 0x2efc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x2efc7c: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x2efc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x2efc80: 0xae830148  sw          $v1, 0x148($s4)
    ctx->pc = 0x2efc80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 3));
    // 0x2efc84: 0x0  nop
    ctx->pc = 0x2efc84u;
    // NOP
label_2efc88:
    // 0x2efc88: 0x100001a7  b           . + 4 + (0x1A7 << 2)
    ctx->pc = 0x2EFC88u;
    {
        const bool branch_taken_0x2efc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efc88) {
            ctx->pc = 0x2F0328u;
            goto label_2f0328;
        }
    }
    ctx->pc = 0x2EFC90u;
label_2efc90:
    // 0x2efc90: 0x9284065c  lbu         $a0, 0x65C($s4)
    ctx->pc = 0x2efc90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1628)));
    // 0x2efc94: 0x240300e1  addiu       $v1, $zero, 0xE1
    ctx->pc = 0x2efc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
    // 0x2efc98: 0x108301a1  beq         $a0, $v1, . + 4 + (0x1A1 << 2)
    ctx->pc = 0x2EFC98u;
    {
        const bool branch_taken_0x2efc98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EFC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFC98u;
        // 0x2efc9c: 0x240300e0  addiu       $v1, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efc98) {
            ctx->pc = 0x2F0320u;
            goto label_2f0320;
        }
    }
    ctx->pc = 0x2EFCA0u;
    // 0x2efca0: 0x1083019b  beq         $a0, $v1, . + 4 + (0x19B << 2)
    ctx->pc = 0x2EFCA0u;
    {
        const bool branch_taken_0x2efca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2efca0) {
            ctx->pc = 0x2F0310u;
            goto label_2f0310;
        }
    }
    ctx->pc = 0x2EFCA8u;
    // 0x2efca8: 0x240300e2  addiu       $v1, $zero, 0xE2
    ctx->pc = 0x2efca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
    // 0x2efcac: 0x1083017c  beq         $a0, $v1, . + 4 + (0x17C << 2)
    ctx->pc = 0x2EFCACu;
    {
        const bool branch_taken_0x2efcac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EFCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFCACu;
        // 0x2efcb0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efcac) {
            ctx->pc = 0x2F02A0u;
            goto label_2f02a0;
        }
    }
    ctx->pc = 0x2EFCB4u;
    // 0x2efcb4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFCB4u;
    {
        const bool branch_taken_0x2efcb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2efcb4) {
            ctx->pc = 0x2EFCC8u;
            goto label_2efcc8;
        }
    }
    ctx->pc = 0x2EFCBCu;
    // 0x2efcbc: 0x1000019a  b           . + 4 + (0x19A << 2)
    ctx->pc = 0x2EFCBCu;
    {
        const bool branch_taken_0x2efcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efcbc) {
            ctx->pc = 0x2F0328u;
            goto label_2f0328;
        }
    }
    ctx->pc = 0x2EFCC4u;
    // 0x2efcc4: 0x0  nop
    ctx->pc = 0x2efcc4u;
    // NOP
label_2efcc8:
    // 0x2efcc8: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x2efcc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x2efccc: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x2efcccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x2efcd0: 0x24030383  addiu       $v1, $zero, 0x383
    ctx->pc = 0x2efcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 899));
    // 0x2efcd4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFCD4u;
    {
        const bool branch_taken_0x2efcd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EFCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFCD4u;
        // 0x2efcd8: 0x24030393  addiu       $v1, $zero, 0x393 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 915));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efcd4) {
            ctx->pc = 0x2EFCE8u;
            goto label_2efce8;
        }
    }
    ctx->pc = 0x2EFCDCu;
    // 0x2efcdc: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EFCDCu;
    {
        const bool branch_taken_0x2efcdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2efcdc) {
            ctx->pc = 0x2EFCF8u;
            goto label_2efcf8;
        }
    }
    ctx->pc = 0x2EFCE4u;
    // 0x2efce4: 0x0  nop
    ctx->pc = 0x2efce4u;
    // NOP
label_2efce8:
    // 0x2efce8: 0x8e830148  lw          $v1, 0x148($s4)
    ctx->pc = 0x2efce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x2efcec: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x2efcecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x2efcf0: 0xae830148  sw          $v1, 0x148($s4)
    ctx->pc = 0x2efcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 3));
    // 0x2efcf4: 0x0  nop
    ctx->pc = 0x2efcf4u;
    // NOP
label_2efcf8:
    // 0x2efcf8: 0x8e8306ac  lw          $v1, 0x6AC($s4)
    ctx->pc = 0x2efcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1708)));
    // 0x2efcfc: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x2efcfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x2efd00: 0x10600189  beqz        $v1, . + 4 + (0x189 << 2)
    ctx->pc = 0x2EFD00u;
    {
        const bool branch_taken_0x2efd00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFD00u;
        // 0x2efd04: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efd00) {
            ctx->pc = 0x2F0328u;
            goto label_2f0328;
        }
    }
    ctx->pc = 0x2EFD08u;
    // 0x2efd08: 0x27968060  addiu       $s6, $gp, -0x7FA0
    ctx->pc = 0x2efd08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2efd0c: 0x27b700b4  addiu       $s7, $sp, 0xB4
    ctx->pc = 0x2efd0cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_2efd10:
    // 0x2efd10: 0x928407d8  lbu         $a0, 0x7D8($s4)
    ctx->pc = 0x2efd10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2008)));
    // 0x2efd14: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x2efd14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x2efd18: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2EFD18u;
    {
        const bool branch_taken_0x2efd18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFD18u;
        // 0x2efd1c: 0x8ed20000  lw          $s2, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efd18) {
            ctx->pc = 0x2EFD58u;
            goto label_2efd58;
        }
    }
    ctx->pc = 0x2EFD20u;
    // 0x2efd20: 0x30830007  andi        $v1, $a0, 0x7
    ctx->pc = 0x2efd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x2efd24: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2efd24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2efd28: 0x24643100  addiu       $a0, $v1, 0x3100
    ctx->pc = 0x2efd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12544));
    // 0x2efd2c: 0x3086001f  andi        $a2, $a0, 0x1F
    ctx->pc = 0x2efd2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x2efd30: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x2efd30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x2efd34: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x2efd34u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x2efd38: 0x24630fe0  addiu       $v1, $v1, 0xFE0
    ctx->pc = 0x2efd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4064));
    // 0x2efd3c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2efd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2efd40: 0xc52806  srlv        $a1, $a1, $a2
    ctx->pc = 0x2efd40u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x2efd44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2efd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2efd48: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2efd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2efd4c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2efd4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2efd50: 0x1460014d  bnez        $v1, . + 4 + (0x14D << 2)
    ctx->pc = 0x2EFD50u;
    {
        const bool branch_taken_0x2efd50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efd50) {
            ctx->pc = 0x2F0288u;
            goto label_2f0288;
        }
    }
    ctx->pc = 0x2EFD58u;
label_2efd58:
    // 0x2efd58: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2efd58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2efd5c: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x2efd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2efd60: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2efd60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2efd64: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2efd64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2efd68: 0x14600147  bnez        $v1, . + 4 + (0x147 << 2)
    ctx->pc = 0x2EFD68u;
    {
        const bool branch_taken_0x2efd68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efd68) {
            ctx->pc = 0x2F0288u;
            goto label_2f0288;
        }
    }
    ctx->pc = 0x2EFD70u;
    // 0x2efd70: 0x12400145  beqz        $s2, . + 4 + (0x145 << 2)
    ctx->pc = 0x2EFD70u;
    {
        const bool branch_taken_0x2efd70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efd70) {
            ctx->pc = 0x2F0288u;
            goto label_2f0288;
        }
    }
    ctx->pc = 0x2EFD78u;
    // 0x2efd78: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x2efd78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2efd7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2efd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2efd80: 0x14650141  bne         $v1, $a1, . + 4 + (0x141 << 2)
    ctx->pc = 0x2EFD80u;
    {
        const bool branch_taken_0x2efd80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2efd80) {
            ctx->pc = 0x2F0288u;
            goto label_2f0288;
        }
    }
    ctx->pc = 0x2EFD88u;
    // 0x2efd88: 0x92440640  lbu         $a0, 0x640($s2)
    ctx->pc = 0x2efd88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1600)));
    // 0x2efd8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2efd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2efd90: 0x1483013d  bne         $a0, $v1, . + 4 + (0x13D << 2)
    ctx->pc = 0x2EFD90u;
    {
        const bool branch_taken_0x2efd90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2efd90) {
            ctx->pc = 0x2F0288u;
            goto label_2f0288;
        }
    }
    ctx->pc = 0x2EFD98u;
    // 0x2efd98: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x2efd98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2efd9c: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x2efd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2efda0: 0x14830139  bne         $a0, $v1, . + 4 + (0x139 << 2)
    ctx->pc = 0x2EFDA0u;
    {
        const bool branch_taken_0x2efda0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2efda0) {
            ctx->pc = 0x2F0288u;
            goto label_2f0288;
        }
    }
    ctx->pc = 0x2EFDA8u;
    // 0x2efda8: 0x9243065c  lbu         $v1, 0x65C($s2)
    ctx->pc = 0x2efda8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1628)));
    // 0x2efdac: 0x14650136  bne         $v1, $a1, . + 4 + (0x136 << 2)
    ctx->pc = 0x2EFDACu;
    {
        const bool branch_taken_0x2efdac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2EFDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFDACu;
        // 0x2efdb0: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efdac) {
            ctx->pc = 0x2F0288u;
            goto label_2f0288;
        }
    }
    ctx->pc = 0x2EFDB4u;
    // 0x2efdb4: 0xc096988  jal         func_25A620
    ctx->pc = 0x2EFDB4u;
    SET_GPR_U32(ctx, 31, 0x2EFDBCu);
    ctx->pc = 0x2EFDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFDB4u;
    // 0x2efdb8: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x2EFDB4u, 0x2EFDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFDBCu;
label_2efdbc:
    // 0x2efdbc: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2efdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2efdc0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2efdc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2efdc4: 0x0  nop
    ctx->pc = 0x2efdc4u;
    // NOP
    // 0x2efdc8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2efdc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2efdcc: 0x4500012e  bc1f        . + 4 + (0x12E << 2)
    ctx->pc = 0x2EFDCCu;
    {
        const bool branch_taken_0x2efdcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EFDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFDCCu;
        // 0x2efdd0: 0x26840020  addiu       $a0, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efdcc) {
            ctx->pc = 0x2F0288u;
            goto label_2f0288;
        }
    }
    ctx->pc = 0x2EFDD4u;
    // 0x2efdd4: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x2EFDD4u;
    SET_GPR_U32(ctx, 31, 0x2EFDDCu);
    ctx->pc = 0x2EFDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFDD4u;
    // 0x2efdd8: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x2EFDD4u, 0x2EFDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFDDCu;
label_2efddc:
    // 0x2efddc: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x2efddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x2efde0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2efde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2efde4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2efde4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2efde8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2efde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2efdec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2efdecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2efdf0: 0x0  nop
    ctx->pc = 0x2efdf0u;
    // NOP
    // 0x2efdf4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2efdf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2efdf8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2efdf8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2efdfc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2efdfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2efe00: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2efe00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2efe04: 0x0  nop
    ctx->pc = 0x2efe04u;
    // NOP
    // 0x2efe08: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2efe08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2efe0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2efe0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2efe10: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2efe10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2efe14: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x2efe14u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2efe18: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x2efe18u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x2efe1c: 0xc096a08  jal         func_25A820
    ctx->pc = 0x2EFE1Cu;
    SET_GPR_U32(ctx, 31, 0x2EFE24u);
    ctx->pc = 0x2EFE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFE1Cu;
    // 0x2efe20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A820u, 0x2EFE1Cu, 0x2EFE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFE24u;
label_2efe24:
    // 0x2efe24: 0x864400c2  lh          $a0, 0xC2($s2)
    ctx->pc = 0x2efe24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x2efe28: 0xc096a08  jal         func_25A820
    ctx->pc = 0x2EFE28u;
    SET_GPR_U32(ctx, 31, 0x2EFE30u);
    ctx->pc = 0x2EFE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFE28u;
    // 0x2efe2c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A820u, 0x2EFE28u, 0x2EFE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFE30u;
label_2efe30:
    // 0x2efe30: 0x16020115  bne         $s0, $v0, . + 4 + (0x115 << 2)
    ctx->pc = 0x2EFE30u;
    {
        const bool branch_taken_0x2efe30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2efe30) {
            ctx->pc = 0x2F0288u;
            goto label_2f0288;
        }
    }
    ctx->pc = 0x2EFE38u;
    // 0x2efe38: 0xde430500  ld          $v1, 0x500($s2)
    ctx->pc = 0x2efe38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 1280)));
    // 0x2efe3c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x2efe3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2efe40: 0x10600111  beqz        $v1, . + 4 + (0x111 << 2)
    ctx->pc = 0x2EFE40u;
    {
        const bool branch_taken_0x2efe40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efe40) {
            ctx->pc = 0x2F0288u;
            goto label_2f0288;
        }
    }
    ctx->pc = 0x2EFE48u;
    // 0x2efe48: 0x868400c2  lh          $a0, 0xC2($s4)
    ctx->pc = 0x2efe48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
    // 0x2efe4c: 0xc096818  jal         func_25A060
    ctx->pc = 0x2EFE4Cu;
    SET_GPR_U32(ctx, 31, 0x2EFE54u);
    ctx->pc = 0x2EFE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFE4Cu;
    // 0x2efe50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A060u, 0x2EFE4Cu, 0x2EFE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFE54u;
label_2efe54:
    // 0x2efe54: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x2efe54u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2efe58: 0x928207d8  lbu         $v0, 0x7D8($s4)
    ctx->pc = 0x2efe58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2008)));
    // 0x2efe5c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2efe5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2efe60: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EFE60u;
    {
        const bool branch_taken_0x2efe60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFE60u;
        // 0x2efe64: 0x139c3f  dsra32      $s3, $s3, 16 (Delay Slot)
        SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efe60) {
            ctx->pc = 0x2EFE88u;
            goto label_2efe88;
        }
    }
    ctx->pc = 0x2EFE68u;
    // 0x2efe68: 0xc096a08  jal         func_25A820
    ctx->pc = 0x2EFE68u;
    SET_GPR_U32(ctx, 31, 0x2EFE70u);
    ctx->pc = 0x2EFE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFE68u;
    // 0x2efe6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A820u, 0x2EFE68u, 0x2EFE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFE70u;
label_2efe70:
    // 0x2efe70: 0x868400c2  lh          $a0, 0xC2($s4)
    ctx->pc = 0x2efe70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 194)));
    // 0x2efe74: 0xc096a08  jal         func_25A820
    ctx->pc = 0x2EFE74u;
    SET_GPR_U32(ctx, 31, 0x2EFE7Cu);
    ctx->pc = 0x2EFE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFE74u;
    // 0x2efe78: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A820u, 0x2EFE74u, 0x2EFE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFE7Cu;
label_2efe7c:
    // 0x2efe7c: 0x16020102  bne         $s0, $v0, . + 4 + (0x102 << 2)
    ctx->pc = 0x2EFE7Cu;
    {
        const bool branch_taken_0x2efe7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2efe7c) {
            ctx->pc = 0x2F0288u;
            goto label_2f0288;
        }
    }
    ctx->pc = 0x2EFE84u;
    // 0x2efe84: 0x0  nop
    ctx->pc = 0x2efe84u;
    // NOP
label_2efe88:
    // 0x2efe88: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2efe88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2efe8c: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x2efe8cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2efe90: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x2efe90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2efe94: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x2efe94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x2efe98: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2efe98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2efe9c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2efe9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2efea0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2efea0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2efea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2efea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2efea8: 0x0  nop
    ctx->pc = 0x2efea8u;
    // NOP
    // 0x2efeac: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2efeacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2efeb0: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2efeb0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2efeb4: 0x0  nop
    ctx->pc = 0x2efeb4u;
    // NOP
    // 0x2efeb8: 0x0  nop
    ctx->pc = 0x2efeb8u;
    // NOP
    // 0x2efebc: 0xc096784  jal         func_259E10
    ctx->pc = 0x2EFEBCu;
    SET_GPR_U32(ctx, 31, 0x2EFEC4u);
    ctx->pc = 0x2EFEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFEBCu;
    // 0x2efec0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x2EFEBCu, 0x2EFEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFEC4u;
label_2efec4:
    // 0x2efec4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2efec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2efec8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2efec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2efecc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2efeccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2efed0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2EFED0u;
    SET_GPR_U32(ctx, 31, 0x2EFED8u);
    ctx->pc = 0x2EFED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFED0u;
    // 0x2efed4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2EFED0u, 0x2EFED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFED8u;
label_2efed8:
    // 0x2efed8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2efed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2efedc: 0x26860020  addiu       $a2, $s4, 0x20
    ctx->pc = 0x2efedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x2efee0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2EFEE0u;
    SET_GPR_U32(ctx, 31, 0x2EFEE8u);
    ctx->pc = 0x2EFEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFEE0u;
    // 0x2efee4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2EFEE0u, 0x2EFEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFEE8u;
label_2efee8:
    // 0x2efee8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2efee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efeec: 0x27908060  addiu       $s0, $gp, -0x7FA0
    ctx->pc = 0x2efeecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
label_2efef0:
    // 0x2efef0: 0x12b10013  beq         $s5, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EFEF0u;
    {
        const bool branch_taken_0x2efef0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 17));
        if (branch_taken_0x2efef0) {
            ctx->pc = 0x2EFF40u;
            goto label_2eff40;
        }
    }
    ctx->pc = 0x2EFEF8u;
    // 0x2efef8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2efef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2efefc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EFEFCu;
    {
        const bool branch_taken_0x2efefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2efefc) {
            ctx->pc = 0x2EFF40u;
            goto label_2eff40;
        }
    }
    ctx->pc = 0x2EFF04u;
    // 0x2eff04: 0x90460002  lbu         $a2, 0x2($v0)
    ctx->pc = 0x2eff04u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2eff08: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2eff08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2eff0c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2eff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2eff10: 0x2463f380  addiu       $v1, $v1, -0xC80
    ctx->pc = 0x2eff10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964096));
    // 0x2eff14: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2eff14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2eff18: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2eff18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2eff1c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x2eff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2eff20: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2eff20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2eff24: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2eff24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2eff28: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2eff28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2eff2c: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x2eff2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2eff30: 0xc0bbcb0  jal         func_2EF2C0
    ctx->pc = 0x2EFF30u;
    SET_GPR_U32(ctx, 31, 0x2EFF38u);
    ctx->pc = 0x2EFF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFF30u;
    // 0x2eff34: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF2C0u, 0x2EFF30u, 0x2EFF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFF38u;
label_2eff38:
    // 0x2eff38: 0x144000d3  bnez        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x2EFF38u;
    {
        const bool branch_taken_0x2eff38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eff38) {
            ctx->pc = 0x2F0288u;
            goto label_2f0288;
        }
    }
    ctx->pc = 0x2EFF40u;
label_2eff40:
    // 0x2eff40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2eff40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2eff44: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x2eff44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2eff48: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2EFF48u;
    {
        const bool branch_taken_0x2eff48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EFF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFF48u;
        // 0x2eff4c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eff48) {
            ctx->pc = 0x2EFEF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2efef0;
        }
    }
    ctx->pc = 0x2EFF50u;
    // 0x2eff50: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2eff50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2eff54: 0xa65300c2  sh          $s3, 0xC2($s2)
    ctx->pc = 0x2eff54u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 194), (uint16_t)GPR_U32(ctx, 19));
    // 0x2eff58: 0xc096784  jal         func_259E10
    ctx->pc = 0x2EFF58u;
    SET_GPR_U32(ctx, 31, 0x2EFF60u);
    ctx->pc = 0x2EFF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EFF58u;
    // 0x2eff5c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x2EFF58u, 0x2EFF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EFF60u;
label_2eff60:
    // 0x2eff60: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x2eff60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x2eff64: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2eff64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2eff68: 0xc421c620  lwc1        $f1, -0x39E0($at)
    ctx->pc = 0x2eff68u;
    { uint32_t bits = FAST_READ32(0x67C620u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eff6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eff6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eff70: 0x0  nop
    ctx->pc = 0x2eff70u;
    // NOP
    // 0x2eff74: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2eff74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eff78: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EFF78u;
    {
        const bool branch_taken_0x2eff78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2eff78) {
            ctx->pc = 0x2EFF90u;
            goto label_2eff90;
        }
    }
    ctx->pc = 0x2EFF80u;
    // 0x2eff80: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eff80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2eff84: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2eff84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2eff88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EFF88u;
    {
        const bool branch_taken_0x2eff88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eff88) {
            ctx->pc = 0x2EFFA8u;
            goto label_2effa8;
        }
    }
    ctx->pc = 0x2EFF90u;
label_2eff90:
    // 0x2eff90: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2eff90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2eff94: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2eff94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2eff98: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eff98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2eff9c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2eff9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2effa0: 0x0  nop
    ctx->pc = 0x2effa0u;
    // NOP
    // 0x2effa4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2effa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_2effa8:
    // 0x2effa8: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EFFA8u;
    {
        const bool branch_taken_0x2effa8 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2EFFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFFA8u;
        // 0x2effac: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2effa8) {
            ctx->pc = 0x2EFFBCu;
            goto label_2effbc;
        }
    }
    ctx->pc = 0x2EFFB0u;
    // 0x2effb0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2effb0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2effb4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EFFB4u;
    {
        const bool branch_taken_0x2effb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EFFB4u;
        // 0x2effb8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2effb4) {
            ctx->pc = 0x2EFFD4u;
            goto label_2effd4;
        }
    }
    ctx->pc = 0x2EFFBCu;
label_2effbc:
    // 0x2effbc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2effbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2effc0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2effc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2effc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2effc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2effc8: 0x0  nop
    ctx->pc = 0x2effc8u;
    // NOP
    // 0x2effcc: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2effccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2effd0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2effd0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2effd4:
    // 0x2effd4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2effd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2effd8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2effd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2effdc: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2effdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2effe0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2effe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2effe4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2effe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2effe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2effe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2effec: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2effecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2efff0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2efff0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2efff4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2efff4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2efff8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2EFFF8u;
    {
        const bool branch_taken_0x2efff8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2efff8) {
            ctx->pc = 0x2F0010u;
            goto label_2f0010;
        }
    }
    ctx->pc = 0x2F0000u;
    // 0x2f0000: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f0000u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f0004: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2f0004u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2f0008: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F0008u;
    {
        const bool branch_taken_0x2f0008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0008) {
            ctx->pc = 0x2F0028u;
            goto label_2f0028;
        }
    }
    ctx->pc = 0x2F0010u;
label_2f0010:
    // 0x2f0010: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2f0010u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2f0014: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2f0014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2f0018: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f0018u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f001c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2f001cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2f0020: 0x0  nop
    ctx->pc = 0x2f0020u;
    // NOP
    // 0x2f0024: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2f0024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_2f0028:
    // 0x2f0028: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F0028u;
    {
        const bool branch_taken_0x2f0028 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2F002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0028u;
        // 0x2f002c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0028) {
            ctx->pc = 0x2F003Cu;
            goto label_2f003c;
        }
    }
    ctx->pc = 0x2F0030u;
    // 0x2f0030: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f0030u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0034: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F0034u;
    {
        const bool branch_taken_0x2f0034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0034u;
        // 0x2f0038: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0034) {
            ctx->pc = 0x2F0054u;
            goto label_2f0054;
        }
    }
    ctx->pc = 0x2F003Cu;
label_2f003c:
    // 0x2f003c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2f003cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2f0040: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f0040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f0044: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f0044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0048: 0x0  nop
    ctx->pc = 0x2f0048u;
    // NOP
    // 0x2f004c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2f004cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f0050: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2f0050u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2f0054:
    // 0x2f0054: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f0054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f0058: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x2f0058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x2f005c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f005cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0060: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2f0060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f0064: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x2f0064u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2f0068: 0x0  nop
    ctx->pc = 0x2f0068u;
    // NOP
    // 0x2f006c: 0x0  nop
    ctx->pc = 0x2f006cu;
    // NOP
    // 0x2f0070: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2F0070u;
    SET_GPR_U32(ctx, 31, 0x2F0078u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2F0070u, 0x2F0078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0078u;
label_2f0078:
    // 0x2f0078: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x2f0078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x2f007c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2f007cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2f0080: 0xc421c620  lwc1        $f1, -0x39E0($at)
    ctx->pc = 0x2f0080u;
    { uint32_t bits = FAST_READ32(0x67C620u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f0084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0088: 0x0  nop
    ctx->pc = 0x2f0088u;
    // NOP
    // 0x2f008c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2f008cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f0090: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2F0090u;
    {
        const bool branch_taken_0x2f0090 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0090) {
            ctx->pc = 0x2F00A8u;
            goto label_2f00a8;
        }
    }
    ctx->pc = 0x2F0098u;
    // 0x2f0098: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f0098u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f009c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2f009cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2f00a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F00A0u;
    {
        const bool branch_taken_0x2f00a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f00a0) {
            ctx->pc = 0x2F00C0u;
            goto label_2f00c0;
        }
    }
    ctx->pc = 0x2F00A8u;
label_2f00a8:
    // 0x2f00a8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2f00a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2f00ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2f00acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2f00b0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f00b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f00b4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2f00b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2f00b8: 0x0  nop
    ctx->pc = 0x2f00b8u;
    // NOP
    // 0x2f00bc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2f00bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_2f00c0:
    // 0x2f00c0: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F00C0u;
    {
        const bool branch_taken_0x2f00c0 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2F00C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F00C0u;
        // 0x2f00c4: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f00c0) {
            ctx->pc = 0x2F00D4u;
            goto label_2f00d4;
        }
    }
    ctx->pc = 0x2F00C8u;
    // 0x2f00c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f00c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f00cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F00CCu;
    {
        const bool branch_taken_0x2f00cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F00D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F00CCu;
        // 0x2f00d0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f00cc) {
            ctx->pc = 0x2F00ECu;
            goto label_2f00ec;
        }
    }
    ctx->pc = 0x2F00D4u;
label_2f00d4:
    // 0x2f00d4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2f00d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2f00d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f00d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f00dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f00dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f00e0: 0x0  nop
    ctx->pc = 0x2f00e0u;
    // NOP
    // 0x2f00e4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2f00e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2f00e8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2f00e8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2f00ec:
    // 0x2f00ec: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2f00ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f00f0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2f00f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2f00f4: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2f00f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2f00f8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2f00f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2f00fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f00fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f0100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0104: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2f0104u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2f0108: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2f0108u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2f010c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2f010cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f0110: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2F0110u;
    {
        const bool branch_taken_0x2f0110 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f0110) {
            ctx->pc = 0x2F0128u;
            goto label_2f0128;
        }
    }
    ctx->pc = 0x2F0118u;
    // 0x2f0118: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f0118u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f011c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2f011cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2f0120: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F0120u;
    {
        const bool branch_taken_0x2f0120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0120u;
        // 0x2f0124: 0xa6830828  sh          $v1, 0x828($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0120) {
            ctx->pc = 0x2F0144u;
            goto label_2f0144;
        }
    }
    ctx->pc = 0x2F0128u;
label_2f0128:
    // 0x2f0128: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2f0128u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2f012c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2f012cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2f0130: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2f0130u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2f0134: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2f0134u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2f0138: 0x0  nop
    ctx->pc = 0x2f0138u;
    // NOP
    // 0x2f013c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f013cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f0140: 0xa6830828  sh          $v1, 0x828($s4)
    ctx->pc = 0x2f0140u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2088), (uint16_t)GPR_U32(ctx, 3));
label_2f0144:
    // 0x2f0144: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x2f0144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x2f0148: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x2f0148u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x2f014c: 0x24020382  addiu       $v0, $zero, 0x382
    ctx->pc = 0x2f014cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 898));
    // 0x2f0150: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F0150u;
    {
        const bool branch_taken_0x2f0150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F0154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0150u;
        // 0x2f0154: 0x24020383  addiu       $v0, $zero, 0x383 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 899));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0150) {
            ctx->pc = 0x2F01B8u;
            goto label_2f01b8;
        }
    }
    ctx->pc = 0x2F0158u;
    // 0x2f0158: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2F0158u;
    {
        const bool branch_taken_0x2f0158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f0158) {
            ctx->pc = 0x2F01B8u;
            goto label_2f01b8;
        }
    }
    ctx->pc = 0x2F0160u;
    // 0x2f0160: 0x24020392  addiu       $v0, $zero, 0x392
    ctx->pc = 0x2f0160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 914));
    // 0x2f0164: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F0164u;
    {
        const bool branch_taken_0x2f0164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F0168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0164u;
        // 0x2f0168: 0x24020393  addiu       $v0, $zero, 0x393 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 915));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0164) {
            ctx->pc = 0x2F01B8u;
            goto label_2f01b8;
        }
    }
    ctx->pc = 0x2F016Cu;
    // 0x2f016c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F016Cu;
    {
        const bool branch_taken_0x2f016c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f016c) {
            ctx->pc = 0x2F01B8u;
            goto label_2f01b8;
        }
    }
    ctx->pc = 0x2F0174u;
    // 0x2f0174: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f0174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f0178: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2f0178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f017c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f017cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f0180: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2F0180u;
    SET_GPR_U32(ctx, 31, 0x2F0188u);
    ctx->pc = 0x2F0184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0180u;
    // 0x2f0184: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2F0180u, 0x2F0188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0188u;
label_2f0188:
    // 0x2f0188: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2f0188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f018c: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x2f018cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x2f0190: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2F0190u;
    SET_GPR_U32(ctx, 31, 0x2F0198u);
    ctx->pc = 0x2F0194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0190u;
    // 0x2f0194: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2F0190u, 0x2F0198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0198u;
label_2f0198:
    // 0x2f0198: 0xc096a08  jal         func_25A820
    ctx->pc = 0x2F0198u;
    SET_GPR_U32(ctx, 31, 0x2F01A0u);
    ctx->pc = 0x2F019Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0198u;
    // 0x2f019c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A820u, 0x2F0198u, 0x2F01A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F01A0u;
label_2f01a0:
    // 0x2f01a0: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x2f01a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2f01a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f01a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f01a8: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x2f01a8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    // 0x2f01ac: 0xc0bbce8  jal         func_2EF3A0
    ctx->pc = 0x2F01ACu;
    SET_GPR_U32(ctx, 31, 0x2F01B4u);
    ctx->pc = 0x2F01B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F01ACu;
    // 0x2f01b0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF3A0u, 0x2F01ACu, 0x2F01B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F01B4u;
label_2f01b4:
    // 0x2f01b4: 0x0  nop
    ctx->pc = 0x2f01b4u;
    // NOP
label_2f01b8:
    // 0x2f01b8: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x2f01b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2f01bc: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x2f01bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2f01c0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F01C0u;
    {
        const bool branch_taken_0x2f01c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f01c0) {
            ctx->pc = 0x2F01F0u;
            goto label_2f01f0;
        }
    }
    ctx->pc = 0x2F01C8u;
    // 0x2f01c8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f01c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2f01cc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f01ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f01d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f01d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f01d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f01d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f01d8: 0xc0d78a4  jal         func_35E290
    ctx->pc = 0x2F01D8u;
    SET_GPR_U32(ctx, 31, 0x2F01E0u);
    ctx->pc = 0x2F01DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F01D8u;
    // 0x2f01dc: 0xae822b20  sw          $v0, 0x2B20($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 11040), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E290u, 0x2F01D8u, 0x2F01E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F01E0u;
label_2f01e0:
    // 0x2f01e0: 0x240200e2  addiu       $v0, $zero, 0xE2
    ctx->pc = 0x2f01e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
    // 0x2f01e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F01E4u;
    {
        const bool branch_taken_0x2f01e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F01E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F01E4u;
        // 0x2f01e8: 0xa2820780  sb          $v0, 0x780($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1920), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f01e4) {
            ctx->pc = 0x2F0200u;
            goto label_2f0200;
        }
    }
    ctx->pc = 0x2F01ECu;
    // 0x2f01ec: 0x0  nop
    ctx->pc = 0x2f01ecu;
    // NOP
label_2f01f0:
    // 0x2f01f0: 0xa2802b26  sb          $zero, 0x2B26($s4)
    ctx->pc = 0x2f01f0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 11046), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f01f4: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x2f01f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2f01f8: 0xa2820780  sb          $v0, 0x780($s4)
    ctx->pc = 0x2f01f8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1920), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f01fc: 0x0  nop
    ctx->pc = 0x2f01fcu;
    // NOP
label_2f0200:
    // 0x2f0200: 0x7a830020  lq          $v1, 0x20($s4)
    ctx->pc = 0x2f0200u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x2f0204: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f0204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2f0208: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2f0208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f020c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f020cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0210: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f0210u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f0214: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x2f0214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x2f0218: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x2f0218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f021c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f021cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f0220: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x2f0220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x2f0224: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2f0224u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f0228: 0xc096784  jal         func_259E10
    ctx->pc = 0x2F0228u;
    SET_GPR_U32(ctx, 31, 0x2F0230u);
    ctx->pc = 0x2F022Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0228u;
    // 0x2f022c: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x2F0228u, 0x2F0230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0230u;
label_2f0230:
    // 0x2f0230: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x2f0230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x2f0234: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2f0234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f0238: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2f0238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2f023c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f023cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f0240: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2F0240u;
    SET_GPR_U32(ctx, 31, 0x2F0248u);
    ctx->pc = 0x2F0244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0240u;
    // 0x2f0244: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2F0240u, 0x2F0248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0248u;
label_2f0248:
    // 0x2f0248: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2f0248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2f024c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2f024cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f0250: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2F0250u;
    SET_GPR_U32(ctx, 31, 0x2F0258u);
    ctx->pc = 0x2F0254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0250u;
    // 0x2f0254: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2F0250u, 0x2F0258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0258u;
label_2f0258:
    // 0x2f0258: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2f0258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2f025c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f025cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0260: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2f0260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2f0264: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2f0264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2f0268: 0xc0ec964  jal         func_3B2590
    ctx->pc = 0x2F0268u;
    SET_GPR_U32(ctx, 31, 0x2F0270u);
    ctx->pc = 0x2F026Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0268u;
    // 0x2f026c: 0x34471100  ori         $a3, $v0, 0x1100 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4352);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2590u, 0x2F0268u, 0x2F0270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0270u;
label_2f0270:
    // 0x2f0270: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F0270u;
    {
        const bool branch_taken_0x2f0270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0270u;
        // 0x2f0274: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0270) {
            ctx->pc = 0x2F0280u;
            goto label_2f0280;
        }
    }
    ctx->pc = 0x2F0278u;
    // 0x2f0278: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F0278u;
    {
        const bool branch_taken_0x2f0278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0278u;
        // 0x2f027c: 0xa2832b25  sb          $v1, 0x2B25($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 11045), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0278) {
            ctx->pc = 0x2F0288u;
            goto label_2f0288;
        }
    }
    ctx->pc = 0x2F0280u;
label_2f0280:
    // 0x2f0280: 0xa2802b25  sb          $zero, 0x2B25($s4)
    ctx->pc = 0x2f0280u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 11045), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f0284: 0x0  nop
    ctx->pc = 0x2f0284u;
    // NOP
label_2f0288:
    // 0x2f0288: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2f0288u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2f028c: 0x2aa30002  slti        $v1, $s5, 0x2
    ctx->pc = 0x2f028cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f0290: 0x1460fe9f  bnez        $v1, . + 4 + (-0x161 << 2)
    ctx->pc = 0x2F0290u;
    {
        const bool branch_taken_0x2f0290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0290u;
        // 0x2f0294: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0290) {
            ctx->pc = 0x2EFD10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2efd10;
        }
    }
    ctx->pc = 0x2F0298u;
    // 0x2f0298: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2F0298u;
    {
        const bool branch_taken_0x2f0298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0298) {
            ctx->pc = 0x2F0328u;
            goto label_2f0328;
        }
    }
    ctx->pc = 0x2F02A0u;
label_2f02a0:
    // 0x2f02a0: 0x8e852b20  lw          $a1, 0x2B20($s4)
    ctx->pc = 0x2f02a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11040)));
    // 0x2f02a4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2f02a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2f02a8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2F02A8u;
    SET_GPR_U32(ctx, 31, 0x2F02B0u);
    ctx->pc = 0x2F02ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F02A8u;
    // 0x2f02ac: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2F02A8u, 0x2F02B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F02B0u;
label_2f02b0:
    // 0x2f02b0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F02B0u;
    {
        const bool branch_taken_0x2f02b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f02b0) {
            ctx->pc = 0x2F0300u;
            goto label_2f0300;
        }
    }
    ctx->pc = 0x2F02B8u;
    // 0x2f02b8: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x2f02b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2f02bc: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x2f02bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2f02c0: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2F02C0u;
    {
        const bool branch_taken_0x2f02c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f02c0) {
            ctx->pc = 0x2F0300u;
            goto label_2f0300;
        }
    }
    ctx->pc = 0x2F02C8u;
    // 0x2f02c8: 0x9043065c  lbu         $v1, 0x65C($v0)
    ctx->pc = 0x2f02c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1628)));
    // 0x2f02cc: 0x386300e0  xori        $v1, $v1, 0xE0
    ctx->pc = 0x2f02ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)224);
    // 0x2f02d0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2f02d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2f02d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F02D4u;
    {
        const bool branch_taken_0x2f02d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f02d4) {
            ctx->pc = 0x2F02E8u;
            goto label_2f02e8;
        }
    }
    ctx->pc = 0x2F02DCu;
    // 0x2f02dc: 0x90430821  lbu         $v1, 0x821($v0)
    ctx->pc = 0x2f02dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2081)));
    // 0x2f02e0: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x2f02e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f02e4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2f02e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2f02e8:
    // 0x2f02e8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2F02E8u;
    {
        const bool branch_taken_0x2f02e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f02e8) {
            ctx->pc = 0x2F0328u;
            goto label_2f0328;
        }
    }
    ctx->pc = 0x2F02F0u;
    // 0x2f02f0: 0xa2802b26  sb          $zero, 0x2B26($s4)
    ctx->pc = 0x2f02f0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 11046), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f02f4: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x2f02f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2f02f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F02F8u;
    {
        const bool branch_taken_0x2f02f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F02FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F02F8u;
        // 0x2f02fc: 0xa2830780  sb          $v1, 0x780($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f02f8) {
            ctx->pc = 0x2F0328u;
            goto label_2f0328;
        }
    }
    ctx->pc = 0x2F0300u;
label_2f0300:
    // 0x2f0300: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f0300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0304: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F0304u;
    {
        const bool branch_taken_0x2f0304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0304u;
        // 0x2f0308: 0xa2830780  sb          $v1, 0x780($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0304) {
            ctx->pc = 0x2F0328u;
            goto label_2f0328;
        }
    }
    ctx->pc = 0x2F030Cu;
    // 0x2f030c: 0x0  nop
    ctx->pc = 0x2f030cu;
    // NOP
label_2f0310:
    // 0x2f0310: 0xc0bc0d8  jal         func_2F0360
    ctx->pc = 0x2F0310u;
    SET_GPR_U32(ctx, 31, 0x2F0318u);
    ctx->pc = 0x2F0314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0310u;
    // 0x2f0314: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0360u, 0x2F0310u, 0x2F0318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0318u;
label_2f0318:
    // 0x2f0318: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F0318u;
    {
        const bool branch_taken_0x2f0318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0318) {
            ctx->pc = 0x2F0328u;
            goto label_2f0328;
        }
    }
    ctx->pc = 0x2F0320u;
label_2f0320:
    // 0x2f0320: 0xc0bc1bc  jal         func_2F06F0
    ctx->pc = 0x2F0320u;
    SET_GPR_U32(ctx, 31, 0x2F0328u);
    ctx->pc = 0x2F0324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0320u;
    // 0x2f0324: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F06F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F06F0u, 0x2F0320u, 0x2F0328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0328u;
label_2f0328:
    // 0x2f0328: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2f0328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f032c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2f032cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f0330: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2f0330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f0334: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2f0334u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f0338: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2f0338u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f033c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2f033cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f0340: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f0340u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f0344: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f0344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f0348: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f0348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f034c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f034cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0350: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0350u;
        // 0x2f0354: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0358u;
}
