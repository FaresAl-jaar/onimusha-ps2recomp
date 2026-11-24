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

// Function: sub_002A2BD0
// Address: 0x2a2bd0 - 0x2a2ef4
void sub_002A2BD0_0x2a2bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2BD0_0x2a2bd0");
#endif

    switch (ctx->pc) {
        case 0x2a2c1cu: goto label_2a2c1c;
        default: break;
    }

    ctx->pc = 0x2a2bd0u;

    // 0x2a2bd0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2a2bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2a2bd4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2a2bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2a2bd8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2a2bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2a2bdc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2a2bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2a2be0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a2be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2a2be4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a2be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a2be8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a2be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a2bec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a2becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a2bf0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2a2bf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2bf4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a2bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a2bf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a2bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a2bfc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a2bfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2c00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a2c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a2c04: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a2c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2c08: 0x8c93013c  lw          $s3, 0x13C($a0)
    ctx->pc = 0x2a2c08u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x2a2c0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a2c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2c10: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a2c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a2c14: 0xc0a8274  jal         func_2A09D0
    ctx->pc = 0x2A2C14u;
    SET_GPR_U32(ctx, 31, 0x2A2C1Cu);
    ctx->pc = 0x2A2C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2C14u;
    // 0x2a2c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A09D0u, 0x2A2C14u, 0x2A2C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2C1Cu;
label_2a2c1c:
    // 0x2a2c1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2C1Cu;
    {
        const bool branch_taken_0x2a2c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A2C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C1Cu;
        // 0x2a2c20: 0x3c033c23  lui         $v1, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2c1c) {
            ctx->pc = 0x2A2C30u;
            goto label_2a2c30;
        }
    }
    ctx->pc = 0x2A2C24u;
    // 0x2a2c24: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x2a2c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a2c28: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2a2c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2a2c2c: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x2a2c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
label_2a2c30:
    // 0x2a2c30: 0x8e480140  lw          $t0, 0x140($s2)
    ctx->pc = 0x2a2c30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 320)));
    // 0x2a2c34: 0x26630020  addiu       $v1, $s3, 0x20
    ctx->pc = 0x2a2c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2a2c38: 0x3c163000  lui         $s6, 0x3000
    ctx->pc = 0x2a2c38u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)12288 << 16));
    // 0x2a2c3c: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x2a2c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x2a2c40: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x2a2c40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2a2c44: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x2a2c44u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x2a2c48: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x2a2c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x2a2c4c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x2a2c4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a2c50: 0x3c18007f  lui         $t8, 0x7F
    ctx->pc = 0x2a2c50u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)127 << 16));
    // 0x2a2c54: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x2a2c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2a2c58: 0x36ca0003  ori         $t2, $s6, 0x3
    ctx->pc = 0x2a2c58u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)3);
    // 0x2a2c5c: 0x8593c  dsll32      $t3, $t0, 4
    ctx->pc = 0x2a2c5cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << (32 + 4));
    // 0x2a2c60: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x2a2c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x2a2c64: 0xb593e  dsrl32      $t3, $t3, 4
    ctx->pc = 0x2a2c64u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 4));
    // 0x2a2c68: 0x34950003  ori         $s5, $a0, 0x3
    ctx->pc = 0x2a2c68u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x2a2c6c: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x2a2c6cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x2a2c70: 0x34890008  ori         $t1, $a0, 0x8
    ctx->pc = 0x2a2c70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x2a2c74: 0x16a5025  or          $t2, $t3, $t2
    ctx->pc = 0x2a2c74u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
    // 0x2a2c78: 0x36870008  ori         $a3, $s4, 0x8
    ctx->pc = 0x2a2c78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)8);
    // 0x2a2c7c: 0xfe0a0000  sd          $t2, 0x0($s0)
    ctx->pc = 0x2a2c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 10));
    // 0x2a2c80: 0x14983c  dsll32      $s3, $s4, 0
    ctx->pc = 0x2a2c80u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) << (32 + 0));
    // 0x2a2c84: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2a2c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2a2c88: 0x34068007  ori         $a2, $zero, 0x8007
    ctx->pc = 0x2a2c88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32775);
    // 0x2a2c8c: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x2a2c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
    // 0x2a2c90: 0xd34025  or          $t0, $a2, $s3
    ctx->pc = 0x2a2c90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 19));
    // 0x2a2c94: 0xfe070010  sd          $a3, 0x10($s0)
    ctx->pc = 0x2a2c94u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 7));
    // 0x2a2c98: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x2a2c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2a2c9c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2a2c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2a2ca0: 0x6703c  dsll32      $t6, $a2, 0
    ctx->pc = 0x2a2ca0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a2ca4: 0xae09001c  sw          $t1, 0x1C($s0)
    ctx->pc = 0x2a2ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 9));
    // 0x2a2ca8: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x2a2ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2a2cac: 0x2419000e  addiu       $t9, $zero, 0xE
    ctx->pc = 0x2a2cacu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2a2cb0: 0xfe080020  sd          $t0, 0x20($s0)
    ctx->pc = 0x2a2cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 8));
    // 0x2a2cb4: 0xfe190028  sd          $t9, 0x28($s0)
    ctx->pc = 0x2a2cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 25));
    // 0x2a2cb8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2a2cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2a2cbc: 0xdc2df238  ld          $t5, -0xDC8($at)
    ctx->pc = 0x2a2cbcu;
    SET_GPR_U64(ctx, 13, FAST_READ64(0x81F238u));
    // 0x2a2cc0: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x2a2cc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a2cc4: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x2a2cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2a2cc8: 0x3718c00a  ori         $t8, $t8, 0xC00A
    ctx->pc = 0x2a2cc8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)49162);
    // 0x2a2ccc: 0xc75025  or          $t2, $a2, $a3
    ctx->pc = 0x2a2cccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2a2cd0: 0x240c0050  addiu       $t4, $zero, 0x50
    ctx->pc = 0x2a2cd0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2a2cd4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2a2cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a2cd8: 0x240b0051  addiu       $t3, $zero, 0x51
    ctx->pc = 0x2a2cd8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x2a2cdc: 0x6483c  dsll32      $t1, $a2, 0
    ctx->pc = 0x2a2cdcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a2ce0: 0x241e0052  addiu       $fp, $zero, 0x52
    ctx->pc = 0x2a2ce0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x2a2ce4: 0xc94025  or          $t0, $a2, $t1
    ctx->pc = 0x2a2ce4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x2a2ce8: 0x2407003b  addiu       $a3, $zero, 0x3B
    ctx->pc = 0x2a2ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2a2cec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2a2cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2a2cf0: 0x2406037c  addiu       $a2, $zero, 0x37C
    ctx->pc = 0x2a2cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x2a2cf4: 0x9437f23a  lhu         $s7, -0xDC6($at)
    ctx->pc = 0x2a2cf4u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)FAST_READ16(0x81F23Au));
    // 0x2a2cf8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a2cf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a2cfc: 0xd6b3c  dsll32      $t5, $t5, 12
    ctx->pc = 0x2a2cfcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 12));
    // 0x2a2d00: 0x3063025  or          $a2, $t8, $a2
    ctx->pc = 0x2a2d00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 24) | GPR_U64(ctx, 6));
    // 0x2a2d04: 0xd6ebe  dsrl32      $t5, $t5, 26
    ctx->pc = 0x2a2d04u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 26));
    // 0x2a2d08: 0x34840005  ori         $a0, $a0, 0x5
    ctx->pc = 0x2a2d08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5);
    // 0x2a2d0c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2a2d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2a2d10: 0x17bdbc  dsll32      $s7, $s7, 22
    ctx->pc = 0x2a2d10u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 22));
    // 0x2a2d14: 0x942ff238  lhu         $t7, -0xDC8($at)
    ctx->pc = 0x2a2d14u;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294963768)));
    // 0x2a2d18: 0x17bebe  dsrl32      $s7, $s7, 26
    ctx->pc = 0x2a2d18u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) >> (32 + 26));
    // 0x2a2d1c: 0x31f83fff  andi        $t8, $t7, 0x3FFF
    ctx->pc = 0x2a2d1cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)16383);
    // 0x2a2d20: 0xd7c38  dsll        $t7, $t5, 16
    ctx->pc = 0x2a2d20u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) << 16);
    // 0x2a2d24: 0x30fc025  or          $t8, $t8, $t7
    ctx->pc = 0x2a2d24u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 15));
    // 0x2a2d28: 0xd6c3c  dsll32      $t5, $t5, 16
    ctx->pc = 0x2a2d28u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 16));
    // 0x2a2d2c: 0x177e38  dsll        $t7, $s7, 24
    ctx->pc = 0x2a2d2cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 23) << 24);
    // 0x2a2d30: 0x1f8c025  or          $t8, $t7, $t8
    ctx->pc = 0x2a2d30u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 15) | GPR_U64(ctx, 24));
    // 0x2a2d34: 0x17be3c  dsll32      $s7, $s7, 24
    ctx->pc = 0x2a2d34u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 24));
    // 0x2a2d38: 0x30ec025  or          $t8, $t8, $t6
    ctx->pc = 0x2a2d38u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 14));
    // 0x2a2d3c: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x2a2d3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a2d40: 0x1b86825  or          $t5, $t5, $t8
    ctx->pc = 0x2a2d40u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 24));
    // 0x2a2d44: 0x368e0001  ori         $t6, $s4, 0x1
    ctx->pc = 0x2a2d44u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
    // 0x2a2d48: 0x2edb825  or          $s7, $s7, $t5
    ctx->pc = 0x2a2d48u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 13));
    // 0x2a2d4c: 0x36940003  ori         $s4, $s4, 0x3
    ctx->pc = 0x2a2d4cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)3);
    // 0x2a2d50: 0xfe170030  sd          $s7, 0x30($s0)
    ctx->pc = 0x2a2d50u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 23));
    // 0x2a2d54: 0x3c0d6c01  lui         $t5, 0x6C01
    ctx->pc = 0x2a2d54u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)27649 << 16));
    // 0x2a2d58: 0xfe0c0038  sd          $t4, 0x38($s0)
    ctx->pc = 0x2a2d58u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 12));
    // 0x2a2d5c: 0x3c176c08  lui         $s7, 0x6C08
    ctx->pc = 0x2a2d5cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)27656 << 16));
    // 0x2a2d60: 0xfe000040  sd          $zero, 0x40($s0)
    ctx->pc = 0x2a2d60u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 0));
    // 0x2a2d64: 0x35ad03e8  ori         $t5, $t5, 0x3E8
    ctx->pc = 0x2a2d64u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)1000);
    // 0x2a2d68: 0xfe0b0048  sd          $t3, 0x48($s0)
    ctx->pc = 0x2a2d68u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 11));
    // 0x2a2d6c: 0x3c0c44e0  lui         $t4, 0x44E0
    ctx->pc = 0x2a2d6cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)17632 << 16));
    // 0x2a2d70: 0xfe0a0050  sd          $t2, 0x50($s0)
    ctx->pc = 0x2a2d70u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 10));
    // 0x2a2d74: 0x3c0b0100  lui         $t3, 0x100
    ctx->pc = 0x2a2d74u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)256 << 16));
    // 0x2a2d78: 0xfe1e0058  sd          $fp, 0x58($s0)
    ctx->pc = 0x2a2d78u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 30));
    // 0x2a2d7c: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x2a2d7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a2d80: 0xfe0a0060  sd          $t2, 0x60($s0)
    ctx->pc = 0x2a2d80u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 10));
    // 0x2a2d84: 0x356b0404  ori         $t3, $t3, 0x404
    ctx->pc = 0x2a2d84u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)1028);
    // 0x2a2d88: 0x36ea03f8  ori         $t2, $s7, 0x3F8
    ctx->pc = 0x2a2d88u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)1016);
    // 0x2a2d8c: 0x24170053  addiu       $s7, $zero, 0x53
    ctx->pc = 0x2a2d8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x2a2d90: 0xfe170068  sd          $s7, 0x68($s0)
    ctx->pc = 0x2a2d90u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 23));
    // 0x2a2d94: 0x263700f0  addiu       $s7, $s1, 0xF0
    ctx->pc = 0x2a2d94u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x2a2d98: 0xfe000070  sd          $zero, 0x70($s0)
    ctx->pc = 0x2a2d98u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 0));
    // 0x2a2d9c: 0x17c13c  dsll32      $t8, $s7, 4
    ctx->pc = 0x2a2d9cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 23) << (32 + 4));
    // 0x2a2da0: 0x2417003f  addiu       $s7, $zero, 0x3F
    ctx->pc = 0x2a2da0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2a2da4: 0x18c13e  dsrl32      $t8, $t8, 4
    ctx->pc = 0x2a2da4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) >> (32 + 4));
    // 0x2a2da8: 0xfe170078  sd          $s7, 0x78($s0)
    ctx->pc = 0x2a2da8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 23));
    // 0x2a2dac: 0xfe080080  sd          $t0, 0x80($s0)
    ctx->pc = 0x2a2dacu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 8));
    // 0x2a2db0: 0x18b83c  dsll32      $s7, $t8, 0
    ctx->pc = 0x2a2db0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 24) << (32 + 0));
    // 0x2a2db4: 0xfe070088  sd          $a3, 0x88($s0)
    ctx->pc = 0x2a2db4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 136), GPR_U64(ctx, 7));
    // 0x2a2db8: 0x36c80008  ori         $t0, $s6, 0x8
    ctx->pc = 0x2a2db8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)8);
    // 0x2a2dbc: 0xfe060090  sd          $a2, 0x90($s0)
    ctx->pc = 0x2a2dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 144), GPR_U64(ctx, 6));
    // 0x2a2dc0: 0x2e84025  or          $t0, $s7, $t0
    ctx->pc = 0x2a2dc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 23) | GPR_U64(ctx, 8));
    // 0x2a2dc4: 0xfe0f0098  sd          $t7, 0x98($s0)
    ctx->pc = 0x2a2dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 152), GPR_U64(ctx, 15));
    // 0x2a2dc8: 0x34068002  ori         $a2, $zero, 0x8002
    ctx->pc = 0x2a2dc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x2a2dcc: 0xfe0e00a0  sd          $t6, 0xA0($s0)
    ctx->pc = 0x2a2dccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 160), GPR_U64(ctx, 14));
    // 0x2a2dd0: 0xd39825  or          $s3, $a2, $s3
    ctx->pc = 0x2a2dd0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) | GPR_U64(ctx, 19));
    // 0x2a2dd4: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x2a2dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x2a2dd8: 0x3c172000  lui         $s7, 0x2000
    ctx->pc = 0x2a2dd8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)8192 << 16));
    // 0x2a2ddc: 0xae0d00ac  sw          $t5, 0xAC($s0)
    ctx->pc = 0x2a2ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 13));
    // 0x2a2de0: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x2a2de0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x2a2de4: 0xae0c00b0  sw          $t4, 0xB0($s0)
    ctx->pc = 0x2a2de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 12));
    // 0x2a2de8: 0x260d0100  addiu       $t5, $s0, 0x100
    ctx->pc = 0x2a2de8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x2a2dec: 0x3c0c44f2  lui         $t4, 0x44F2
    ctx->pc = 0x2a2decu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)17650 << 16));
    // 0x2a2df0: 0xd693c  dsll32      $t5, $t5, 4
    ctx->pc = 0x2a2df0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 4));
    // 0x2a2df4: 0xae0c00b4  sw          $t4, 0xB4($s0)
    ctx->pc = 0x2a2df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 12));
    // 0x2a2df8: 0xd693e  dsrl32      $t5, $t5, 4
    ctx->pc = 0x2a2df8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 4));
    // 0x2a2dfc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2a2dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a2e00: 0xd603c  dsll32      $t4, $t5, 0
    ctx->pc = 0x2a2e00u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) << (32 + 0));
    // 0x2a2e04: 0x1976025  or          $t4, $t4, $s7
    ctx->pc = 0x2a2e04u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 23));
    // 0x2a2e08: 0xe60000b8  swc1        $f0, 0xB8($s0)
    ctx->pc = 0x2a2e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
    // 0x2a2e0c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2a2e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2a2e10: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x2a2e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x2a2e14: 0x8e4d0078  lw          $t5, 0x78($s2)
    ctx->pc = 0x2a2e14u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x2a2e18: 0x95ad0002  lhu         $t5, 0x2($t5)
    ctx->pc = 0x2a2e18u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x2a2e1c: 0xd6880  sll         $t5, $t5, 2
    ctx->pc = 0x2a2e1cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x2a2e20: 0x25ad0009  addiu       $t5, $t5, 0x9
    ctx->pc = 0x2a2e20u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 9));
    // 0x2a2e24: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x2a2e24u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x2a2e28: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x2a2e28u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x2a2e2c: 0x1b66825  or          $t5, $t5, $s6
    ctx->pc = 0x2a2e2cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 22));
    // 0x2a2e30: 0xad2825  or          $a1, $a1, $t5
    ctx->pc = 0x2a2e30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 13));
    // 0x2a2e34: 0xfe0500c0  sd          $a1, 0xC0($s0)
    ctx->pc = 0x2a2e34u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 192), GPR_U64(ctx, 5));
    // 0x2a2e38: 0xae0b00c8  sw          $t3, 0xC8($s0)
    ctx->pc = 0x2a2e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 11));
    // 0x2a2e3c: 0xae0a00cc  sw          $t2, 0xCC($s0)
    ctx->pc = 0x2a2e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 10));
    // 0x2a2e40: 0xde250130  ld          $a1, 0x130($s1)
    ctx->pc = 0x2a2e40u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x2a2e44: 0x30a5071f  andi        $a1, $a1, 0x71F
    ctx->pc = 0x2a2e44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1823);
    // 0x2a2e48: 0xfe250130  sd          $a1, 0x130($s1)
    ctx->pc = 0x2a2e48u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 304), GPR_U64(ctx, 5));
    // 0x2a2e4c: 0xfe0800d0  sd          $t0, 0xD0($s0)
    ctx->pc = 0x2a2e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 208), GPR_U64(ctx, 8));
    // 0x2a2e50: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x2a2e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x2a2e54: 0xae0400dc  sw          $a0, 0xDC($s0)
    ctx->pc = 0x2a2e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 4));
    // 0x2a2e58: 0x8c640070  lw          $a0, 0x70($v1)
    ctx->pc = 0x2a2e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x2a2e5c: 0xdc840000  ld          $a0, 0x0($a0)
    ctx->pc = 0x2a2e5cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a2e60: 0xfe0400e0  sd          $a0, 0xE0($s0)
    ctx->pc = 0x2a2e60u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 4));
    // 0x2a2e64: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x2a2e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x2a2e68: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x2a2e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
    // 0x2a2e6c: 0x8c640078  lw          $a0, 0x78($v1)
    ctx->pc = 0x2a2e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x2a2e70: 0x4213c  dsll32      $a0, $a0, 4
    ctx->pc = 0x2a2e70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 4));
    // 0x2a2e74: 0x4213e  dsrl32      $a0, $a0, 4
    ctx->pc = 0x2a2e74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 4));
    // 0x2a2e78: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2a2e78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a2e7c: 0x972025  or          $a0, $a0, $s7
    ctx->pc = 0x2a2e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 23));
    // 0x2a2e80: 0xfe0400f0  sd          $a0, 0xF0($s0)
    ctx->pc = 0x2a2e80u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 240), GPR_U64(ctx, 4));
    // 0x2a2e84: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x2a2e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x2a2e88: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x2a2e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x2a2e8c: 0xfe140100  sd          $s4, 0x100($s0)
    ctx->pc = 0x2a2e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 256), GPR_U64(ctx, 20));
    // 0x2a2e90: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x2a2e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x2a2e94: 0xae15010c  sw          $s5, 0x10C($s0)
    ctx->pc = 0x2a2e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 21));
    // 0x2a2e98: 0xfe130110  sd          $s3, 0x110($s0)
    ctx->pc = 0x2a2e98u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 272), GPR_U64(ctx, 19));
    // 0x2a2e9c: 0xfe190118  sd          $t9, 0x118($s0)
    ctx->pc = 0x2a2e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 280), GPR_U64(ctx, 25));
    // 0x2a2ea0: 0xfe090120  sd          $t1, 0x120($s0)
    ctx->pc = 0x2a2ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 288), GPR_U64(ctx, 9));
    // 0x2a2ea4: 0xfe070128  sd          $a3, 0x128($s0)
    ctx->pc = 0x2a2ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 296), GPR_U64(ctx, 7));
    // 0x2a2ea8: 0xfe000130  sd          $zero, 0x130($s0)
    ctx->pc = 0x2a2ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 304), GPR_U64(ctx, 0));
    // 0x2a2eac: 0xfe0f0138  sd          $t7, 0x138($s0)
    ctx->pc = 0x2a2eacu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 312), GPR_U64(ctx, 15));
    // 0x2a2eb0: 0xfe060140  sd          $a2, 0x140($s0)
    ctx->pc = 0x2a2eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 320), GPR_U64(ctx, 6));
    // 0x2a2eb4: 0xae000148  sw          $zero, 0x148($s0)
    ctx->pc = 0x2a2eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 0));
    // 0x2a2eb8: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x2a2eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x2a2ebc: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x2a2ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x2a2ec0: 0xfc6c0010  sd          $t4, 0x10($v1)
    ctx->pc = 0x2a2ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 12));
    // 0x2a2ec4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2a2ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a2ec8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2a2ec8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a2ecc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2a2eccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a2ed0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a2ed0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a2ed4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a2ed4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a2ed8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a2ed8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a2edc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a2edcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a2ee0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a2ee0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2ee4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a2ee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2ee8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a2ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2eec: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2EECu;
        // 0x2a2ef0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2EF4u;
}
