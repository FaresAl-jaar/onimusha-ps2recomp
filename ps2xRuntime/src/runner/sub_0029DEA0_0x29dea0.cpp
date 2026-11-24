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

// Function: sub_0029DEA0
// Address: 0x29dea0 - 0x29e2e8
void sub_0029DEA0_0x29dea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DEA0_0x29dea0");
#endif

    switch (ctx->pc) {
        case 0x29df08u: goto label_29df08;
        case 0x29df98u: goto label_29df98;
        case 0x29dfb8u: goto label_29dfb8;
        case 0x29dfd4u: goto label_29dfd4;
        case 0x29e06cu: goto label_29e06c;
        case 0x29e0a0u: goto label_29e0a0;
        case 0x29e0e0u: goto label_29e0e0;
        case 0x29e100u: goto label_29e100;
        case 0x29e11cu: goto label_29e11c;
        case 0x29e1acu: goto label_29e1ac;
        case 0x29e1d8u: goto label_29e1d8;
        case 0x29e2b4u: goto label_29e2b4;
        default: break;
    }

    ctx->pc = 0x29dea0u;

    // 0x29dea0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x29dea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x29dea4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x29dea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x29dea8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x29dea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x29deac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x29deacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x29deb0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x29deb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x29deb4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x29deb4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29deb8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29deb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29debc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x29debcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dec0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29dec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29dec4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29dec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29dec8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29dec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29decc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29deccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29ded0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29ded0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29ded4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29ded4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29ded8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29ded8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29dedc: 0x146000f6  bnez        $v1, . + 4 + (0xF6 << 2)
    ctx->pc = 0x29DEDCu;
    {
        const bool branch_taken_0x29dedc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DEDCu;
        // 0x29dee0: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dedc) {
            ctx->pc = 0x29E2B8u;
            goto label_29e2b8;
        }
    }
    ctx->pc = 0x29DEE4u;
    // 0x29dee4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29dee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x29dee8: 0x96c30068  lhu         $v1, 0x68($s6)
    ctx->pc = 0x29dee8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 104)));
    // 0x29deec: 0x903ecea4  lbu         $fp, -0x315C($at)
    ctx->pc = 0x29deecu;
    SET_GPR_ZE32(ctx, 30, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x29def0: 0x8ed4007c  lw          $s4, 0x7C($s6)
    ctx->pc = 0x29def0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 124)));
    // 0x29def4: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x29def4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x29def8: 0x10200063  beqz        $at, . + 4 + (0x63 << 2)
    ctx->pc = 0x29DEF8u;
    {
        const bool branch_taken_0x29def8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DEF8u;
        // 0x29defc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29def8) {
            ctx->pc = 0x29E088u;
            goto label_29e088;
        }
    }
    ctx->pc = 0x29DF00u;
    // 0x29df00: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x29df00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x29df04: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x29df04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_29df08:
    // 0x29df08: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x29df08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x29df0c: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x29DF0Cu;
    {
        const bool branch_taken_0x29df0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29df0c) {
            ctx->pc = 0x29E070u;
            goto label_29e070;
        }
    }
    ctx->pc = 0x29DF14u;
    // 0x29df14: 0x12e00010  beqz        $s7, . + 4 + (0x10 << 2)
    ctx->pc = 0x29DF14u;
    {
        const bool branch_taken_0x29df14 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x29df14) {
            ctx->pc = 0x29DF58u;
            goto label_29df58;
        }
    }
    ctx->pc = 0x29DF1Cu;
    // 0x29df1c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x29df1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29df20: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x29df20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x29df24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29df24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29df28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29DF28u;
    {
        const bool branch_taken_0x29df28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29df28) {
            ctx->pc = 0x29DF40u;
            goto label_29df40;
        }
    }
    ctx->pc = 0x29DF30u;
    // 0x29df30: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x29df30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x29df34: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x29DF34u;
    {
        const bool branch_taken_0x29df34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29df34) {
            ctx->pc = 0x29E070u;
            goto label_29e070;
        }
    }
    ctx->pc = 0x29DF3Cu;
    // 0x29df3c: 0x0  nop
    ctx->pc = 0x29df3cu;
    // NOP
label_29df40:
    // 0x29df40: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x29df40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x29df44: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x29DF44u;
    {
        const bool branch_taken_0x29df44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29df44) {
            ctx->pc = 0x29DF78u;
            goto label_29df78;
        }
    }
    ctx->pc = 0x29DF4Cu;
    // 0x29df4c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x29DF4Cu;
    {
        const bool branch_taken_0x29df4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29df4c) {
            ctx->pc = 0x29E070u;
            goto label_29e070;
        }
    }
    ctx->pc = 0x29DF54u;
    // 0x29df54: 0x0  nop
    ctx->pc = 0x29df54u;
    // NOP
label_29df58:
    // 0x29df58: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x29df58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x29df5c: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x29DF5Cu;
    {
        const bool branch_taken_0x29df5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29df5c) {
            ctx->pc = 0x29E070u;
            goto label_29e070;
        }
    }
    ctx->pc = 0x29DF64u;
    // 0x29df64: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x29df64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x29df68: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x29df68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x29df6c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29df6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29df70: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x29DF70u;
    {
        const bool branch_taken_0x29df70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29df70) {
            ctx->pc = 0x29E070u;
            goto label_29e070;
        }
    }
    ctx->pc = 0x29DF78u;
label_29df78:
    // 0x29df78: 0x92920002  lbu         $s2, 0x2($s4)
    ctx->pc = 0x29df78u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x29df7c: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x29DF7Cu;
    {
        const bool branch_taken_0x29df7c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x29df7c) {
            ctx->pc = 0x29DF88u;
            goto label_29df88;
        }
    }
    ctx->pc = 0x29DF84u;
    // 0x29df84: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x29df84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29df88:
    // 0x29df88: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x29df88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x29df8c: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x29df8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x29df90: 0xc05e360  jal         func_178D80
    ctx->pc = 0x29DF90u;
    SET_GPR_U32(ctx, 31, 0x29DF98u);
    ctx->pc = 0x29DF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DF90u;
    // 0x29df94: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x29DF90u, 0x29DF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DF98u;
label_29df98:
    // 0x29df98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29df98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29df9c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29df9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dfa0: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x29dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x29dfa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29dfa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dfa8: 0x344617fd  ori         $a2, $v0, 0x17FD
    ctx->pc = 0x29dfa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    // 0x29dfac: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x29dfacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x29dfb0: 0xc0a7a78  jal         func_29E9E0
    ctx->pc = 0x29DFB0u;
    SET_GPR_U32(ctx, 31, 0x29DFB8u);
    ctx->pc = 0x29DFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DFB0u;
    // 0x29dfb4: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E9E0u, 0x29DFB0u, 0x29DFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DFB8u;
label_29dfb8:
    // 0x29dfb8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x29dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x29dfbc: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x29dfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x29dfc0: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x29dfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x29dfc4: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x29dfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x29dfc8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x29dfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x29dfcc: 0xc05e360  jal         func_178D80
    ctx->pc = 0x29DFCCu;
    SET_GPR_U32(ctx, 31, 0x29DFD4u);
    ctx->pc = 0x29DFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DFCCu;
    // 0x29dfd0: 0xfe220010  sd          $v0, 0x10($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x29DFCCu, 0x29DFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DFD4u;
label_29dfd4:
    // 0x29dfd4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x29DFD4u;
    {
        const bool branch_taken_0x29dfd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DFD4u;
        // 0x29dfd8: 0x11213c  dsll32      $a0, $s1, 4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dfd4) {
            ctx->pc = 0x29E070u;
            goto label_29e070;
        }
    }
    ctx->pc = 0x29DFDCu;
    // 0x29dfdc: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x29dfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x29dfe0: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x29dfe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x29dfe4: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x29dfe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x29dfe8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x29dfe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x29dfec: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x29dfecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29dff0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x29dff0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x29dff4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x29dff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x29dff8: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x29dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x29dffc: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x29dffcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x29e000: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x29e000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x29e004: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x29E004u;
    {
        const bool branch_taken_0x29e004 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E004u;
        // 0x29e008: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e004) {
            ctx->pc = 0x29E010u;
            goto label_29e010;
        }
    }
    ctx->pc = 0x29E00Cu;
    // 0x29e00c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x29e00cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29e010:
    // 0x29e010: 0x8ec40118  lw          $a0, 0x118($s6)
    ctx->pc = 0x29e010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 280)));
    // 0x29e014: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x29e014u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x29e018: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x29e018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x29e01c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x29e01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x29e020: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x29e020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29e024: 0xdc840000  ld          $a0, 0x0($a0)
    ctx->pc = 0x29e024u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29e028: 0xfc440010  sd          $a0, 0x10($v0)
    ctx->pc = 0x29e028u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x29e02c: 0x16430004  bne         $s2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29E02Cu;
    {
        const bool branch_taken_0x29e02c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x29E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E02Cu;
        // 0x29e030: 0xfc400018  sd          $zero, 0x18($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e02c) {
            ctx->pc = 0x29E040u;
            goto label_29e040;
        }
    }
    ctx->pc = 0x29E034u;
    // 0x29e034: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29e034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x29e038: 0xdc2379e0  ld          $v1, 0x79E0($at)
    ctx->pc = 0x29e038u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x3F79E0u));
    // 0x29e03c: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x29e03cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
label_29e040:
    // 0x29e040: 0x8e070088  lw          $a3, 0x88($s0)
    ctx->pc = 0x29e040u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x29e044: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x29e044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x29e048: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29e048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e04c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29e04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e050: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x29e050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x29e054: 0xdce70000  ld          $a3, 0x0($a3)
    ctx->pc = 0x29e054u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29e058: 0xfc470020  sd          $a3, 0x20($v0)
    ctx->pc = 0x29e058u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 7));
    // 0x29e05c: 0xfc400028  sd          $zero, 0x28($v0)
    ctx->pc = 0x29e05cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 0));
    // 0x29e060: 0xfc430030  sd          $v1, 0x30($v0)
    ctx->pc = 0x29e060u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 3));
    // 0x29e064: 0xc05e480  jal         func_179200
    ctx->pc = 0x29E064u;
    SET_GPR_U32(ctx, 31, 0x29E06Cu);
    ctx->pc = 0x29E068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E064u;
    // 0x29e068: 0xfc400038  sd          $zero, 0x38($v0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179200u, 0x29E064u, 0x29E06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E06Cu;
label_29e06c:
    // 0x29e06c: 0x0  nop
    ctx->pc = 0x29e06cu;
    // NOP
label_29e070:
    // 0x29e070: 0x96c30068  lhu         $v1, 0x68($s6)
    ctx->pc = 0x29e070u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 104)));
    // 0x29e074: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29e074u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29e078: 0x261001f0  addiu       $s0, $s0, 0x1F0
    ctx->pc = 0x29e078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
    // 0x29e07c: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x29e07cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x29e080: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x29E080u;
    {
        const bool branch_taken_0x29e080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E080u;
        // 0x29e084: 0x269401f0  addiu       $s4, $s4, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e080) {
            ctx->pc = 0x29DF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29df08;
        }
    }
    ctx->pc = 0x29E088u;
label_29e088:
    // 0x29e088: 0x8ed1007c  lw          $s1, 0x7C($s6)
    ctx->pc = 0x29e088u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 124)));
    // 0x29e08c: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x29e08cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x29e090: 0x1020004d  beqz        $at, . + 4 + (0x4D << 2)
    ctx->pc = 0x29E090u;
    {
        const bool branch_taken_0x29e090 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E090u;
        // 0x29e094: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e090) {
            ctx->pc = 0x29E1C8u;
            goto label_29e1c8;
        }
    }
    ctx->pc = 0x29E098u;
    // 0x29e098: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x29e098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x29e09c: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x29e09cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_29e0a0:
    // 0x29e0a0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x29e0a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29e0a4: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x29E0A4u;
    {
        const bool branch_taken_0x29e0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e0a4) {
            ctx->pc = 0x29E1B0u;
            goto label_29e1b0;
        }
    }
    ctx->pc = 0x29E0ACu;
    // 0x29e0ac: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x29e0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x29e0b0: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x29E0B0u;
    {
        const bool branch_taken_0x29e0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e0b0) {
            ctx->pc = 0x29E1B0u;
            goto label_29e1b0;
        }
    }
    ctx->pc = 0x29E0B8u;
    // 0x29e0b8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x29e0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29e0bc: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x29e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x29e0c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29e0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29e0c4: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x29E0C4u;
    {
        const bool branch_taken_0x29e0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e0c4) {
            ctx->pc = 0x29E1B0u;
            goto label_29e1b0;
        }
    }
    ctx->pc = 0x29E0CCu;
    // 0x29e0cc: 0x92340002  lbu         $s4, 0x2($s1)
    ctx->pc = 0x29e0ccu;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x29e0d0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x29e0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x29e0d4: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x29e0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x29e0d8: 0xc05e360  jal         func_178D80
    ctx->pc = 0x29E0D8u;
    SET_GPR_U32(ctx, 31, 0x29E0E0u);
    ctx->pc = 0x29E0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E0D8u;
    // 0x29e0dc: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x29E0D8u, 0x29E0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E0E0u;
label_29e0e0:
    // 0x29e0e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x29e0e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e0e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29e0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e0e8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x29e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x29e0ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29e0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e0f0: 0x344617fd  ori         $a2, $v0, 0x17FD
    ctx->pc = 0x29e0f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    // 0x29e0f4: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x29e0f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x29e0f8: 0xc0a7a78  jal         func_29E9E0
    ctx->pc = 0x29E0F8u;
    SET_GPR_U32(ctx, 31, 0x29E100u);
    ctx->pc = 0x29E0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E0F8u;
    // 0x29e0fc: 0x2408003c  addiu       $t0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E9E0u, 0x29E0F8u, 0x29E100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E100u;
label_29e100:
    // 0x29e100: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x29e100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x29e104: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x29e104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x29e108: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x29e108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x29e10c: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x29e10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x29e110: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x29e110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x29e114: 0xc05e360  jal         func_178D80
    ctx->pc = 0x29E114u;
    SET_GPR_U32(ctx, 31, 0x29E11Cu);
    ctx->pc = 0x29E118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E114u;
    // 0x29e118: 0xfe620010  sd          $v0, 0x10($s3) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x29E114u, 0x29E11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E11Cu;
label_29e11c:
    // 0x29e11c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x29E11Cu;
    {
        const bool branch_taken_0x29e11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E11Cu;
        // 0x29e120: 0x13213c  dsll32      $a0, $s3, 4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e11c) {
            ctx->pc = 0x29E1B0u;
            goto label_29e1b0;
        }
    }
    ctx->pc = 0x29E124u;
    // 0x29e124: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x29e124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x29e128: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x29e128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x29e12c: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x29e12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x29e130: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x29e130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x29e134: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x29e134u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x29e138: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x29e138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29e13c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x29e13cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x29e140: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x29e140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x29e144: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x29e144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x29e148: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x29e148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x29e14c: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x29e14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x29e150: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x29e150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x29e154: 0x8ec40118  lw          $a0, 0x118($s6)
    ctx->pc = 0x29e154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 280)));
    // 0x29e158: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x29e158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x29e15c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x29e15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x29e160: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x29e160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29e164: 0xdc840000  ld          $a0, 0x0($a0)
    ctx->pc = 0x29e164u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29e168: 0xfc440010  sd          $a0, 0x10($v0)
    ctx->pc = 0x29e168u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x29e16c: 0x16830004  bne         $s4, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29E16Cu;
    {
        const bool branch_taken_0x29e16c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x29E170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E16Cu;
        // 0x29e170: 0xfc400018  sd          $zero, 0x18($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e16c) {
            ctx->pc = 0x29E180u;
            goto label_29e180;
        }
    }
    ctx->pc = 0x29E174u;
    // 0x29e174: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29e174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x29e178: 0xdc2379e0  ld          $v1, 0x79E0($at)
    ctx->pc = 0x29e178u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x3F79E0u));
    // 0x29e17c: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x29e17cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
label_29e180:
    // 0x29e180: 0x8e470088  lw          $a3, 0x88($s2)
    ctx->pc = 0x29e180u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x29e184: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x29e184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x29e188: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29e188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e18c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29e18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e190: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x29e190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x29e194: 0xdce70000  ld          $a3, 0x0($a3)
    ctx->pc = 0x29e194u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29e198: 0xfc470020  sd          $a3, 0x20($v0)
    ctx->pc = 0x29e198u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 7));
    // 0x29e19c: 0xfc400028  sd          $zero, 0x28($v0)
    ctx->pc = 0x29e19cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 0));
    // 0x29e1a0: 0xfc430030  sd          $v1, 0x30($v0)
    ctx->pc = 0x29e1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 3));
    // 0x29e1a4: 0xc05e480  jal         func_179200
    ctx->pc = 0x29E1A4u;
    SET_GPR_U32(ctx, 31, 0x29E1ACu);
    ctx->pc = 0x29E1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E1A4u;
    // 0x29e1a8: 0xfc400038  sd          $zero, 0x38($v0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179200u, 0x29E1A4u, 0x29E1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E1ACu;
label_29e1ac:
    // 0x29e1ac: 0x0  nop
    ctx->pc = 0x29e1acu;
    // NOP
label_29e1b0:
    // 0x29e1b0: 0x96c20068  lhu         $v0, 0x68($s6)
    ctx->pc = 0x29e1b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 104)));
    // 0x29e1b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29e1b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29e1b8: 0x265201f0  addiu       $s2, $s2, 0x1F0
    ctx->pc = 0x29e1b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
    // 0x29e1bc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x29e1bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x29e1c0: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x29E1C0u;
    {
        const bool branch_taken_0x29e1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E1C0u;
        // 0x29e1c4: 0x263101f0  addiu       $s1, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e1c0) {
            ctx->pc = 0x29E0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e0a0;
        }
    }
    ctx->pc = 0x29E1C8u;
label_29e1c8:
    // 0x29e1c8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x29e1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x29e1cc: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x29e1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x29e1d0: 0xc05e360  jal         func_178D80
    ctx->pc = 0x29E1D0u;
    SET_GPR_U32(ctx, 31, 0x29E1D8u);
    ctx->pc = 0x29E1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E1D0u;
    // 0x29e1d4: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x29E1D0u, 0x29E1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E1D8u;
label_29e1d8:
    // 0x29e1d8: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x29e1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x29e1dc: 0x3c0d3000  lui         $t5, 0x3000
    ctx->pc = 0x29e1dcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)12288 << 16));
    // 0x29e1e0: 0x767821  addu        $t7, $v1, $s6
    ctx->pc = 0x29e1e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x29e1e4: 0x3c055000  lui         $a1, 0x5000
    ctx->pc = 0x29e1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    // 0x29e1e8: 0x8de600f8  lw          $a2, 0xF8($t7)
    ctx->pc = 0x29e1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 248)));
    // 0x29e1ec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x29e1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x29e1f0: 0x34ab0003  ori         $t3, $a1, 0x3
    ctx->pc = 0x29e1f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x29e1f4: 0x346a0008  ori         $t2, $v1, 0x8
    ctx->pc = 0x29e1f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x29e1f8: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x29e1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x29e1fc: 0x3c036c08  lui         $v1, 0x6C08
    ctx->pc = 0x29e1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27656 << 16));
    // 0x29e200: 0x34a90404  ori         $t1, $a1, 0x404
    ctx->pc = 0x29e200u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1028);
    // 0x29e204: 0x346803f8  ori         $t0, $v1, 0x3F8
    ctx->pc = 0x29e204u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1016);
    // 0x29e208: 0x35ac0003  ori         $t4, $t5, 0x3
    ctx->pc = 0x29e208u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)3);
    // 0x29e20c: 0x3c076c00  lui         $a3, 0x6C00
    ctx->pc = 0x29e20cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)27648 << 16));
    // 0x29e210: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x29e210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x29e214: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29e214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e218: 0x6313c  dsll32      $a2, $a2, 4
    ctx->pc = 0x29e218u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 4));
    // 0x29e21c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29e21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e220: 0x6313e  dsrl32      $a2, $a2, 4
    ctx->pc = 0x29e220u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 4));
    // 0x29e224: 0x6703c  dsll32      $t6, $a2, 0
    ctx->pc = 0x29e224u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29e228: 0x1cc6025  or          $t4, $t6, $t4
    ctx->pc = 0x29e228u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 14) | GPR_U64(ctx, 12));
    // 0x29e22c: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x29e22cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x29e230: 0xfc4c0000  sd          $t4, 0x0($v0)
    ctx->pc = 0x29e230u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 12));
    // 0x29e234: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x29e234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x29e238: 0xac4b000c  sw          $t3, 0xC($v0)
    ctx->pc = 0x29e238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 11));
    // 0x29e23c: 0xfc4a0010  sd          $t2, 0x10($v0)
    ctx->pc = 0x29e23cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 10));
    // 0x29e240: 0xac490018  sw          $t1, 0x18($v0)
    ctx->pc = 0x29e240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 9));
    // 0x29e244: 0xac48001c  sw          $t0, 0x1C($v0)
    ctx->pc = 0x29e244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 8));
    // 0x29e248: 0x7c400020  sq          $zero, 0x20($v0)
    ctx->pc = 0x29e248u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 0));
    // 0x29e24c: 0x7c400030  sq          $zero, 0x30($v0)
    ctx->pc = 0x29e24cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 0));
    // 0x29e250: 0x7c400040  sq          $zero, 0x40($v0)
    ctx->pc = 0x29e250u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 0));
    // 0x29e254: 0x7c400050  sq          $zero, 0x50($v0)
    ctx->pc = 0x29e254u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 80), GPR_VEC(ctx, 0));
    // 0x29e258: 0x7c400060  sq          $zero, 0x60($v0)
    ctx->pc = 0x29e258u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 96), GPR_VEC(ctx, 0));
    // 0x29e25c: 0x7c400070  sq          $zero, 0x70($v0)
    ctx->pc = 0x29e25cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), GPR_VEC(ctx, 0));
    // 0x29e260: 0x7c400080  sq          $zero, 0x80($v0)
    ctx->pc = 0x29e260u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 128), GPR_VEC(ctx, 0));
    // 0x29e264: 0x7c400090  sq          $zero, 0x90($v0)
    ctx->pc = 0x29e264u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 144), GPR_VEC(ctx, 0));
    // 0x29e268: 0x8ec80078  lw          $t0, 0x78($s6)
    ctx->pc = 0x29e268u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 120)));
    // 0x29e26c: 0x8de90110  lw          $t1, 0x110($t7)
    ctx->pc = 0x29e26cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 272)));
    // 0x29e270: 0x95080002  lhu         $t0, 0x2($t0)
    ctx->pc = 0x29e270u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x29e274: 0x9493c  dsll32      $t1, $t1, 4
    ctx->pc = 0x29e274u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 4));
    // 0x29e278: 0x9493e  dsrl32      $t1, $t1, 4
    ctx->pc = 0x29e278u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 4));
    // 0x29e27c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x29e27cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x29e280: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x29e280u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x29e284: 0x10d4025  or          $t0, $t0, $t5
    ctx->pc = 0x29e284u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 13));
    // 0x29e288: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x29e288u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x29e28c: 0xfc4800a0  sd          $t0, 0xA0($v0)
    ctx->pc = 0x29e28cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 160), GPR_U64(ctx, 8));
    // 0x29e290: 0xac4000a8  sw          $zero, 0xA8($v0)
    ctx->pc = 0x29e290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 0));
    // 0x29e294: 0x8ec80078  lw          $t0, 0x78($s6)
    ctx->pc = 0x29e294u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 120)));
    // 0x29e298: 0x95080002  lhu         $t0, 0x2($t0)
    ctx->pc = 0x29e298u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x29e29c: 0x84480  sll         $t0, $t0, 18
    ctx->pc = 0x29e29cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 18));
    // 0x29e2a0: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x29e2a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x29e2a4: 0xac4700ac  sw          $a3, 0xAC($v0)
    ctx->pc = 0x29e2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 7));
    // 0x29e2a8: 0xfc4300b0  sd          $v1, 0xB0($v0)
    ctx->pc = 0x29e2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 176), GPR_U64(ctx, 3));
    // 0x29e2ac: 0xc05e480  jal         func_179200
    ctx->pc = 0x29E2ACu;
    SET_GPR_U32(ctx, 31, 0x29E2B4u);
    ctx->pc = 0x29E2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E2ACu;
    // 0x29e2b0: 0xfc4000b8  sd          $zero, 0xB8($v0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 2), 184), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179200u, 0x29E2ACu, 0x29E2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E2B4u;
label_29e2b4:
    // 0x29e2b4: 0x0  nop
    ctx->pc = 0x29e2b4u;
    // NOP
label_29e2b8:
    // 0x29e2b8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x29e2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29e2bc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x29e2bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29e2c0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x29e2c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29e2c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x29e2c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e2c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29e2c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e2cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29e2ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29e2d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29e2d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29e2d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29e2d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e2d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29e2d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e2dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29e2dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x29E2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E2E0u;
        // 0x29e2e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E2E8u;
}
