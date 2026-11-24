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

// Function: sub_001749B0
// Address: 0x1749b0 - 0x174ba0
void sub_001749B0_0x1749b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001749B0_0x1749b0");
#endif

    switch (ctx->pc) {
        case 0x1749e0u: goto label_1749e0;
        case 0x174ad8u: goto label_174ad8;
        case 0x174af0u: goto label_174af0;
        default: break;
    }

    ctx->pc = 0x1749b0u;

    // 0x1749b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1749b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1749b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1749b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1749b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1749b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1749bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1749bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1749c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1749c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1749c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1749c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1749c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1749c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1749cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1749ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1749d0: 0x26710010  addiu       $s1, $s3, 0x10
    ctx->pc = 0x1749d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1749d4: 0x84840008  lh          $a0, 0x8($a0)
    ctx->pc = 0x1749d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1749d8: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1749D8u;
    {
        const bool branch_taken_0x1749d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1749DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1749D8u;
        // 0x1749dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1749d8) {
            ctx->pc = 0x174B70u;
            goto label_174b70;
        }
    }
    ctx->pc = 0x1749E0u;
label_1749e0:
    // 0x1749e0: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x1749e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1749e4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1749e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1749e8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1749e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1749ec: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1749ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1749f0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1749f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1749f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1749f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1749f8: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x1749f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1749fc: 0x90a20008  lbu         $v0, 0x8($a1)
    ctx->pc = 0x1749fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x174a00: 0x10460025  beq         $v0, $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x174A00u;
    {
        const bool branch_taken_0x174a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x174A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A00u;
        // 0x174a04: 0x24a80008  addiu       $t0, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a00) {
            ctx->pc = 0x174A98u;
            goto label_174a98;
        }
    }
    ctx->pc = 0x174A08u;
    // 0x174a08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x174a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174a0c: 0x1047001a  beq         $v0, $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x174A0Cu;
    {
        const bool branch_taken_0x174a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x174a0c) {
            ctx->pc = 0x174A78u;
            goto label_174a78;
        }
    }
    ctx->pc = 0x174A14u;
    // 0x174a14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x174A14u;
    {
        const bool branch_taken_0x174a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174a14) {
            ctx->pc = 0x174A28u;
            goto label_174a28;
        }
    }
    ctx->pc = 0x174A1Cu;
    // 0x174a1c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x174A1Cu;
    {
        const bool branch_taken_0x174a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174a1c) {
            ctx->pc = 0x174AC0u;
            goto label_174ac0;
        }
    }
    ctx->pc = 0x174A24u;
    // 0x174a24: 0x0  nop
    ctx->pc = 0x174a24u;
    // NOP
label_174a28:
    // 0x174a28: 0x90a40006  lbu         $a0, 0x6($a1)
    ctx->pc = 0x174a28u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x174a2c: 0x91030003  lbu         $v1, 0x3($t0)
    ctx->pc = 0x174a2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x174a30: 0x91020002  lbu         $v0, 0x2($t0)
    ctx->pc = 0x174a30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x174a34: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x174a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x174a38: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x174a38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x174a3c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x174A3Cu;
    {
        const bool branch_taken_0x174a3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x174a3c) {
            ctx->pc = 0x174A50u;
            goto label_174a50;
        }
    }
    ctx->pc = 0x174A44u;
    // 0x174a44: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x174A44u;
    {
        const bool branch_taken_0x174a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A44u;
        // 0x174a48: 0xa0a30006  sb          $v1, 0x6($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a44) {
            ctx->pc = 0x174AC0u;
            goto label_174ac0;
        }
    }
    ctx->pc = 0x174A4Cu;
    // 0x174a4c: 0x0  nop
    ctx->pc = 0x174a4cu;
    // NOP
label_174a50:
    // 0x174a50: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x174a50u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x174a54: 0x95020004  lhu         $v0, 0x4($t0)
    ctx->pc = 0x174a54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x174a58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174A58u;
    {
        const bool branch_taken_0x174a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174a58) {
            ctx->pc = 0x174A68u;
            goto label_174a68;
        }
    }
    ctx->pc = 0x174A60u;
    // 0x174a60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x174A60u;
    {
        const bool branch_taken_0x174a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174a60) {
            ctx->pc = 0x174A70u;
            goto label_174a70;
        }
    }
    ctx->pc = 0x174A68u;
label_174a68:
    // 0x174a68: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x174a68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174a6c: 0x0  nop
    ctx->pc = 0x174a6cu;
    // NOP
label_174a70:
    // 0x174a70: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x174A70u;
    {
        const bool branch_taken_0x174a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A70u;
        // 0x174a74: 0xa1070000  sb          $a3, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a70) {
            ctx->pc = 0x174AC0u;
            goto label_174ac0;
        }
    }
    ctx->pc = 0x174A78u;
label_174a78:
    // 0x174a78: 0x95020004  lhu         $v0, 0x4($t0)
    ctx->pc = 0x174a78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x174a7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x174a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x174a80: 0xa5020004  sh          $v0, 0x4($t0)
    ctx->pc = 0x174a80u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x174a84: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x174a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x174a88: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x174A88u;
    {
        const bool branch_taken_0x174a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174a88) {
            ctx->pc = 0x174AC0u;
            goto label_174ac0;
        }
    }
    ctx->pc = 0x174A90u;
    // 0x174a90: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x174A90u;
    {
        const bool branch_taken_0x174a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174A90u;
        // 0x174a94: 0xa1060000  sb          $a2, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174a90) {
            ctx->pc = 0x174AC0u;
            goto label_174ac0;
        }
    }
    ctx->pc = 0x174A98u;
label_174a98:
    // 0x174a98: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x174a98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x174a9c: 0x90a20007  lbu         $v0, 0x7($a1)
    ctx->pc = 0x174a9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x174aa0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x174aa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x174aa4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x174AA4u;
    {
        const bool branch_taken_0x174aa4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x174aa4) {
            ctx->pc = 0x174AB8u;
            goto label_174ab8;
        }
    }
    ctx->pc = 0x174AACu;
    // 0x174aac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x174AACu;
    {
        const bool branch_taken_0x174aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174AACu;
        // 0x174ab0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174aac) {
            ctx->pc = 0x174AC8u;
            goto label_174ac8;
        }
    }
    ctx->pc = 0x174AB4u;
    // 0x174ab4: 0x0  nop
    ctx->pc = 0x174ab4u;
    // NOP
label_174ab8:
    // 0x174ab8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x174ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x174abc: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x174abcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
label_174ac0:
    // 0x174ac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174ac4: 0x0  nop
    ctx->pc = 0x174ac4u;
    // NOP
label_174ac8:
    // 0x174ac8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x174AC8u;
    {
        const bool branch_taken_0x174ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174AC8u;
        // 0x174acc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ac8) {
            ctx->pc = 0x174AE8u;
            goto label_174ae8;
        }
    }
    ctx->pc = 0x174AD0u;
    // 0x174ad0: 0xc05d390  jal         func_174E40
    ctx->pc = 0x174AD0u;
    SET_GPR_U32(ctx, 31, 0x174AD8u);
    ctx->pc = 0x174E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174E40u, 0x174AD0u, 0x174AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174AD8u;
label_174ad8:
    // 0x174ad8: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x174ad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x174adc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x174ADCu;
    {
        const bool branch_taken_0x174adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174ADCu;
        // 0x174ae0: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174adc) {
            ctx->pc = 0x174B70u;
            goto label_174b70;
        }
    }
    ctx->pc = 0x174AE4u;
    // 0x174ae4: 0x0  nop
    ctx->pc = 0x174ae4u;
    // NOP
label_174ae8:
    // 0x174ae8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x174ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x174aec: 0x0  nop
    ctx->pc = 0x174aecu;
    // NOP
label_174af0:
    // 0x174af0: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x174af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x174af4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x174af4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x174af8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x174af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x174afc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x174afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x174b00: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x174b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x174b04: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x174b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x174b08: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x174b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x174b0c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x174b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x174b10: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x174b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x174b14: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x174b14u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174b18: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x174b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x174b1c: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x174b1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x174b20: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x174b20u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x174b24: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x174B24u;
    {
        const bool branch_taken_0x174b24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x174B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B24u;
        // 0x174b28: 0x7c640000  sq          $a0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b24) {
            ctx->pc = 0x174AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174af0;
        }
    }
    ctx->pc = 0x174B2Cu;
    // 0x174b2c: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x174b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x174b30: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x174b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x174b34: 0x24a40020  addiu       $a0, $a1, 0x20
    ctx->pc = 0x174b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x174b38: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x174b38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x174b3c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x174b3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174b40: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x174b40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x174b44: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x174b44u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x174b48: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x174b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x174b4c: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x174b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x174b50: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x174b50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174b54: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x174b54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x174b58: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x174b58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x174b5c: 0xf8630000  sqc2        $vf3, 0x0($v1)
    ctx->pc = 0x174b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x174b60: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x174b60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x174b64: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x174b64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x174b68: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x174b68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x174b6c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x174b6cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_174b70:
    // 0x174b70: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x174b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x174b74: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x174b74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x174b78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x174b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x174b7c: 0x1462ff98  bne         $v1, $v0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x174B7Cu;
    {
        const bool branch_taken_0x174b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x174B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B7Cu;
        // 0x174b80: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174b7c) {
            ctx->pc = 0x1749E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1749e0;
        }
    }
    ctx->pc = 0x174B84u;
    // 0x174b84: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x174b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174b88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x174b88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174b8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174b8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174b90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174b94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174b98: 0x3e00008  jr          $ra
    ctx->pc = 0x174B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174B98u;
        // 0x174b9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174BA0u;
}
