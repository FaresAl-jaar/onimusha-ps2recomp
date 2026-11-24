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

// Function: sub_00271A90
// Address: 0x271a90 - 0x271c74
void sub_00271A90_0x271a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271A90_0x271a90");
#endif

    switch (ctx->pc) {
        case 0x271ae8u: goto label_271ae8;
        case 0x271c20u: goto label_271c20;
        case 0x271c3cu: goto label_271c3c;
        default: break;
    }

    ctx->pc = 0x271a90u;

    // 0x271a90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x271a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x271a94: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x271a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x271a98: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x271a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x271a9c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x271a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x271aa0: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x271aa0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271aa4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x271aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x271aa8: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x271aa8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271aac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x271aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x271ab0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x271ab0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271ab4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x271ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x271ab8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x271ab8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271abc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x271abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x271ac0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x271ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x271ac4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x271ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x271ac8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x271ac8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271acc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x271accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x271ad0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x271ad0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271ad4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x271ad4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271ad8: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x271ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271adc: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x271adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x271ae0: 0xc05e360  jal         func_178D80
    ctx->pc = 0x271AE0u;
    SET_GPR_U32(ctx, 31, 0x271AE8u);
    ctx->pc = 0x271AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271AE0u;
    // 0x271ae4: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x271AE0u, 0x271AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271AE8u;
label_271ae8:
    // 0x271ae8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271AE8u;
    {
        const bool branch_taken_0x271ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271ae8) {
            ctx->pc = 0x271AF8u;
            goto label_271af8;
        }
    }
    ctx->pc = 0x271AF0u;
    // 0x271af0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x271AF0u;
    {
        const bool branch_taken_0x271af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271AF0u;
        // 0x271af4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271af0) {
            ctx->pc = 0x271C48u;
            goto label_271c48;
        }
    }
    ctx->pc = 0x271AF8u;
label_271af8:
    // 0x271af8: 0x86a60008  lh          $a2, 0x8($s5)
    ctx->pc = 0x271af8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x271afc: 0x26630700  addiu       $v1, $s3, 0x700
    ctx->pc = 0x271afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1792));
    // 0x271b00: 0x86a5000a  lh          $a1, 0xA($s5)
    ctx->pc = 0x271b00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x271b04: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x271b04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x271b08: 0x86ad0004  lh          $t5, 0x4($s5)
    ctx->pc = 0x271b08u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x271b0c: 0x86ab0006  lh          $t3, 0x6($s5)
    ctx->pc = 0x271b0cu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x271b10: 0x26430f20  addiu       $v1, $s2, 0xF20
    ctx->pc = 0x271b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3872));
    // 0x271b14: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x271b14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x271b18: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x271b18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x271b1c: 0x31cc0  sll         $v1, $v1, 19
    ctx->pc = 0x271b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x271b20: 0xd66018  mult        $t4, $a2, $s6
    ctx->pc = 0x271b20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x271b24: 0x833825  or          $a3, $a0, $v1
    ctx->pc = 0x271b24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x271b28: 0x70b75018  mult1       $t2, $a1, $s7
    ctx->pc = 0x271b28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x271b2c: 0x3c032028  lui         $v1, 0x2028
    ctx->pc = 0x271b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8232 << 16));
    // 0x271b30: 0x34680156  ori         $t0, $v1, 0x156
    ctx->pc = 0x271b30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)342);
    // 0x271b34: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x271b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x271b38: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x271b38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x271b3c: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x271b3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x271b40: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x271b40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x271b44: 0x1ac4821  addu        $t1, $t5, $t4
    ctx->pc = 0x271b44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x271b48: 0x9443c  dsll32      $t0, $t1, 16
    ctx->pc = 0x271b48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) << (32 + 16));
    // 0x271b4c: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x271b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x271b50: 0xac470020  sw          $a3, 0x20($v0)
    ctx->pc = 0x271b50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 7));
    // 0x271b54: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x271b54u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x271b58: 0xa4c3c  dsll32      $t1, $t2, 16
    ctx->pc = 0x271b58u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) << (32 + 16));
    // 0x271b5c: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x271b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x271b60: 0x24e80008  addiu       $t0, $a3, 0x8
    ctx->pc = 0x271b60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x271b64: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x271b64u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x271b68: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x271b68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x271b6c: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x271b6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x271b70: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x271b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x271b74: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x271b74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x271b78: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x271b78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x271b7c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x271b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x271b80: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x271b80u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x271b84: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x271b84u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x271b88: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x271b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x271b8c: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x271b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x271b90: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x271b90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x271b94: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x271b94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x271b98: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x271b98u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x271b9c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x271b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x271ba0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x271ba0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x271ba4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x271ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x271ba8: 0xac510024  sw          $s1, 0x24($v0)
    ctx->pc = 0x271ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 17));
    // 0x271bac: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x271bacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x271bb0: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x271bb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x271bb4: 0x86a80008  lh          $t0, 0x8($s5)
    ctx->pc = 0x271bb4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x271bb8: 0x86a6000a  lh          $a2, 0xA($s5)
    ctx->pc = 0x271bb8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x271bbc: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x271bbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x271bc0: 0x101e02  srl         $v1, $s0, 24
    ctx->pc = 0x271bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x271bc4: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x271bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x271bc8: 0x63500  sll         $a2, $a2, 20
    ctx->pc = 0x271bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 20));
    // 0x271bcc: 0x1063025  or          $a2, $t0, $a2
    ctx->pc = 0x271bccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x271bd0: 0xac460028  sw          $a2, 0x28($v0)
    ctx->pc = 0x271bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 6));
    // 0x271bd4: 0xac470018  sw          $a3, 0x18($v0)
    ctx->pc = 0x271bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 7));
    // 0x271bd8: 0xac45001c  sw          $a1, 0x1C($v0)
    ctx->pc = 0x271bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 5));
    // 0x271bdc: 0x8f85811c  lw          $a1, -0x7EE4($gp)
    ctx->pc = 0x271bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934812)));
    // 0x271be0: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x271be0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
    // 0x271be4: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x271be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x271be8: 0xa4450014  sh          $a1, 0x14($v0)
    ctx->pc = 0x271be8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 5));
    // 0x271bec: 0xa4540016  sh          $s4, 0x16($v0)
    ctx->pc = 0x271becu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 20));
    // 0x271bf0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x271bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x271bf4: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x271bf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x271bf8: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x271bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x271bfc: 0xa043000f  sb          $v1, 0xF($v0)
    ctx->pc = 0x271bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 3));
    // 0x271c00: 0x8f838898  lw          $v1, -0x7768($gp)
    ctx->pc = 0x271c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936728)));
    // 0x271c04: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x271C04u;
    {
        const bool branch_taken_0x271c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x271c04) {
            ctx->pc = 0x271C28u;
            goto label_271c28;
        }
    }
    ctx->pc = 0x271C0Cu;
    // 0x271c0c: 0x8f868118  lw          $a2, -0x7EE8($gp)
    ctx->pc = 0x271c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934808)));
    // 0x271c10: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x271c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x271c14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x271c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271c18: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x271C18u;
    SET_GPR_U32(ctx, 31, 0x271C20u);
    ctx->pc = 0x271C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271C18u;
    // 0x271c1c: 0x2484cc60  addiu       $a0, $a0, -0x33A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x271C18u, 0x271C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271C20u;
label_271c20:
    // 0x271c20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x271C20u;
    {
        const bool branch_taken_0x271c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271c20) {
            ctx->pc = 0x271C40u;
            goto label_271c40;
        }
    }
    ctx->pc = 0x271C28u;
label_271c28:
    // 0x271c28: 0x8f868118  lw          $a2, -0x7EE8($gp)
    ctx->pc = 0x271c28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934808)));
    // 0x271c2c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x271c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x271c30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x271c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271c34: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x271C34u;
    SET_GPR_U32(ctx, 31, 0x271C3Cu);
    ctx->pc = 0x271C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271C34u;
    // 0x271c38: 0x2484cc40  addiu       $a0, $a0, -0x33C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x271C34u, 0x271C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271C3Cu;
label_271c3c:
    // 0x271c3c: 0x0  nop
    ctx->pc = 0x271c3cu;
    // NOP
label_271c40:
    // 0x271c40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271c44: 0x0  nop
    ctx->pc = 0x271c44u;
    // NOP
label_271c48:
    // 0x271c48: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x271c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x271c4c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x271c4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x271c50: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x271c50u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x271c54: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x271c54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x271c58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x271c58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x271c5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x271c5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x271c60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x271c60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x271c64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x271c64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271c68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x271c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x271C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C6Cu;
        // 0x271c70: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271C74u;
}
