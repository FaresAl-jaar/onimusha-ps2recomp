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

// Function: sub_00272FB0
// Address: 0x272fb0 - 0x2731a0
void sub_00272FB0_0x272fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272FB0_0x272fb0");
#endif

    switch (ctx->pc) {
        case 0x27301cu: goto label_27301c;
        case 0x273028u: goto label_273028;
        case 0x273040u: goto label_273040;
        case 0x2730a4u: goto label_2730a4;
        case 0x2730ecu: goto label_2730ec;
        case 0x27310cu: goto label_27310c;
        case 0x273134u: goto label_273134;
        case 0x273178u: goto label_273178;
        default: break;
    }

    ctx->pc = 0x272fb0u;

    // 0x272fb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x272fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x272fb4: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x272fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
    // 0x272fb8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x272fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x272fbc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x272fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x272fc0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x272fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x272fc4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x272fc4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272fc8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x272fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x272fcc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x272fccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272fd0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x272fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x272fd4: 0x3c14004e  lui         $s4, 0x4E
    ctx->pc = 0x272fd4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)78 << 16));
    // 0x272fd8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x272fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x272fdc: 0x26942628  addiu       $s4, $s4, 0x2628
    ctx->pc = 0x272fdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 9768));
    // 0x272fe0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x272fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x272fe4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x272fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x272fe8: 0x84232632  lh          $v1, 0x2632($at)
    ctx->pc = 0x272fe8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x4E2632u));
    // 0x272fec: 0x9482002c  lhu         $v0, 0x2C($a0)
    ctx->pc = 0x272fecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x272ff0: 0x24730002  addiu       $s3, $v1, 0x2
    ctx->pc = 0x272ff0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x272ff4: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x272ff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x272ff8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272FF8u;
    {
        const bool branch_taken_0x272ff8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x272FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272FF8u;
        // 0x272ffc: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272ff8) {
            ctx->pc = 0x273008u;
            goto label_273008;
        }
    }
    ctx->pc = 0x273000u;
    // 0x273000: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x273000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x273004: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x273004u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_273008:
    // 0x273008: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x273008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x27300c: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x27300cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x273010: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x273010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x273014: 0xc09c46c  jal         func_2711B0
    ctx->pc = 0x273014u;
    SET_GPR_U32(ctx, 31, 0x27301Cu);
    ctx->pc = 0x273018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273014u;
    // 0x273018: 0x439023  subu        $s2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2711B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2711B0u, 0x273014u, 0x27301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27301Cu;
label_27301c:
    // 0x27301c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x27301cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x273020: 0xc0b78e0  jal         func_2DE380
    ctx->pc = 0x273020u;
    SET_GPR_U32(ctx, 31, 0x273028u);
    ctx->pc = 0x273024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273020u;
    // 0x273024: 0x24847180  addiu       $a0, $a0, 0x7180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE380u, 0x273020u, 0x273028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273028u;
label_273028:
    // 0x273028: 0x96a2002c  lhu         $v0, 0x2C($s5)
    ctx->pc = 0x273028u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x27302c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x27302cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x273030: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x273030u;
    {
        const bool branch_taken_0x273030 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x273034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273030u;
        // 0x273034: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273030) {
            ctx->pc = 0x273128u;
            goto label_273128;
        }
    }
    ctx->pc = 0x273038u;
    // 0x273038: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x273038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27303c: 0x0  nop
    ctx->pc = 0x27303cu;
    // NOP
label_273040:
    // 0x273040: 0x16360019  bne         $s1, $s6, . + 4 + (0x19 << 2)
    ctx->pc = 0x273040u;
    {
        const bool branch_taken_0x273040 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 22));
        if (branch_taken_0x273040) {
            ctx->pc = 0x2730A8u;
            goto label_2730a8;
        }
    }
    ctx->pc = 0x273048u;
    // 0x273048: 0x86860008  lh          $a2, 0x8($s4)
    ctx->pc = 0x273048u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x27304c: 0x8688000a  lh          $t0, 0xA($s4)
    ctx->pc = 0x27304cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
    // 0x273050: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x273050u;
    {
        const bool branch_taken_0x273050 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x273054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273050u;
        // 0x273054: 0x62043  sra         $a0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273050) {
            ctx->pc = 0x273060u;
            goto label_273060;
        }
    }
    ctx->pc = 0x273058u;
    // 0x273058: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x273058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x27305c: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x27305cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_273060:
    // 0x273060: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x273060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x273064: 0x81c3c  dsll32      $v1, $t0, 16
    ctx->pc = 0x273064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 16));
    // 0x273068: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x273068u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x27306c: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x27306cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x273070: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x273070u;
    {
        const bool branch_taken_0x273070 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x273074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273070u;
        // 0x273074: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273070) {
            ctx->pc = 0x273080u;
            goto label_273080;
        }
    }
    ctx->pc = 0x273078u;
    // 0x273078: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x273078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27307c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x27307cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_273080:
    // 0x273080: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x273080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x273084: 0x63c3c  dsll32      $a3, $a2, 16
    ctx->pc = 0x273084u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 16));
    // 0x273088: 0x8c297184  lw          $t1, 0x7184($at)
    ctx->pc = 0x273088u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 29060)));
    // 0x27308c: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x27308cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x273090: 0x2422823  subu        $a1, $s2, $v0
    ctx->pc = 0x273090u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x273094: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x273094u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x273098: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x273098u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x27309c: 0xc09c4e0  jal         func_271380
    ctx->pc = 0x27309Cu;
    SET_GPR_U32(ctx, 31, 0x2730A4u);
    ctx->pc = 0x2730A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27309Cu;
    // 0x2730a0: 0x3406fffa  ori         $a2, $zero, 0xFFFA (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    ctx->in_delay_slot = false;
    ctx->pc = 0x271380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271380u, 0x27309Cu, 0x2730A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2730A4u;
label_2730a4:
    // 0x2730a4: 0x0  nop
    ctx->pc = 0x2730a4u;
    // NOP
label_2730a8:
    // 0x2730a8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2730a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2730ac: 0x244259d8  addiu       $v0, $v0, 0x59D8
    ctx->pc = 0x2730acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23000));
    // 0x2730b0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x2730b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x2730b4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2730b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2730b8: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x2730b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2730bc: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x2730bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2730c0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2730c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2730c4: 0x3246ffff  andi        $a2, $s2, 0xFFFF
    ctx->pc = 0x2730c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x2730c8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x2730c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x2730cc: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2730ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2730d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2730d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2730d4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x2730d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2730d8: 0x240b0011  addiu       $t3, $zero, 0x11
    ctx->pc = 0x2730d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2730dc: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2730dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2730e0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2730e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2730e4: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x2730E4u;
    SET_GPR_U32(ctx, 31, 0x2730ECu);
    ctx->pc = 0x2730E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2730E4u;
    // 0x2730e8: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x2730E4u, 0x2730ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2730ECu;
label_2730ec:
    // 0x2730ec: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x2730ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x2730f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2730f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2730f4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2730f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2730f8: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2730f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2730fc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2730fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273100: 0x3408fffa  ori         $t0, $zero, 0xFFFA
    ctx->pc = 0x273100u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x273104: 0xc09c5fc  jal         func_2717F0
    ctx->pc = 0x273104u;
    SET_GPR_U32(ctx, 31, 0x27310Cu);
    ctx->pc = 0x273108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273104u;
    // 0x273108: 0x34498080  ori         $t1, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717F0u, 0x273104u, 0x27310Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27310Cu;
label_27310c:
    // 0x27310c: 0x96a2002c  lhu         $v0, 0x2C($s5)
    ctx->pc = 0x27310cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x273110: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x273110u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x273114: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x273114u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x273118: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x273118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27311c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x27311Cu;
    {
        const bool branch_taken_0x27311c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27311Cu;
        // 0x273120: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27311c) {
            ctx->pc = 0x273040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273040;
        }
    }
    ctx->pc = 0x273124u;
    // 0x273124: 0x0  nop
    ctx->pc = 0x273124u;
    // NOP
label_273128:
    // 0x273128: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x273128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x27312c: 0xc095018  jal         func_254060
    ctx->pc = 0x27312Cu;
    SET_GPR_U32(ctx, 31, 0x273134u);
    ctx->pc = 0x273130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27312Cu;
    // 0x273130: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x27312Cu, 0x273134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273134u;
label_273134:
    // 0x273134: 0x2443017c  addiu       $v1, $v0, 0x17C
    ctx->pc = 0x273134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 380));
    // 0x273138: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x273138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x27313c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x27313cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x273140: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x273140u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x273144: 0x244259d8  addiu       $v0, $v0, 0x59D8
    ctx->pc = 0x273144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23000));
    // 0x273148: 0x3066ffff  andi        $a2, $v1, 0xFFFF
    ctx->pc = 0x273148u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x27314c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x27314cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x273150: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x273150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x273154: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x273154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x273158: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x273158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x27315c: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x27315cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x273160: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x273160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273164: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x273164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x273168: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x273168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x27316c: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x27316cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273170: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x273170u;
    SET_GPR_U32(ctx, 31, 0x273178u);
    ctx->pc = 0x273174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273170u;
    // 0x273174: 0x240b0011  addiu       $t3, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x273170u, 0x273178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273178u;
label_273178:
    // 0x273178: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x273178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27317c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x27317cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x273180: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x273180u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x273184: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x273184u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x273188: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x273188u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27318c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27318cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x273190: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x273190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273194: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x273194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273198: 0x3e00008  jr          $ra
    ctx->pc = 0x273198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27319Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273198u;
        // 0x27319c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2731A0u;
}
