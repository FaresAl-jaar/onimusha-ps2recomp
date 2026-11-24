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

// Function: sub_00174BA0
// Address: 0x174ba0 - 0x174d98
void sub_00174BA0_0x174ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174BA0_0x174ba0");
#endif

    switch (ctx->pc) {
        case 0x174bd0u: goto label_174bd0;
        case 0x174cd0u: goto label_174cd0;
        case 0x174ce8u: goto label_174ce8;
        default: break;
    }

    ctx->pc = 0x174ba0u;

    // 0x174ba0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x174ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x174ba4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x174ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x174ba8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x174ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x174bac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x174bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x174bb0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x174bb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174bb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x174bb8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x174bb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174bbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x174bc0: 0x26710010  addiu       $s1, $s3, 0x10
    ctx->pc = 0x174bc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x174bc4: 0x84840008  lh          $a0, 0x8($a0)
    ctx->pc = 0x174bc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x174bc8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x174BC8u;
    {
        const bool branch_taken_0x174bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BC8u;
        // 0x174bcc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174bc8) {
            ctx->pc = 0x174D68u;
            goto label_174d68;
        }
    }
    ctx->pc = 0x174BD0u;
label_174bd0:
    // 0x174bd0: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x174bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x174bd4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x174bd4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x174bd8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x174bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x174bdc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x174bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x174be0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174be4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x174be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x174be8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x174be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x174bec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x174becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x174bf0: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x174bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x174bf4: 0x90a20008  lbu         $v0, 0x8($a1)
    ctx->pc = 0x174bf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x174bf8: 0x10460025  beq         $v0, $a2, . + 4 + (0x25 << 2)
    ctx->pc = 0x174BF8u;
    {
        const bool branch_taken_0x174bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x174BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174BF8u;
        // 0x174bfc: 0x24a80008  addiu       $t0, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174bf8) {
            ctx->pc = 0x174C90u;
            goto label_174c90;
        }
    }
    ctx->pc = 0x174C00u;
    // 0x174c00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x174c00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174c04: 0x1047001a  beq         $v0, $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x174C04u;
    {
        const bool branch_taken_0x174c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x174c04) {
            ctx->pc = 0x174C70u;
            goto label_174c70;
        }
    }
    ctx->pc = 0x174C0Cu;
    // 0x174c0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x174C0Cu;
    {
        const bool branch_taken_0x174c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174c0c) {
            ctx->pc = 0x174C20u;
            goto label_174c20;
        }
    }
    ctx->pc = 0x174C14u;
    // 0x174c14: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x174C14u;
    {
        const bool branch_taken_0x174c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174c14) {
            ctx->pc = 0x174CB8u;
            goto label_174cb8;
        }
    }
    ctx->pc = 0x174C1Cu;
    // 0x174c1c: 0x0  nop
    ctx->pc = 0x174c1cu;
    // NOP
label_174c20:
    // 0x174c20: 0x90a40006  lbu         $a0, 0x6($a1)
    ctx->pc = 0x174c20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x174c24: 0x91030003  lbu         $v1, 0x3($t0)
    ctx->pc = 0x174c24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x174c28: 0x91020002  lbu         $v0, 0x2($t0)
    ctx->pc = 0x174c28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x174c2c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x174c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x174c30: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x174c30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x174c34: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x174C34u;
    {
        const bool branch_taken_0x174c34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x174c34) {
            ctx->pc = 0x174C48u;
            goto label_174c48;
        }
    }
    ctx->pc = 0x174C3Cu;
    // 0x174c3c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x174C3Cu;
    {
        const bool branch_taken_0x174c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C3Cu;
        // 0x174c40: 0xa0a30006  sb          $v1, 0x6($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c3c) {
            ctx->pc = 0x174CB8u;
            goto label_174cb8;
        }
    }
    ctx->pc = 0x174C44u;
    // 0x174c44: 0x0  nop
    ctx->pc = 0x174c44u;
    // NOP
label_174c48:
    // 0x174c48: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x174c48u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x174c4c: 0x95020004  lhu         $v0, 0x4($t0)
    ctx->pc = 0x174c4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x174c50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174C50u;
    {
        const bool branch_taken_0x174c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174c50) {
            ctx->pc = 0x174C60u;
            goto label_174c60;
        }
    }
    ctx->pc = 0x174C58u;
    // 0x174c58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x174C58u;
    {
        const bool branch_taken_0x174c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174c58) {
            ctx->pc = 0x174C68u;
            goto label_174c68;
        }
    }
    ctx->pc = 0x174C60u;
label_174c60:
    // 0x174c60: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x174c60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c64: 0x0  nop
    ctx->pc = 0x174c64u;
    // NOP
label_174c68:
    // 0x174c68: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x174C68u;
    {
        const bool branch_taken_0x174c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C68u;
        // 0x174c6c: 0xa1070000  sb          $a3, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c68) {
            ctx->pc = 0x174CB8u;
            goto label_174cb8;
        }
    }
    ctx->pc = 0x174C70u;
label_174c70:
    // 0x174c70: 0x95020004  lhu         $v0, 0x4($t0)
    ctx->pc = 0x174c70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x174c74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x174c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x174c78: 0xa5020004  sh          $v0, 0x4($t0)
    ctx->pc = 0x174c78u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x174c7c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x174c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x174c80: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x174C80u;
    {
        const bool branch_taken_0x174c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174c80) {
            ctx->pc = 0x174CB8u;
            goto label_174cb8;
        }
    }
    ctx->pc = 0x174C88u;
    // 0x174c88: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x174C88u;
    {
        const bool branch_taken_0x174c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C88u;
        // 0x174c8c: 0xa1060000  sb          $a2, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c88) {
            ctx->pc = 0x174CB8u;
            goto label_174cb8;
        }
    }
    ctx->pc = 0x174C90u;
label_174c90:
    // 0x174c90: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x174c90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x174c94: 0x90a20007  lbu         $v0, 0x7($a1)
    ctx->pc = 0x174c94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x174c98: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x174c98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x174c9c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x174C9Cu;
    {
        const bool branch_taken_0x174c9c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x174c9c) {
            ctx->pc = 0x174CB0u;
            goto label_174cb0;
        }
    }
    ctx->pc = 0x174CA4u;
    // 0x174ca4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x174CA4u;
    {
        const bool branch_taken_0x174ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CA4u;
        // 0x174ca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ca4) {
            ctx->pc = 0x174CC0u;
            goto label_174cc0;
        }
    }
    ctx->pc = 0x174CACu;
    // 0x174cac: 0x0  nop
    ctx->pc = 0x174cacu;
    // NOP
label_174cb0:
    // 0x174cb0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x174cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x174cb4: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x174cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
label_174cb8:
    // 0x174cb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174cbc: 0x0  nop
    ctx->pc = 0x174cbcu;
    // NOP
label_174cc0:
    // 0x174cc0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x174CC0u;
    {
        const bool branch_taken_0x174cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CC0u;
        // 0x174cc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174cc0) {
            ctx->pc = 0x174CE0u;
            goto label_174ce0;
        }
    }
    ctx->pc = 0x174CC8u;
    // 0x174cc8: 0xc05d390  jal         func_174E40
    ctx->pc = 0x174CC8u;
    SET_GPR_U32(ctx, 31, 0x174CD0u);
    ctx->pc = 0x174E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174E40u, 0x174CC8u, 0x174CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174CD0u;
label_174cd0:
    // 0x174cd0: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x174cd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x174cd4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x174CD4u;
    {
        const bool branch_taken_0x174cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CD4u;
        // 0x174cd8: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174cd4) {
            ctx->pc = 0x174D68u;
            goto label_174d68;
        }
    }
    ctx->pc = 0x174CDCu;
    // 0x174cdc: 0x0  nop
    ctx->pc = 0x174cdcu;
    // NOP
label_174ce0:
    // 0x174ce0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x174ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x174ce4: 0x0  nop
    ctx->pc = 0x174ce4u;
    // NOP
label_174ce8:
    // 0x174ce8: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x174ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x174cec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x174cecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x174cf0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x174cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x174cf4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x174cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x174cf8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x174cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x174cfc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x174cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x174d00: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x174d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x174d04: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x174d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x174d08: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x174d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x174d0c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x174d0cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174d10: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x174d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x174d14: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x174d14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x174d18: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x174d18u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x174d1c: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x174D1Cu;
    {
        const bool branch_taken_0x174d1c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x174D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D1Cu;
        // 0x174d20: 0x7c640000  sq          $a0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d1c) {
            ctx->pc = 0x174CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174ce8;
        }
    }
    ctx->pc = 0x174D24u;
    // 0x174d24: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x174d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x174d28: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x174d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x174d2c: 0x24a40020  addiu       $a0, $a1, 0x20
    ctx->pc = 0x174d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x174d30: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x174d30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x174d34: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x174d34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174d38: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x174d38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x174d3c: 0xf8830000  sqc2        $vf3, 0x0($a0)
    ctx->pc = 0x174d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x174d40: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x174d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x174d44: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x174d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x174d48: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x174d48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174d4c: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x174d4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x174d50: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x174d50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x174d54: 0xf8630000  sqc2        $vf3, 0x0($v1)
    ctx->pc = 0x174d54u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x174d58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x174d58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x174d5c: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x174d5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x174d60: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x174d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x174d64: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x174d64u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_174d68:
    // 0x174d68: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x174d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x174d6c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x174d6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x174d70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x174d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x174d74: 0x1462ff96  bne         $v1, $v0, . + 4 + (-0x6A << 2)
    ctx->pc = 0x174D74u;
    {
        const bool branch_taken_0x174d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x174D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D74u;
        // 0x174d78: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d74) {
            ctx->pc = 0x174BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174bd0;
        }
    }
    ctx->pc = 0x174D7Cu;
    // 0x174d7c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x174d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174d80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x174d80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174d84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174d84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174d88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174d88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174d8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174d8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174d90: 0x3e00008  jr          $ra
    ctx->pc = 0x174D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174D90u;
        // 0x174d94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174D98u;
}
