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

// Function: sub_00137F50
// Address: 0x137f50 - 0x138cf4
void sub_00137F50_0x137f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137F50_0x137f50");
#endif

    switch (ctx->pc) {
        case 0x137fc0u: goto label_137fc0;
        case 0x138040u: goto label_138040;
        case 0x13883cu: goto label_13883c;
        case 0x138840u: goto label_138840;
        case 0x13893cu: goto label_13893c;
        default: break;
    }

    ctx->pc = 0x137f50u;

    // 0x137f50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x137f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x137f54: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x137f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x137f58: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x137f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x137f5c: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x137f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x137f60: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x137f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x137f64: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x137f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x137f68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x137f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x137f6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x137f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x137f70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x137f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x137f74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x137f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x137f78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x137f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x137f7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x137f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x137f80: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x137f80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x137f84: 0xa4800004  sh          $zero, 0x4($a0)
    ctx->pc = 0x137f84u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x137f88: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x137f88u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x137f8c: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x137f8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x137f90: 0xa480000a  sh          $zero, 0xA($a0)
    ctx->pc = 0x137f90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x137f94: 0xa480000e  sh          $zero, 0xE($a0)
    ctx->pc = 0x137f94u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x137f98: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x137f98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x137f9c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x137f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x137fa0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x137fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x137fa4: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x137fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x137fa8: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x137fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x137fac: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x137facu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x137fb0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x137fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x137fb4: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x137fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x137fb8: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x137fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x137fbc: 0x0  nop
    ctx->pc = 0x137fbcu;
    // NOP
label_137fc0:
    // 0x137fc0: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x137fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x137fc4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x137fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x137fc8: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x137fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x137fcc: 0x0  nop
    ctx->pc = 0x137fccu;
    // NOP
    // 0x137fd0: 0x0  nop
    ctx->pc = 0x137fd0u;
    // NOP
    // 0x137fd4: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x137FD4u;
    {
        const bool branch_taken_0x137fd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x137fd4) {
            ctx->pc = 0x137FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137fc0;
        }
    }
    ctx->pc = 0x137FDCu;
    // 0x137fdc: 0x3c16006b  lui         $s6, 0x6B
    ctx->pc = 0x137fdcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)107 << 16));
    // 0x137fe0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x137fe0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137fe4: 0x26d676e0  addiu       $s6, $s6, 0x76E0
    ctx->pc = 0x137fe4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 30432));
    // 0x137fe8: 0x24140e01  addiu       $s4, $zero, 0xE01
    ctx->pc = 0x137fe8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3585));
    // 0x137fec: 0x24130e00  addiu       $s3, $zero, 0xE00
    ctx->pc = 0x137fecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x137ff0: 0x24120d09  addiu       $s2, $zero, 0xD09
    ctx->pc = 0x137ff0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3337));
    // 0x137ff4: 0x24110d08  addiu       $s1, $zero, 0xD08
    ctx->pc = 0x137ff4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3336));
    // 0x137ff8: 0x24100d05  addiu       $s0, $zero, 0xD05
    ctx->pc = 0x137ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3333));
    // 0x137ffc: 0x24190d04  addiu       $t9, $zero, 0xD04
    ctx->pc = 0x137ffcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 3332));
    // 0x138000: 0x24180d03  addiu       $t8, $zero, 0xD03
    ctx->pc = 0x138000u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 3331));
    // 0x138004: 0x240f0d01  addiu       $t7, $zero, 0xD01
    ctx->pc = 0x138004u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3329));
    // 0x138008: 0x240e0c0e  addiu       $t6, $zero, 0xC0E
    ctx->pc = 0x138008u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3086));
    // 0x13800c: 0x240d0c0d  addiu       $t5, $zero, 0xC0D
    ctx->pc = 0x13800cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 3085));
    // 0x138010: 0x240c0c0c  addiu       $t4, $zero, 0xC0C
    ctx->pc = 0x138010u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3084));
    // 0x138014: 0x240b0c03  addiu       $t3, $zero, 0xC03
    ctx->pc = 0x138014u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3075));
    // 0x138018: 0x241e0c02  addiu       $fp, $zero, 0xC02
    ctx->pc = 0x138018u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3074));
    // 0x13801c: 0x240a000e  addiu       $t2, $zero, 0xE
    ctx->pc = 0x13801cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x138020: 0x2409000d  addiu       $t1, $zero, 0xD
    ctx->pc = 0x138020u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x138024: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x138024u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x138028: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x138028u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x13802c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x13802cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x138030: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x138030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x138034: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x138034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x138038: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x138038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x13803c: 0x0  nop
    ctx->pc = 0x13803cu;
    // NOP
label_138040:
    // 0x138040: 0x24170e02  addiu       $s7, $zero, 0xE02
    ctx->pc = 0x138040u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3586));
    // 0x138044: 0x12b70318  beq         $s5, $s7, . + 4 + (0x318 << 2)
    ctx->pc = 0x138044u;
    {
        const bool branch_taken_0x138044 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138044) {
            ctx->pc = 0x138CA8u;
            goto label_138ca8;
        }
    }
    ctx->pc = 0x13804Cu;
    // 0x13804c: 0x12b40314  beq         $s5, $s4, . + 4 + (0x314 << 2)
    ctx->pc = 0x13804Cu;
    {
        const bool branch_taken_0x13804c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 20));
        if (branch_taken_0x13804c) {
            ctx->pc = 0x138CA0u;
            goto label_138ca0;
        }
    }
    ctx->pc = 0x138054u;
    // 0x138054: 0x12b30310  beq         $s5, $s3, . + 4 + (0x310 << 2)
    ctx->pc = 0x138054u;
    {
        const bool branch_taken_0x138054 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 19));
        if (branch_taken_0x138054) {
            ctx->pc = 0x138C98u;
            goto label_138c98;
        }
    }
    ctx->pc = 0x13805Cu;
    // 0x13805c: 0x12b2030c  beq         $s5, $s2, . + 4 + (0x30C << 2)
    ctx->pc = 0x13805Cu;
    {
        const bool branch_taken_0x13805c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 18));
        if (branch_taken_0x13805c) {
            ctx->pc = 0x138C90u;
            goto label_138c90;
        }
    }
    ctx->pc = 0x138064u;
    // 0x138064: 0x12b10308  beq         $s5, $s1, . + 4 + (0x308 << 2)
    ctx->pc = 0x138064u;
    {
        const bool branch_taken_0x138064 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 17));
        if (branch_taken_0x138064) {
            ctx->pc = 0x138C88u;
            goto label_138c88;
        }
    }
    ctx->pc = 0x13806Cu;
    // 0x13806c: 0x12b00304  beq         $s5, $s0, . + 4 + (0x304 << 2)
    ctx->pc = 0x13806Cu;
    {
        const bool branch_taken_0x13806c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 16));
        if (branch_taken_0x13806c) {
            ctx->pc = 0x138C80u;
            goto label_138c80;
        }
    }
    ctx->pc = 0x138074u;
    // 0x138074: 0x12b90300  beq         $s5, $t9, . + 4 + (0x300 << 2)
    ctx->pc = 0x138074u;
    {
        const bool branch_taken_0x138074 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 25));
        if (branch_taken_0x138074) {
            ctx->pc = 0x138C78u;
            goto label_138c78;
        }
    }
    ctx->pc = 0x13807Cu;
    // 0x13807c: 0x12b802fc  beq         $s5, $t8, . + 4 + (0x2FC << 2)
    ctx->pc = 0x13807Cu;
    {
        const bool branch_taken_0x13807c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 24));
        if (branch_taken_0x13807c) {
            ctx->pc = 0x138C70u;
            goto label_138c70;
        }
    }
    ctx->pc = 0x138084u;
    // 0x138084: 0x12af02f8  beq         $s5, $t7, . + 4 + (0x2F8 << 2)
    ctx->pc = 0x138084u;
    {
        const bool branch_taken_0x138084 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 15));
        if (branch_taken_0x138084) {
            ctx->pc = 0x138C68u;
            goto label_138c68;
        }
    }
    ctx->pc = 0x13808Cu;
    // 0x13808c: 0x12ae02f4  beq         $s5, $t6, . + 4 + (0x2F4 << 2)
    ctx->pc = 0x13808Cu;
    {
        const bool branch_taken_0x13808c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 14));
        if (branch_taken_0x13808c) {
            ctx->pc = 0x138C60u;
            goto label_138c60;
        }
    }
    ctx->pc = 0x138094u;
    // 0x138094: 0x12ad02f0  beq         $s5, $t5, . + 4 + (0x2F0 << 2)
    ctx->pc = 0x138094u;
    {
        const bool branch_taken_0x138094 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 13));
        if (branch_taken_0x138094) {
            ctx->pc = 0x138C58u;
            goto label_138c58;
        }
    }
    ctx->pc = 0x13809Cu;
    // 0x13809c: 0x12ac02ec  beq         $s5, $t4, . + 4 + (0x2EC << 2)
    ctx->pc = 0x13809Cu;
    {
        const bool branch_taken_0x13809c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 12));
        if (branch_taken_0x13809c) {
            ctx->pc = 0x138C50u;
            goto label_138c50;
        }
    }
    ctx->pc = 0x1380A4u;
    // 0x1380a4: 0x12ab02e8  beq         $s5, $t3, . + 4 + (0x2E8 << 2)
    ctx->pc = 0x1380A4u;
    {
        const bool branch_taken_0x1380a4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 11));
        if (branch_taken_0x1380a4) {
            ctx->pc = 0x138C48u;
            goto label_138c48;
        }
    }
    ctx->pc = 0x1380ACu;
    // 0x1380ac: 0x12be02e4  beq         $s5, $fp, . + 4 + (0x2E4 << 2)
    ctx->pc = 0x1380ACu;
    {
        const bool branch_taken_0x1380ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 30));
        ctx->pc = 0x1380B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380ACu;
        // 0x1380b0: 0x24170b06  addiu       $s7, $zero, 0xB06 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2822));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380ac) {
            ctx->pc = 0x138C40u;
            goto label_138c40;
        }
    }
    ctx->pc = 0x1380B4u;
    // 0x1380b4: 0x12b702e0  beq         $s5, $s7, . + 4 + (0x2E0 << 2)
    ctx->pc = 0x1380B4u;
    {
        const bool branch_taken_0x1380b4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1380b4) {
            ctx->pc = 0x138C38u;
            goto label_138c38;
        }
    }
    ctx->pc = 0x1380BCu;
    // 0x1380bc: 0x24170b05  addiu       $s7, $zero, 0xB05
    ctx->pc = 0x1380bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2821));
    // 0x1380c0: 0x12b702db  beq         $s5, $s7, . + 4 + (0x2DB << 2)
    ctx->pc = 0x1380C0u;
    {
        const bool branch_taken_0x1380c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1380C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380C0u;
        // 0x1380c4: 0x24170b04  addiu       $s7, $zero, 0xB04 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2820));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380c0) {
            ctx->pc = 0x138C30u;
            goto label_138c30;
        }
    }
    ctx->pc = 0x1380C8u;
    // 0x1380c8: 0x12b702d7  beq         $s5, $s7, . + 4 + (0x2D7 << 2)
    ctx->pc = 0x1380C8u;
    {
        const bool branch_taken_0x1380c8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1380c8) {
            ctx->pc = 0x138C28u;
            goto label_138c28;
        }
    }
    ctx->pc = 0x1380D0u;
    // 0x1380d0: 0x24170b03  addiu       $s7, $zero, 0xB03
    ctx->pc = 0x1380d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2819));
    // 0x1380d4: 0x12b702d2  beq         $s5, $s7, . + 4 + (0x2D2 << 2)
    ctx->pc = 0x1380D4u;
    {
        const bool branch_taken_0x1380d4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1380D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380D4u;
        // 0x1380d8: 0x24170b02  addiu       $s7, $zero, 0xB02 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2818));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380d4) {
            ctx->pc = 0x138C20u;
            goto label_138c20;
        }
    }
    ctx->pc = 0x1380DCu;
    // 0x1380dc: 0x12b702ce  beq         $s5, $s7, . + 4 + (0x2CE << 2)
    ctx->pc = 0x1380DCu;
    {
        const bool branch_taken_0x1380dc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1380dc) {
            ctx->pc = 0x138C18u;
            goto label_138c18;
        }
    }
    ctx->pc = 0x1380E4u;
    // 0x1380e4: 0x24170b01  addiu       $s7, $zero, 0xB01
    ctx->pc = 0x1380e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2817));
    // 0x1380e8: 0x12b702c9  beq         $s5, $s7, . + 4 + (0x2C9 << 2)
    ctx->pc = 0x1380E8u;
    {
        const bool branch_taken_0x1380e8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1380ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380E8u;
        // 0x1380ec: 0x24170b00  addiu       $s7, $zero, 0xB00 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380e8) {
            ctx->pc = 0x138C10u;
            goto label_138c10;
        }
    }
    ctx->pc = 0x1380F0u;
    // 0x1380f0: 0x12b702c5  beq         $s5, $s7, . + 4 + (0x2C5 << 2)
    ctx->pc = 0x1380F0u;
    {
        const bool branch_taken_0x1380f0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1380f0) {
            ctx->pc = 0x138C08u;
            goto label_138c08;
        }
    }
    ctx->pc = 0x1380F8u;
    // 0x1380f8: 0x24170a07  addiu       $s7, $zero, 0xA07
    ctx->pc = 0x1380f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2567));
    // 0x1380fc: 0x12b702c0  beq         $s5, $s7, . + 4 + (0x2C0 << 2)
    ctx->pc = 0x1380FCu;
    {
        const bool branch_taken_0x1380fc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380FCu;
        // 0x138100: 0x24170a06  addiu       $s7, $zero, 0xA06 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2566));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380fc) {
            ctx->pc = 0x138C00u;
            goto label_138c00;
        }
    }
    ctx->pc = 0x138104u;
    // 0x138104: 0x12b702bc  beq         $s5, $s7, . + 4 + (0x2BC << 2)
    ctx->pc = 0x138104u;
    {
        const bool branch_taken_0x138104 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138104) {
            ctx->pc = 0x138BF8u;
            goto label_138bf8;
        }
    }
    ctx->pc = 0x13810Cu;
    // 0x13810c: 0x24170a04  addiu       $s7, $zero, 0xA04
    ctx->pc = 0x13810cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2564));
    // 0x138110: 0x12b702b7  beq         $s5, $s7, . + 4 + (0x2B7 << 2)
    ctx->pc = 0x138110u;
    {
        const bool branch_taken_0x138110 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138110u;
        // 0x138114: 0x24170a03  addiu       $s7, $zero, 0xA03 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2563));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138110) {
            ctx->pc = 0x138BF0u;
            goto label_138bf0;
        }
    }
    ctx->pc = 0x138118u;
    // 0x138118: 0x12b702b3  beq         $s5, $s7, . + 4 + (0x2B3 << 2)
    ctx->pc = 0x138118u;
    {
        const bool branch_taken_0x138118 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138118) {
            ctx->pc = 0x138BE8u;
            goto label_138be8;
        }
    }
    ctx->pc = 0x138120u;
    // 0x138120: 0x24170a02  addiu       $s7, $zero, 0xA02
    ctx->pc = 0x138120u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2562));
    // 0x138124: 0x12b702ae  beq         $s5, $s7, . + 4 + (0x2AE << 2)
    ctx->pc = 0x138124u;
    {
        const bool branch_taken_0x138124 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138124u;
        // 0x138128: 0x24170a01  addiu       $s7, $zero, 0xA01 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2561));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138124) {
            ctx->pc = 0x138BE0u;
            goto label_138be0;
        }
    }
    ctx->pc = 0x13812Cu;
    // 0x13812c: 0x12b702aa  beq         $s5, $s7, . + 4 + (0x2AA << 2)
    ctx->pc = 0x13812Cu;
    {
        const bool branch_taken_0x13812c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x13812c) {
            ctx->pc = 0x138BD8u;
            goto label_138bd8;
        }
    }
    ctx->pc = 0x138134u;
    // 0x138134: 0x24170a00  addiu       $s7, $zero, 0xA00
    ctx->pc = 0x138134u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2560));
    // 0x138138: 0x12b702a5  beq         $s5, $s7, . + 4 + (0x2A5 << 2)
    ctx->pc = 0x138138u;
    {
        const bool branch_taken_0x138138 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x13813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138138u;
        // 0x13813c: 0x24170928  addiu       $s7, $zero, 0x928 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138138) {
            ctx->pc = 0x138BD0u;
            goto label_138bd0;
        }
    }
    ctx->pc = 0x138140u;
    // 0x138140: 0x12b702a1  beq         $s5, $s7, . + 4 + (0x2A1 << 2)
    ctx->pc = 0x138140u;
    {
        const bool branch_taken_0x138140 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138140) {
            ctx->pc = 0x138BC8u;
            goto label_138bc8;
        }
    }
    ctx->pc = 0x138148u;
    // 0x138148: 0x24170927  addiu       $s7, $zero, 0x927
    ctx->pc = 0x138148u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2343));
    // 0x13814c: 0x12b7029c  beq         $s5, $s7, . + 4 + (0x29C << 2)
    ctx->pc = 0x13814Cu;
    {
        const bool branch_taken_0x13814c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13814Cu;
        // 0x138150: 0x24170925  addiu       $s7, $zero, 0x925 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2341));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13814c) {
            ctx->pc = 0x138BC0u;
            goto label_138bc0;
        }
    }
    ctx->pc = 0x138154u;
    // 0x138154: 0x12b70298  beq         $s5, $s7, . + 4 + (0x298 << 2)
    ctx->pc = 0x138154u;
    {
        const bool branch_taken_0x138154 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138154) {
            ctx->pc = 0x138BB8u;
            goto label_138bb8;
        }
    }
    ctx->pc = 0x13815Cu;
    // 0x13815c: 0x24170923  addiu       $s7, $zero, 0x923
    ctx->pc = 0x13815cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2339));
    // 0x138160: 0x12b70293  beq         $s5, $s7, . + 4 + (0x293 << 2)
    ctx->pc = 0x138160u;
    {
        const bool branch_taken_0x138160 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138160u;
        // 0x138164: 0x2417091a  addiu       $s7, $zero, 0x91A (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2330));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138160) {
            ctx->pc = 0x138BB0u;
            goto label_138bb0;
        }
    }
    ctx->pc = 0x138168u;
    // 0x138168: 0x12b7028f  beq         $s5, $s7, . + 4 + (0x28F << 2)
    ctx->pc = 0x138168u;
    {
        const bool branch_taken_0x138168 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138168) {
            ctx->pc = 0x138BA8u;
            goto label_138ba8;
        }
    }
    ctx->pc = 0x138170u;
    // 0x138170: 0x24170919  addiu       $s7, $zero, 0x919
    ctx->pc = 0x138170u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2329));
    // 0x138174: 0x12b7028a  beq         $s5, $s7, . + 4 + (0x28A << 2)
    ctx->pc = 0x138174u;
    {
        const bool branch_taken_0x138174 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138174u;
        // 0x138178: 0x24170918  addiu       $s7, $zero, 0x918 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138174) {
            ctx->pc = 0x138BA0u;
            goto label_138ba0;
        }
    }
    ctx->pc = 0x13817Cu;
    // 0x13817c: 0x12b70286  beq         $s5, $s7, . + 4 + (0x286 << 2)
    ctx->pc = 0x13817Cu;
    {
        const bool branch_taken_0x13817c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x13817c) {
            ctx->pc = 0x138B98u;
            goto label_138b98;
        }
    }
    ctx->pc = 0x138184u;
    // 0x138184: 0x24170910  addiu       $s7, $zero, 0x910
    ctx->pc = 0x138184u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2320));
    // 0x138188: 0x12b70281  beq         $s5, $s7, . + 4 + (0x281 << 2)
    ctx->pc = 0x138188u;
    {
        const bool branch_taken_0x138188 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x13818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138188u;
        // 0x13818c: 0x2417090d  addiu       $s7, $zero, 0x90D (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2317));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138188) {
            ctx->pc = 0x138B90u;
            goto label_138b90;
        }
    }
    ctx->pc = 0x138190u;
    // 0x138190: 0x12b7027d  beq         $s5, $s7, . + 4 + (0x27D << 2)
    ctx->pc = 0x138190u;
    {
        const bool branch_taken_0x138190 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138190) {
            ctx->pc = 0x138B88u;
            goto label_138b88;
        }
    }
    ctx->pc = 0x138198u;
    // 0x138198: 0x2417090a  addiu       $s7, $zero, 0x90A
    ctx->pc = 0x138198u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2314));
    // 0x13819c: 0x12b70278  beq         $s5, $s7, . + 4 + (0x278 << 2)
    ctx->pc = 0x13819Cu;
    {
        const bool branch_taken_0x13819c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1381A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13819Cu;
        // 0x1381a0: 0x24170909  addiu       $s7, $zero, 0x909 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2313));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13819c) {
            ctx->pc = 0x138B80u;
            goto label_138b80;
        }
    }
    ctx->pc = 0x1381A4u;
    // 0x1381a4: 0x12b70274  beq         $s5, $s7, . + 4 + (0x274 << 2)
    ctx->pc = 0x1381A4u;
    {
        const bool branch_taken_0x1381a4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1381a4) {
            ctx->pc = 0x138B78u;
            goto label_138b78;
        }
    }
    ctx->pc = 0x1381ACu;
    // 0x1381ac: 0x24170908  addiu       $s7, $zero, 0x908
    ctx->pc = 0x1381acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2312));
    // 0x1381b0: 0x12b7026f  beq         $s5, $s7, . + 4 + (0x26F << 2)
    ctx->pc = 0x1381B0u;
    {
        const bool branch_taken_0x1381b0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1381B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1381B0u;
        // 0x1381b4: 0x24170904  addiu       $s7, $zero, 0x904 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1381b0) {
            ctx->pc = 0x138B70u;
            goto label_138b70;
        }
    }
    ctx->pc = 0x1381B8u;
    // 0x1381b8: 0x12b7026b  beq         $s5, $s7, . + 4 + (0x26B << 2)
    ctx->pc = 0x1381B8u;
    {
        const bool branch_taken_0x1381b8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1381b8) {
            ctx->pc = 0x138B68u;
            goto label_138b68;
        }
    }
    ctx->pc = 0x1381C0u;
    // 0x1381c0: 0x2417080c  addiu       $s7, $zero, 0x80C
    ctx->pc = 0x1381c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x1381c4: 0x12b70266  beq         $s5, $s7, . + 4 + (0x266 << 2)
    ctx->pc = 0x1381C4u;
    {
        const bool branch_taken_0x1381c4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1381C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1381C4u;
        // 0x1381c8: 0x2417080b  addiu       $s7, $zero, 0x80B (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2059));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1381c4) {
            ctx->pc = 0x138B60u;
            goto label_138b60;
        }
    }
    ctx->pc = 0x1381CCu;
    // 0x1381cc: 0x12b70262  beq         $s5, $s7, . + 4 + (0x262 << 2)
    ctx->pc = 0x1381CCu;
    {
        const bool branch_taken_0x1381cc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1381cc) {
            ctx->pc = 0x138B58u;
            goto label_138b58;
        }
    }
    ctx->pc = 0x1381D4u;
    // 0x1381d4: 0x24170809  addiu       $s7, $zero, 0x809
    ctx->pc = 0x1381d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2057));
    // 0x1381d8: 0x12b7025d  beq         $s5, $s7, . + 4 + (0x25D << 2)
    ctx->pc = 0x1381D8u;
    {
        const bool branch_taken_0x1381d8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1381DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1381D8u;
        // 0x1381dc: 0x24170808  addiu       $s7, $zero, 0x808 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1381d8) {
            ctx->pc = 0x138B50u;
            goto label_138b50;
        }
    }
    ctx->pc = 0x1381E0u;
    // 0x1381e0: 0x12b70259  beq         $s5, $s7, . + 4 + (0x259 << 2)
    ctx->pc = 0x1381E0u;
    {
        const bool branch_taken_0x1381e0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1381e0) {
            ctx->pc = 0x138B48u;
            goto label_138b48;
        }
    }
    ctx->pc = 0x1381E8u;
    // 0x1381e8: 0x24170807  addiu       $s7, $zero, 0x807
    ctx->pc = 0x1381e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2055));
    // 0x1381ec: 0x12b70254  beq         $s5, $s7, . + 4 + (0x254 << 2)
    ctx->pc = 0x1381ECu;
    {
        const bool branch_taken_0x1381ec = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1381F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1381ECu;
        // 0x1381f0: 0x24170806  addiu       $s7, $zero, 0x806 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1381ec) {
            ctx->pc = 0x138B40u;
            goto label_138b40;
        }
    }
    ctx->pc = 0x1381F4u;
    // 0x1381f4: 0x12b70250  beq         $s5, $s7, . + 4 + (0x250 << 2)
    ctx->pc = 0x1381F4u;
    {
        const bool branch_taken_0x1381f4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1381f4) {
            ctx->pc = 0x138B38u;
            goto label_138b38;
        }
    }
    ctx->pc = 0x1381FCu;
    // 0x1381fc: 0x24170805  addiu       $s7, $zero, 0x805
    ctx->pc = 0x1381fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2053));
    // 0x138200: 0x12b7024b  beq         $s5, $s7, . + 4 + (0x24B << 2)
    ctx->pc = 0x138200u;
    {
        const bool branch_taken_0x138200 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138200u;
        // 0x138204: 0x24170804  addiu       $s7, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138200) {
            ctx->pc = 0x138B30u;
            goto label_138b30;
        }
    }
    ctx->pc = 0x138208u;
    // 0x138208: 0x12b70247  beq         $s5, $s7, . + 4 + (0x247 << 2)
    ctx->pc = 0x138208u;
    {
        const bool branch_taken_0x138208 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138208) {
            ctx->pc = 0x138B28u;
            goto label_138b28;
        }
    }
    ctx->pc = 0x138210u;
    // 0x138210: 0x24170803  addiu       $s7, $zero, 0x803
    ctx->pc = 0x138210u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
    // 0x138214: 0x12b70242  beq         $s5, $s7, . + 4 + (0x242 << 2)
    ctx->pc = 0x138214u;
    {
        const bool branch_taken_0x138214 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138214u;
        // 0x138218: 0x24170802  addiu       $s7, $zero, 0x802 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138214) {
            ctx->pc = 0x138B20u;
            goto label_138b20;
        }
    }
    ctx->pc = 0x13821Cu;
    // 0x13821c: 0x12b7023e  beq         $s5, $s7, . + 4 + (0x23E << 2)
    ctx->pc = 0x13821Cu;
    {
        const bool branch_taken_0x13821c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x13821c) {
            ctx->pc = 0x138B18u;
            goto label_138b18;
        }
    }
    ctx->pc = 0x138224u;
    // 0x138224: 0x24170801  addiu       $s7, $zero, 0x801
    ctx->pc = 0x138224u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
    // 0x138228: 0x12b70239  beq         $s5, $s7, . + 4 + (0x239 << 2)
    ctx->pc = 0x138228u;
    {
        const bool branch_taken_0x138228 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x13822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138228u;
        // 0x13822c: 0x2417071b  addiu       $s7, $zero, 0x71B (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1819));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138228) {
            ctx->pc = 0x138B10u;
            goto label_138b10;
        }
    }
    ctx->pc = 0x138230u;
    // 0x138230: 0x12b70235  beq         $s5, $s7, . + 4 + (0x235 << 2)
    ctx->pc = 0x138230u;
    {
        const bool branch_taken_0x138230 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138230) {
            ctx->pc = 0x138B08u;
            goto label_138b08;
        }
    }
    ctx->pc = 0x138238u;
    // 0x138238: 0x24170719  addiu       $s7, $zero, 0x719
    ctx->pc = 0x138238u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1817));
    // 0x13823c: 0x12b70230  beq         $s5, $s7, . + 4 + (0x230 << 2)
    ctx->pc = 0x13823Cu;
    {
        const bool branch_taken_0x13823c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13823Cu;
        // 0x138240: 0x24170718  addiu       $s7, $zero, 0x718 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13823c) {
            ctx->pc = 0x138B00u;
            goto label_138b00;
        }
    }
    ctx->pc = 0x138244u;
    // 0x138244: 0x12b7022c  beq         $s5, $s7, . + 4 + (0x22C << 2)
    ctx->pc = 0x138244u;
    {
        const bool branch_taken_0x138244 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138244) {
            ctx->pc = 0x138AF8u;
            goto label_138af8;
        }
    }
    ctx->pc = 0x13824Cu;
    // 0x13824c: 0x24170717  addiu       $s7, $zero, 0x717
    ctx->pc = 0x13824cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1815));
    // 0x138250: 0x12b70227  beq         $s5, $s7, . + 4 + (0x227 << 2)
    ctx->pc = 0x138250u;
    {
        const bool branch_taken_0x138250 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138250u;
        // 0x138254: 0x24170716  addiu       $s7, $zero, 0x716 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1814));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138250) {
            ctx->pc = 0x138AF0u;
            goto label_138af0;
        }
    }
    ctx->pc = 0x138258u;
    // 0x138258: 0x12b70223  beq         $s5, $s7, . + 4 + (0x223 << 2)
    ctx->pc = 0x138258u;
    {
        const bool branch_taken_0x138258 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138258) {
            ctx->pc = 0x138AE8u;
            goto label_138ae8;
        }
    }
    ctx->pc = 0x138260u;
    // 0x138260: 0x24170715  addiu       $s7, $zero, 0x715
    ctx->pc = 0x138260u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1813));
    // 0x138264: 0x12b7021e  beq         $s5, $s7, . + 4 + (0x21E << 2)
    ctx->pc = 0x138264u;
    {
        const bool branch_taken_0x138264 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138264u;
        // 0x138268: 0x24170714  addiu       $s7, $zero, 0x714 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1812));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138264) {
            ctx->pc = 0x138AE0u;
            goto label_138ae0;
        }
    }
    ctx->pc = 0x13826Cu;
    // 0x13826c: 0x12b7021a  beq         $s5, $s7, . + 4 + (0x21A << 2)
    ctx->pc = 0x13826Cu;
    {
        const bool branch_taken_0x13826c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x13826c) {
            ctx->pc = 0x138AD8u;
            goto label_138ad8;
        }
    }
    ctx->pc = 0x138274u;
    // 0x138274: 0x24170713  addiu       $s7, $zero, 0x713
    ctx->pc = 0x138274u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1811));
    // 0x138278: 0x12b70215  beq         $s5, $s7, . + 4 + (0x215 << 2)
    ctx->pc = 0x138278u;
    {
        const bool branch_taken_0x138278 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x13827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138278u;
        // 0x13827c: 0x24170712  addiu       $s7, $zero, 0x712 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1810));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138278) {
            ctx->pc = 0x138AD0u;
            goto label_138ad0;
        }
    }
    ctx->pc = 0x138280u;
    // 0x138280: 0x12b70211  beq         $s5, $s7, . + 4 + (0x211 << 2)
    ctx->pc = 0x138280u;
    {
        const bool branch_taken_0x138280 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138280) {
            ctx->pc = 0x138AC8u;
            goto label_138ac8;
        }
    }
    ctx->pc = 0x138288u;
    // 0x138288: 0x24170711  addiu       $s7, $zero, 0x711
    ctx->pc = 0x138288u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1809));
    // 0x13828c: 0x12b7020c  beq         $s5, $s7, . + 4 + (0x20C << 2)
    ctx->pc = 0x13828Cu;
    {
        const bool branch_taken_0x13828c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13828Cu;
        // 0x138290: 0x24170710  addiu       $s7, $zero, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13828c) {
            ctx->pc = 0x138AC0u;
            goto label_138ac0;
        }
    }
    ctx->pc = 0x138294u;
    // 0x138294: 0x12b70208  beq         $s5, $s7, . + 4 + (0x208 << 2)
    ctx->pc = 0x138294u;
    {
        const bool branch_taken_0x138294 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138294) {
            ctx->pc = 0x138AB8u;
            goto label_138ab8;
        }
    }
    ctx->pc = 0x13829Cu;
    // 0x13829c: 0x2417070c  addiu       $s7, $zero, 0x70C
    ctx->pc = 0x13829cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1804));
    // 0x1382a0: 0x12b70203  beq         $s5, $s7, . + 4 + (0x203 << 2)
    ctx->pc = 0x1382A0u;
    {
        const bool branch_taken_0x1382a0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1382A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1382A0u;
        // 0x1382a4: 0x2417070b  addiu       $s7, $zero, 0x70B (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1803));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1382a0) {
            ctx->pc = 0x138AB0u;
            goto label_138ab0;
        }
    }
    ctx->pc = 0x1382A8u;
    // 0x1382a8: 0x12b701ff  beq         $s5, $s7, . + 4 + (0x1FF << 2)
    ctx->pc = 0x1382A8u;
    {
        const bool branch_taken_0x1382a8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1382a8) {
            ctx->pc = 0x138AA8u;
            goto label_138aa8;
        }
    }
    ctx->pc = 0x1382B0u;
    // 0x1382b0: 0x24170709  addiu       $s7, $zero, 0x709
    ctx->pc = 0x1382b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1801));
    // 0x1382b4: 0x12b701fa  beq         $s5, $s7, . + 4 + (0x1FA << 2)
    ctx->pc = 0x1382B4u;
    {
        const bool branch_taken_0x1382b4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1382B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1382B4u;
        // 0x1382b8: 0x24170708  addiu       $s7, $zero, 0x708 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1382b4) {
            ctx->pc = 0x138AA0u;
            goto label_138aa0;
        }
    }
    ctx->pc = 0x1382BCu;
    // 0x1382bc: 0x12b701f6  beq         $s5, $s7, . + 4 + (0x1F6 << 2)
    ctx->pc = 0x1382BCu;
    {
        const bool branch_taken_0x1382bc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1382bc) {
            ctx->pc = 0x138A98u;
            goto label_138a98;
        }
    }
    ctx->pc = 0x1382C4u;
    // 0x1382c4: 0x24170707  addiu       $s7, $zero, 0x707
    ctx->pc = 0x1382c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1799));
    // 0x1382c8: 0x12b701f1  beq         $s5, $s7, . + 4 + (0x1F1 << 2)
    ctx->pc = 0x1382C8u;
    {
        const bool branch_taken_0x1382c8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1382CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1382C8u;
        // 0x1382cc: 0x24170706  addiu       $s7, $zero, 0x706 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1798));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1382c8) {
            ctx->pc = 0x138A90u;
            goto label_138a90;
        }
    }
    ctx->pc = 0x1382D0u;
    // 0x1382d0: 0x12b701ed  beq         $s5, $s7, . + 4 + (0x1ED << 2)
    ctx->pc = 0x1382D0u;
    {
        const bool branch_taken_0x1382d0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1382d0) {
            ctx->pc = 0x138A88u;
            goto label_138a88;
        }
    }
    ctx->pc = 0x1382D8u;
    // 0x1382d8: 0x24170705  addiu       $s7, $zero, 0x705
    ctx->pc = 0x1382d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1797));
    // 0x1382dc: 0x12b701e8  beq         $s5, $s7, . + 4 + (0x1E8 << 2)
    ctx->pc = 0x1382DCu;
    {
        const bool branch_taken_0x1382dc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1382E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1382DCu;
        // 0x1382e0: 0x24170704  addiu       $s7, $zero, 0x704 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1796));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1382dc) {
            ctx->pc = 0x138A80u;
            goto label_138a80;
        }
    }
    ctx->pc = 0x1382E4u;
    // 0x1382e4: 0x12b701e4  beq         $s5, $s7, . + 4 + (0x1E4 << 2)
    ctx->pc = 0x1382E4u;
    {
        const bool branch_taken_0x1382e4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1382e4) {
            ctx->pc = 0x138A78u;
            goto label_138a78;
        }
    }
    ctx->pc = 0x1382ECu;
    // 0x1382ec: 0x24170703  addiu       $s7, $zero, 0x703
    ctx->pc = 0x1382ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1795));
    // 0x1382f0: 0x12b701df  beq         $s5, $s7, . + 4 + (0x1DF << 2)
    ctx->pc = 0x1382F0u;
    {
        const bool branch_taken_0x1382f0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1382F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1382F0u;
        // 0x1382f4: 0x24170702  addiu       $s7, $zero, 0x702 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1794));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1382f0) {
            ctx->pc = 0x138A70u;
            goto label_138a70;
        }
    }
    ctx->pc = 0x1382F8u;
    // 0x1382f8: 0x12b701db  beq         $s5, $s7, . + 4 + (0x1DB << 2)
    ctx->pc = 0x1382F8u;
    {
        const bool branch_taken_0x1382f8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1382f8) {
            ctx->pc = 0x138A68u;
            goto label_138a68;
        }
    }
    ctx->pc = 0x138300u;
    // 0x138300: 0x24170701  addiu       $s7, $zero, 0x701
    ctx->pc = 0x138300u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1793));
    // 0x138304: 0x12b701d6  beq         $s5, $s7, . + 4 + (0x1D6 << 2)
    ctx->pc = 0x138304u;
    {
        const bool branch_taken_0x138304 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138304u;
        // 0x138308: 0x24170700  addiu       $s7, $zero, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138304) {
            ctx->pc = 0x138A60u;
            goto label_138a60;
        }
    }
    ctx->pc = 0x13830Cu;
    // 0x13830c: 0x12b701d2  beq         $s5, $s7, . + 4 + (0x1D2 << 2)
    ctx->pc = 0x13830Cu;
    {
        const bool branch_taken_0x13830c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x13830c) {
            ctx->pc = 0x138A58u;
            goto label_138a58;
        }
    }
    ctx->pc = 0x138314u;
    // 0x138314: 0x24170604  addiu       $s7, $zero, 0x604
    ctx->pc = 0x138314u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1540));
    // 0x138318: 0x12b701cd  beq         $s5, $s7, . + 4 + (0x1CD << 2)
    ctx->pc = 0x138318u;
    {
        const bool branch_taken_0x138318 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x13831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138318u;
        // 0x13831c: 0x24170603  addiu       $s7, $zero, 0x603 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1539));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138318) {
            ctx->pc = 0x138A50u;
            goto label_138a50;
        }
    }
    ctx->pc = 0x138320u;
    // 0x138320: 0x12b701c9  beq         $s5, $s7, . + 4 + (0x1C9 << 2)
    ctx->pc = 0x138320u;
    {
        const bool branch_taken_0x138320 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138320) {
            ctx->pc = 0x138A48u;
            goto label_138a48;
        }
    }
    ctx->pc = 0x138328u;
    // 0x138328: 0x24170602  addiu       $s7, $zero, 0x602
    ctx->pc = 0x138328u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1538));
    // 0x13832c: 0x12b701c4  beq         $s5, $s7, . + 4 + (0x1C4 << 2)
    ctx->pc = 0x13832Cu;
    {
        const bool branch_taken_0x13832c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13832Cu;
        // 0x138330: 0x24170601  addiu       $s7, $zero, 0x601 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1537));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13832c) {
            ctx->pc = 0x138A40u;
            goto label_138a40;
        }
    }
    ctx->pc = 0x138334u;
    // 0x138334: 0x12b701c0  beq         $s5, $s7, . + 4 + (0x1C0 << 2)
    ctx->pc = 0x138334u;
    {
        const bool branch_taken_0x138334 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138334) {
            ctx->pc = 0x138A38u;
            goto label_138a38;
        }
    }
    ctx->pc = 0x13833Cu;
    // 0x13833c: 0x24170600  addiu       $s7, $zero, 0x600
    ctx->pc = 0x13833cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x138340: 0x12b701bb  beq         $s5, $s7, . + 4 + (0x1BB << 2)
    ctx->pc = 0x138340u;
    {
        const bool branch_taken_0x138340 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138340u;
        // 0x138344: 0x24170510  addiu       $s7, $zero, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138340) {
            ctx->pc = 0x138A30u;
            goto label_138a30;
        }
    }
    ctx->pc = 0x138348u;
    // 0x138348: 0x12b701b7  beq         $s5, $s7, . + 4 + (0x1B7 << 2)
    ctx->pc = 0x138348u;
    {
        const bool branch_taken_0x138348 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138348) {
            ctx->pc = 0x138A28u;
            goto label_138a28;
        }
    }
    ctx->pc = 0x138350u;
    // 0x138350: 0x2417050c  addiu       $s7, $zero, 0x50C
    ctx->pc = 0x138350u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x138354: 0x12b701b2  beq         $s5, $s7, . + 4 + (0x1B2 << 2)
    ctx->pc = 0x138354u;
    {
        const bool branch_taken_0x138354 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138354u;
        // 0x138358: 0x2417050b  addiu       $s7, $zero, 0x50B (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138354) {
            ctx->pc = 0x138A20u;
            goto label_138a20;
        }
    }
    ctx->pc = 0x13835Cu;
    // 0x13835c: 0x12b701ae  beq         $s5, $s7, . + 4 + (0x1AE << 2)
    ctx->pc = 0x13835Cu;
    {
        const bool branch_taken_0x13835c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x13835c) {
            ctx->pc = 0x138A18u;
            goto label_138a18;
        }
    }
    ctx->pc = 0x138364u;
    // 0x138364: 0x2417050a  addiu       $s7, $zero, 0x50A
    ctx->pc = 0x138364u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1290));
    // 0x138368: 0x12b701a9  beq         $s5, $s7, . + 4 + (0x1A9 << 2)
    ctx->pc = 0x138368u;
    {
        const bool branch_taken_0x138368 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x13836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138368u;
        // 0x13836c: 0x24170509  addiu       $s7, $zero, 0x509 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138368) {
            ctx->pc = 0x138A10u;
            goto label_138a10;
        }
    }
    ctx->pc = 0x138370u;
    // 0x138370: 0x12b701a5  beq         $s5, $s7, . + 4 + (0x1A5 << 2)
    ctx->pc = 0x138370u;
    {
        const bool branch_taken_0x138370 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138370) {
            ctx->pc = 0x138A08u;
            goto label_138a08;
        }
    }
    ctx->pc = 0x138378u;
    // 0x138378: 0x24170508  addiu       $s7, $zero, 0x508
    ctx->pc = 0x138378u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1288));
    // 0x13837c: 0x12b701a0  beq         $s5, $s7, . + 4 + (0x1A0 << 2)
    ctx->pc = 0x13837Cu;
    {
        const bool branch_taken_0x13837c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13837Cu;
        // 0x138380: 0x24170507  addiu       $s7, $zero, 0x507 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13837c) {
            ctx->pc = 0x138A00u;
            goto label_138a00;
        }
    }
    ctx->pc = 0x138384u;
    // 0x138384: 0x12b7019c  beq         $s5, $s7, . + 4 + (0x19C << 2)
    ctx->pc = 0x138384u;
    {
        const bool branch_taken_0x138384 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138384) {
            ctx->pc = 0x1389F8u;
            goto label_1389f8;
        }
    }
    ctx->pc = 0x13838Cu;
    // 0x13838c: 0x24170506  addiu       $s7, $zero, 0x506
    ctx->pc = 0x13838cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1286));
    // 0x138390: 0x12b70197  beq         $s5, $s7, . + 4 + (0x197 << 2)
    ctx->pc = 0x138390u;
    {
        const bool branch_taken_0x138390 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138390u;
        // 0x138394: 0x24170505  addiu       $s7, $zero, 0x505 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138390) {
            ctx->pc = 0x1389F0u;
            goto label_1389f0;
        }
    }
    ctx->pc = 0x138398u;
    // 0x138398: 0x12b70193  beq         $s5, $s7, . + 4 + (0x193 << 2)
    ctx->pc = 0x138398u;
    {
        const bool branch_taken_0x138398 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138398) {
            ctx->pc = 0x1389E8u;
            goto label_1389e8;
        }
    }
    ctx->pc = 0x1383A0u;
    // 0x1383a0: 0x24170504  addiu       $s7, $zero, 0x504
    ctx->pc = 0x1383a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x1383a4: 0x12b7018e  beq         $s5, $s7, . + 4 + (0x18E << 2)
    ctx->pc = 0x1383A4u;
    {
        const bool branch_taken_0x1383a4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1383A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1383A4u;
        // 0x1383a8: 0x24170503  addiu       $s7, $zero, 0x503 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1383a4) {
            ctx->pc = 0x1389E0u;
            goto label_1389e0;
        }
    }
    ctx->pc = 0x1383ACu;
    // 0x1383ac: 0x12b7018a  beq         $s5, $s7, . + 4 + (0x18A << 2)
    ctx->pc = 0x1383ACu;
    {
        const bool branch_taken_0x1383ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1383ac) {
            ctx->pc = 0x1389D8u;
            goto label_1389d8;
        }
    }
    ctx->pc = 0x1383B4u;
    // 0x1383b4: 0x24170502  addiu       $s7, $zero, 0x502
    ctx->pc = 0x1383b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1282));
    // 0x1383b8: 0x12b70185  beq         $s5, $s7, . + 4 + (0x185 << 2)
    ctx->pc = 0x1383B8u;
    {
        const bool branch_taken_0x1383b8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1383BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1383B8u;
        // 0x1383bc: 0x24170501  addiu       $s7, $zero, 0x501 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1281));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1383b8) {
            ctx->pc = 0x1389D0u;
            goto label_1389d0;
        }
    }
    ctx->pc = 0x1383C0u;
    // 0x1383c0: 0x12b70181  beq         $s5, $s7, . + 4 + (0x181 << 2)
    ctx->pc = 0x1383C0u;
    {
        const bool branch_taken_0x1383c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1383c0) {
            ctx->pc = 0x1389C8u;
            goto label_1389c8;
        }
    }
    ctx->pc = 0x1383C8u;
    // 0x1383c8: 0x24170500  addiu       $s7, $zero, 0x500
    ctx->pc = 0x1383c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x1383cc: 0x12b7017c  beq         $s5, $s7, . + 4 + (0x17C << 2)
    ctx->pc = 0x1383CCu;
    {
        const bool branch_taken_0x1383cc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1383D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1383CCu;
        // 0x1383d0: 0x24170413  addiu       $s7, $zero, 0x413 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1043));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1383cc) {
            ctx->pc = 0x1389C0u;
            goto label_1389c0;
        }
    }
    ctx->pc = 0x1383D4u;
    // 0x1383d4: 0x12b70178  beq         $s5, $s7, . + 4 + (0x178 << 2)
    ctx->pc = 0x1383D4u;
    {
        const bool branch_taken_0x1383d4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1383d4) {
            ctx->pc = 0x1389B8u;
            goto label_1389b8;
        }
    }
    ctx->pc = 0x1383DCu;
    // 0x1383dc: 0x24170411  addiu       $s7, $zero, 0x411
    ctx->pc = 0x1383dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1041));
    // 0x1383e0: 0x12b70173  beq         $s5, $s7, . + 4 + (0x173 << 2)
    ctx->pc = 0x1383E0u;
    {
        const bool branch_taken_0x1383e0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1383E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1383E0u;
        // 0x1383e4: 0x24170410  addiu       $s7, $zero, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1383e0) {
            ctx->pc = 0x1389B0u;
            goto label_1389b0;
        }
    }
    ctx->pc = 0x1383E8u;
    // 0x1383e8: 0x12b7016f  beq         $s5, $s7, . + 4 + (0x16F << 2)
    ctx->pc = 0x1383E8u;
    {
        const bool branch_taken_0x1383e8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1383e8) {
            ctx->pc = 0x1389A8u;
            goto label_1389a8;
        }
    }
    ctx->pc = 0x1383F0u;
    // 0x1383f0: 0x24170407  addiu       $s7, $zero, 0x407
    ctx->pc = 0x1383f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1031));
    // 0x1383f4: 0x12b7016a  beq         $s5, $s7, . + 4 + (0x16A << 2)
    ctx->pc = 0x1383F4u;
    {
        const bool branch_taken_0x1383f4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1383F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1383F4u;
        // 0x1383f8: 0x24170406  addiu       $s7, $zero, 0x406 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1030));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1383f4) {
            ctx->pc = 0x1389A0u;
            goto label_1389a0;
        }
    }
    ctx->pc = 0x1383FCu;
    // 0x1383fc: 0x12b70166  beq         $s5, $s7, . + 4 + (0x166 << 2)
    ctx->pc = 0x1383FCu;
    {
        const bool branch_taken_0x1383fc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1383fc) {
            ctx->pc = 0x138998u;
            goto label_138998;
        }
    }
    ctx->pc = 0x138404u;
    // 0x138404: 0x24170405  addiu       $s7, $zero, 0x405
    ctx->pc = 0x138404u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
    // 0x138408: 0x12b70161  beq         $s5, $s7, . + 4 + (0x161 << 2)
    ctx->pc = 0x138408u;
    {
        const bool branch_taken_0x138408 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x13840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138408u;
        // 0x13840c: 0x24170404  addiu       $s7, $zero, 0x404 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138408) {
            ctx->pc = 0x138990u;
            goto label_138990;
        }
    }
    ctx->pc = 0x138410u;
    // 0x138410: 0x12b7015d  beq         $s5, $s7, . + 4 + (0x15D << 2)
    ctx->pc = 0x138410u;
    {
        const bool branch_taken_0x138410 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138410) {
            ctx->pc = 0x138988u;
            goto label_138988;
        }
    }
    ctx->pc = 0x138418u;
    // 0x138418: 0x24170403  addiu       $s7, $zero, 0x403
    ctx->pc = 0x138418u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1027));
    // 0x13841c: 0x12b70158  beq         $s5, $s7, . + 4 + (0x158 << 2)
    ctx->pc = 0x13841Cu;
    {
        const bool branch_taken_0x13841c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13841Cu;
        // 0x138420: 0x24170402  addiu       $s7, $zero, 0x402 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13841c) {
            ctx->pc = 0x138980u;
            goto label_138980;
        }
    }
    ctx->pc = 0x138424u;
    // 0x138424: 0x12b70154  beq         $s5, $s7, . + 4 + (0x154 << 2)
    ctx->pc = 0x138424u;
    {
        const bool branch_taken_0x138424 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138424) {
            ctx->pc = 0x138978u;
            goto label_138978;
        }
    }
    ctx->pc = 0x13842Cu;
    // 0x13842c: 0x24170401  addiu       $s7, $zero, 0x401
    ctx->pc = 0x13842cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
    // 0x138430: 0x12b7014f  beq         $s5, $s7, . + 4 + (0x14F << 2)
    ctx->pc = 0x138430u;
    {
        const bool branch_taken_0x138430 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138430u;
        // 0x138434: 0x24170400  addiu       $s7, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138430) {
            ctx->pc = 0x138970u;
            goto label_138970;
        }
    }
    ctx->pc = 0x138438u;
    // 0x138438: 0x12b7014b  beq         $s5, $s7, . + 4 + (0x14B << 2)
    ctx->pc = 0x138438u;
    {
        const bool branch_taken_0x138438 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138438) {
            ctx->pc = 0x138968u;
            goto label_138968;
        }
    }
    ctx->pc = 0x138440u;
    // 0x138440: 0x2417030a  addiu       $s7, $zero, 0x30A
    ctx->pc = 0x138440u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 778));
    // 0x138444: 0x12b70146  beq         $s5, $s7, . + 4 + (0x146 << 2)
    ctx->pc = 0x138444u;
    {
        const bool branch_taken_0x138444 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138444u;
        // 0x138448: 0x24170309  addiu       $s7, $zero, 0x309 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 777));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138444) {
            ctx->pc = 0x138960u;
            goto label_138960;
        }
    }
    ctx->pc = 0x13844Cu;
    // 0x13844c: 0x12b70142  beq         $s5, $s7, . + 4 + (0x142 << 2)
    ctx->pc = 0x13844Cu;
    {
        const bool branch_taken_0x13844c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x13844c) {
            ctx->pc = 0x138958u;
            goto label_138958;
        }
    }
    ctx->pc = 0x138454u;
    // 0x138454: 0x24170308  addiu       $s7, $zero, 0x308
    ctx->pc = 0x138454u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 776));
    // 0x138458: 0x12b7013d  beq         $s5, $s7, . + 4 + (0x13D << 2)
    ctx->pc = 0x138458u;
    {
        const bool branch_taken_0x138458 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x13845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138458u;
        // 0x13845c: 0x24170307  addiu       $s7, $zero, 0x307 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 775));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138458) {
            ctx->pc = 0x138950u;
            goto label_138950;
        }
    }
    ctx->pc = 0x138460u;
    // 0x138460: 0x12b70139  beq         $s5, $s7, . + 4 + (0x139 << 2)
    ctx->pc = 0x138460u;
    {
        const bool branch_taken_0x138460 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138460) {
            ctx->pc = 0x138948u;
            goto label_138948;
        }
    }
    ctx->pc = 0x138468u;
    // 0x138468: 0x24170306  addiu       $s7, $zero, 0x306
    ctx->pc = 0x138468u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
    // 0x13846c: 0x12b70134  beq         $s5, $s7, . + 4 + (0x134 << 2)
    ctx->pc = 0x13846Cu;
    {
        const bool branch_taken_0x13846c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13846Cu;
        // 0x138470: 0x24170305  addiu       $s7, $zero, 0x305 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 773));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13846c) {
            ctx->pc = 0x138940u;
            goto label_138940;
        }
    }
    ctx->pc = 0x138474u;
    // 0x138474: 0x12b70130  beq         $s5, $s7, . + 4 + (0x130 << 2)
    ctx->pc = 0x138474u;
    {
        const bool branch_taken_0x138474 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138474) {
            ctx->pc = 0x138938u;
            goto label_138938;
        }
    }
    ctx->pc = 0x13847Cu;
    // 0x13847c: 0x24170304  addiu       $s7, $zero, 0x304
    ctx->pc = 0x13847cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 772));
    // 0x138480: 0x12b7012b  beq         $s5, $s7, . + 4 + (0x12B << 2)
    ctx->pc = 0x138480u;
    {
        const bool branch_taken_0x138480 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138480u;
        // 0x138484: 0x24170303  addiu       $s7, $zero, 0x303 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 771));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138480) {
            ctx->pc = 0x138930u;
            goto label_138930;
        }
    }
    ctx->pc = 0x138488u;
    // 0x138488: 0x12b70127  beq         $s5, $s7, . + 4 + (0x127 << 2)
    ctx->pc = 0x138488u;
    {
        const bool branch_taken_0x138488 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138488) {
            ctx->pc = 0x138928u;
            goto label_138928;
        }
    }
    ctx->pc = 0x138490u;
    // 0x138490: 0x24170302  addiu       $s7, $zero, 0x302
    ctx->pc = 0x138490u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 770));
    // 0x138494: 0x12b70122  beq         $s5, $s7, . + 4 + (0x122 << 2)
    ctx->pc = 0x138494u;
    {
        const bool branch_taken_0x138494 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138494u;
        // 0x138498: 0x24170301  addiu       $s7, $zero, 0x301 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 769));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138494) {
            ctx->pc = 0x138920u;
            goto label_138920;
        }
    }
    ctx->pc = 0x13849Cu;
    // 0x13849c: 0x12b7011e  beq         $s5, $s7, . + 4 + (0x11E << 2)
    ctx->pc = 0x13849Cu;
    {
        const bool branch_taken_0x13849c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x13849c) {
            ctx->pc = 0x138918u;
            goto label_138918;
        }
    }
    ctx->pc = 0x1384A4u;
    // 0x1384a4: 0x24170300  addiu       $s7, $zero, 0x300
    ctx->pc = 0x1384a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x1384a8: 0x12b70119  beq         $s5, $s7, . + 4 + (0x119 << 2)
    ctx->pc = 0x1384A8u;
    {
        const bool branch_taken_0x1384a8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1384ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384A8u;
        // 0x1384ac: 0x24170208  addiu       $s7, $zero, 0x208 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1384a8) {
            ctx->pc = 0x138910u;
            goto label_138910;
        }
    }
    ctx->pc = 0x1384B0u;
    // 0x1384b0: 0x12b70115  beq         $s5, $s7, . + 4 + (0x115 << 2)
    ctx->pc = 0x1384B0u;
    {
        const bool branch_taken_0x1384b0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1384b0) {
            ctx->pc = 0x138908u;
            goto label_138908;
        }
    }
    ctx->pc = 0x1384B8u;
    // 0x1384b8: 0x24170207  addiu       $s7, $zero, 0x207
    ctx->pc = 0x1384b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 519));
    // 0x1384bc: 0x12b70110  beq         $s5, $s7, . + 4 + (0x110 << 2)
    ctx->pc = 0x1384BCu;
    {
        const bool branch_taken_0x1384bc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1384C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384BCu;
        // 0x1384c0: 0x24170205  addiu       $s7, $zero, 0x205 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1384bc) {
            ctx->pc = 0x138900u;
            goto label_138900;
        }
    }
    ctx->pc = 0x1384C4u;
    // 0x1384c4: 0x12b7010c  beq         $s5, $s7, . + 4 + (0x10C << 2)
    ctx->pc = 0x1384C4u;
    {
        const bool branch_taken_0x1384c4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1384c4) {
            ctx->pc = 0x1388F8u;
            goto label_1388f8;
        }
    }
    ctx->pc = 0x1384CCu;
    // 0x1384cc: 0x24170204  addiu       $s7, $zero, 0x204
    ctx->pc = 0x1384ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
    // 0x1384d0: 0x12b70107  beq         $s5, $s7, . + 4 + (0x107 << 2)
    ctx->pc = 0x1384D0u;
    {
        const bool branch_taken_0x1384d0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1384D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384D0u;
        // 0x1384d4: 0x24170203  addiu       $s7, $zero, 0x203 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1384d0) {
            ctx->pc = 0x1388F0u;
            goto label_1388f0;
        }
    }
    ctx->pc = 0x1384D8u;
    // 0x1384d8: 0x12b70103  beq         $s5, $s7, . + 4 + (0x103 << 2)
    ctx->pc = 0x1384D8u;
    {
        const bool branch_taken_0x1384d8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1384d8) {
            ctx->pc = 0x1388E8u;
            goto label_1388e8;
        }
    }
    ctx->pc = 0x1384E0u;
    // 0x1384e0: 0x24170202  addiu       $s7, $zero, 0x202
    ctx->pc = 0x1384e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    // 0x1384e4: 0x12b700fe  beq         $s5, $s7, . + 4 + (0xFE << 2)
    ctx->pc = 0x1384E4u;
    {
        const bool branch_taken_0x1384e4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1384E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384E4u;
        // 0x1384e8: 0x24170201  addiu       $s7, $zero, 0x201 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1384e4) {
            ctx->pc = 0x1388E0u;
            goto label_1388e0;
        }
    }
    ctx->pc = 0x1384ECu;
    // 0x1384ec: 0x12b700fa  beq         $s5, $s7, . + 4 + (0xFA << 2)
    ctx->pc = 0x1384ECu;
    {
        const bool branch_taken_0x1384ec = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1384ec) {
            ctx->pc = 0x1388D8u;
            goto label_1388d8;
        }
    }
    ctx->pc = 0x1384F4u;
    // 0x1384f4: 0x24170200  addiu       $s7, $zero, 0x200
    ctx->pc = 0x1384f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1384f8: 0x12b700f5  beq         $s5, $s7, . + 4 + (0xF5 << 2)
    ctx->pc = 0x1384F8u;
    {
        const bool branch_taken_0x1384f8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1384FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384F8u;
        // 0x1384fc: 0x24170112  addiu       $s7, $zero, 0x112 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1384f8) {
            ctx->pc = 0x1388D0u;
            goto label_1388d0;
        }
    }
    ctx->pc = 0x138500u;
    // 0x138500: 0x12b700f1  beq         $s5, $s7, . + 4 + (0xF1 << 2)
    ctx->pc = 0x138500u;
    {
        const bool branch_taken_0x138500 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138500) {
            ctx->pc = 0x1388C8u;
            goto label_1388c8;
        }
    }
    ctx->pc = 0x138508u;
    // 0x138508: 0x24170111  addiu       $s7, $zero, 0x111
    ctx->pc = 0x138508u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x13850c: 0x12b700ec  beq         $s5, $s7, . + 4 + (0xEC << 2)
    ctx->pc = 0x13850Cu;
    {
        const bool branch_taken_0x13850c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13850Cu;
        // 0x138510: 0x24170102  addiu       $s7, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13850c) {
            ctx->pc = 0x1388C0u;
            goto label_1388c0;
        }
    }
    ctx->pc = 0x138514u;
    // 0x138514: 0x12b700e8  beq         $s5, $s7, . + 4 + (0xE8 << 2)
    ctx->pc = 0x138514u;
    {
        const bool branch_taken_0x138514 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138514) {
            ctx->pc = 0x1388B8u;
            goto label_1388b8;
        }
    }
    ctx->pc = 0x13851Cu;
    // 0x13851c: 0x24170101  addiu       $s7, $zero, 0x101
    ctx->pc = 0x13851cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x138520: 0x12b700e3  beq         $s5, $s7, . + 4 + (0xE3 << 2)
    ctx->pc = 0x138520u;
    {
        const bool branch_taken_0x138520 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138520u;
        // 0x138524: 0x24170100  addiu       $s7, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138520) {
            ctx->pc = 0x1388B0u;
            goto label_1388b0;
        }
    }
    ctx->pc = 0x138528u;
    // 0x138528: 0x12b700df  beq         $s5, $s7, . + 4 + (0xDF << 2)
    ctx->pc = 0x138528u;
    {
        const bool branch_taken_0x138528 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138528) {
            ctx->pc = 0x1388A8u;
            goto label_1388a8;
        }
    }
    ctx->pc = 0x138530u;
    // 0x138530: 0x24170083  addiu       $s7, $zero, 0x83
    ctx->pc = 0x138530u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x138534: 0x12b700da  beq         $s5, $s7, . + 4 + (0xDA << 2)
    ctx->pc = 0x138534u;
    {
        const bool branch_taken_0x138534 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138534u;
        // 0x138538: 0x24170082  addiu       $s7, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138534) {
            ctx->pc = 0x1388A0u;
            goto label_1388a0;
        }
    }
    ctx->pc = 0x13853Cu;
    // 0x13853c: 0x12b700d6  beq         $s5, $s7, . + 4 + (0xD6 << 2)
    ctx->pc = 0x13853Cu;
    {
        const bool branch_taken_0x13853c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x13853c) {
            ctx->pc = 0x138898u;
            goto label_138898;
        }
    }
    ctx->pc = 0x138544u;
    // 0x138544: 0x24170081  addiu       $s7, $zero, 0x81
    ctx->pc = 0x138544u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x138548: 0x12b700d1  beq         $s5, $s7, . + 4 + (0xD1 << 2)
    ctx->pc = 0x138548u;
    {
        const bool branch_taken_0x138548 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x13854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138548u;
        // 0x13854c: 0x24170080  addiu       $s7, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138548) {
            ctx->pc = 0x138890u;
            goto label_138890;
        }
    }
    ctx->pc = 0x138550u;
    // 0x138550: 0x12b700cd  beq         $s5, $s7, . + 4 + (0xCD << 2)
    ctx->pc = 0x138550u;
    {
        const bool branch_taken_0x138550 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138550) {
            ctx->pc = 0x138888u;
            goto label_138888;
        }
    }
    ctx->pc = 0x138558u;
    // 0x138558: 0x24170076  addiu       $s7, $zero, 0x76
    ctx->pc = 0x138558u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x13855c: 0x12b700c8  beq         $s5, $s7, . + 4 + (0xC8 << 2)
    ctx->pc = 0x13855Cu;
    {
        const bool branch_taken_0x13855c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13855Cu;
        // 0x138560: 0x24170075  addiu       $s7, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13855c) {
            ctx->pc = 0x138880u;
            goto label_138880;
        }
    }
    ctx->pc = 0x138564u;
    // 0x138564: 0x12b700c4  beq         $s5, $s7, . + 4 + (0xC4 << 2)
    ctx->pc = 0x138564u;
    {
        const bool branch_taken_0x138564 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138564) {
            ctx->pc = 0x138878u;
            goto label_138878;
        }
    }
    ctx->pc = 0x13856Cu;
    // 0x13856c: 0x24170073  addiu       $s7, $zero, 0x73
    ctx->pc = 0x13856cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x138570: 0x12b700bf  beq         $s5, $s7, . + 4 + (0xBF << 2)
    ctx->pc = 0x138570u;
    {
        const bool branch_taken_0x138570 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138570u;
        // 0x138574: 0x24170072  addiu       $s7, $zero, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138570) {
            ctx->pc = 0x138870u;
            goto label_138870;
        }
    }
    ctx->pc = 0x138578u;
    // 0x138578: 0x12b700bb  beq         $s5, $s7, . + 4 + (0xBB << 2)
    ctx->pc = 0x138578u;
    {
        const bool branch_taken_0x138578 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138578) {
            ctx->pc = 0x138868u;
            goto label_138868;
        }
    }
    ctx->pc = 0x138580u;
    // 0x138580: 0x24170071  addiu       $s7, $zero, 0x71
    ctx->pc = 0x138580u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
    // 0x138584: 0x12b700b6  beq         $s5, $s7, . + 4 + (0xB6 << 2)
    ctx->pc = 0x138584u;
    {
        const bool branch_taken_0x138584 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138584u;
        // 0x138588: 0x24170070  addiu       $s7, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138584) {
            ctx->pc = 0x138860u;
            goto label_138860;
        }
    }
    ctx->pc = 0x13858Cu;
    // 0x13858c: 0x12b700b2  beq         $s5, $s7, . + 4 + (0xB2 << 2)
    ctx->pc = 0x13858Cu;
    {
        const bool branch_taken_0x13858c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x13858c) {
            ctx->pc = 0x138858u;
            goto label_138858;
        }
    }
    ctx->pc = 0x138594u;
    // 0x138594: 0x2417005b  addiu       $s7, $zero, 0x5B
    ctx->pc = 0x138594u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x138598: 0x12b700ad  beq         $s5, $s7, . + 4 + (0xAD << 2)
    ctx->pc = 0x138598u;
    {
        const bool branch_taken_0x138598 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x13859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138598u;
        // 0x13859c: 0x2417005a  addiu       $s7, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138598) {
            ctx->pc = 0x138850u;
            goto label_138850;
        }
    }
    ctx->pc = 0x1385A0u;
    // 0x1385a0: 0x12b700a9  beq         $s5, $s7, . + 4 + (0xA9 << 2)
    ctx->pc = 0x1385A0u;
    {
        const bool branch_taken_0x1385a0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1385a0) {
            ctx->pc = 0x138848u;
            goto label_138848;
        }
    }
    ctx->pc = 0x1385A8u;
    // 0x1385a8: 0x24170059  addiu       $s7, $zero, 0x59
    ctx->pc = 0x1385a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x1385ac: 0x12b700a4  beq         $s5, $s7, . + 4 + (0xA4 << 2)
    ctx->pc = 0x1385ACu;
    {
        const bool branch_taken_0x1385ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1385B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1385ACu;
        // 0x1385b0: 0x24170055  addiu       $s7, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1385ac) {
            ctx->pc = 0x138840u;
            goto label_138840;
        }
    }
    ctx->pc = 0x1385B4u;
    // 0x1385b4: 0x12b700a0  beq         $s5, $s7, . + 4 + (0xA0 << 2)
    ctx->pc = 0x1385B4u;
    {
        const bool branch_taken_0x1385b4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1385b4) {
            ctx->pc = 0x138838u;
            goto label_138838;
        }
    }
    ctx->pc = 0x1385BCu;
    // 0x1385bc: 0x24170054  addiu       $s7, $zero, 0x54
    ctx->pc = 0x1385bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1385c0: 0x12b7009b  beq         $s5, $s7, . + 4 + (0x9B << 2)
    ctx->pc = 0x1385C0u;
    {
        const bool branch_taken_0x1385c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1385C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1385C0u;
        // 0x1385c4: 0x24170053  addiu       $s7, $zero, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1385c0) {
            ctx->pc = 0x138830u;
            goto label_138830;
        }
    }
    ctx->pc = 0x1385C8u;
    // 0x1385c8: 0x12b70097  beq         $s5, $s7, . + 4 + (0x97 << 2)
    ctx->pc = 0x1385C8u;
    {
        const bool branch_taken_0x1385c8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1385c8) {
            ctx->pc = 0x138828u;
            goto label_138828;
        }
    }
    ctx->pc = 0x1385D0u;
    // 0x1385d0: 0x24170052  addiu       $s7, $zero, 0x52
    ctx->pc = 0x1385d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1385d4: 0x12b70092  beq         $s5, $s7, . + 4 + (0x92 << 2)
    ctx->pc = 0x1385D4u;
    {
        const bool branch_taken_0x1385d4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1385D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1385D4u;
        // 0x1385d8: 0x24170051  addiu       $s7, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1385d4) {
            ctx->pc = 0x138820u;
            goto label_138820;
        }
    }
    ctx->pc = 0x1385DCu;
    // 0x1385dc: 0x12b7008e  beq         $s5, $s7, . + 4 + (0x8E << 2)
    ctx->pc = 0x1385DCu;
    {
        const bool branch_taken_0x1385dc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1385dc) {
            ctx->pc = 0x138818u;
            goto label_138818;
        }
    }
    ctx->pc = 0x1385E4u;
    // 0x1385e4: 0x24170050  addiu       $s7, $zero, 0x50
    ctx->pc = 0x1385e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1385e8: 0x12b70089  beq         $s5, $s7, . + 4 + (0x89 << 2)
    ctx->pc = 0x1385E8u;
    {
        const bool branch_taken_0x1385e8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1385ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1385E8u;
        // 0x1385ec: 0x24170039  addiu       $s7, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1385e8) {
            ctx->pc = 0x138810u;
            goto label_138810;
        }
    }
    ctx->pc = 0x1385F0u;
    // 0x1385f0: 0x12b70085  beq         $s5, $s7, . + 4 + (0x85 << 2)
    ctx->pc = 0x1385F0u;
    {
        const bool branch_taken_0x1385f0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1385f0) {
            ctx->pc = 0x138808u;
            goto label_138808;
        }
    }
    ctx->pc = 0x1385F8u;
    // 0x1385f8: 0x24170038  addiu       $s7, $zero, 0x38
    ctx->pc = 0x1385f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1385fc: 0x12b70080  beq         $s5, $s7, . + 4 + (0x80 << 2)
    ctx->pc = 0x1385FCu;
    {
        const bool branch_taken_0x1385fc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1385FCu;
        // 0x138600: 0x24170037  addiu       $s7, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1385fc) {
            ctx->pc = 0x138800u;
            goto label_138800;
        }
    }
    ctx->pc = 0x138604u;
    // 0x138604: 0x12b7007c  beq         $s5, $s7, . + 4 + (0x7C << 2)
    ctx->pc = 0x138604u;
    {
        const bool branch_taken_0x138604 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138604) {
            ctx->pc = 0x1387F8u;
            goto label_1387f8;
        }
    }
    ctx->pc = 0x13860Cu;
    // 0x13860c: 0x24170035  addiu       $s7, $zero, 0x35
    ctx->pc = 0x13860cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x138610: 0x12b70077  beq         $s5, $s7, . + 4 + (0x77 << 2)
    ctx->pc = 0x138610u;
    {
        const bool branch_taken_0x138610 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138610u;
        // 0x138614: 0x24170033  addiu       $s7, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138610) {
            ctx->pc = 0x1387F0u;
            goto label_1387f0;
        }
    }
    ctx->pc = 0x138618u;
    // 0x138618: 0x12b70073  beq         $s5, $s7, . + 4 + (0x73 << 2)
    ctx->pc = 0x138618u;
    {
        const bool branch_taken_0x138618 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138618) {
            ctx->pc = 0x1387E8u;
            goto label_1387e8;
        }
    }
    ctx->pc = 0x138620u;
    // 0x138620: 0x24170032  addiu       $s7, $zero, 0x32
    ctx->pc = 0x138620u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x138624: 0x12b7006e  beq         $s5, $s7, . + 4 + (0x6E << 2)
    ctx->pc = 0x138624u;
    {
        const bool branch_taken_0x138624 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138624u;
        // 0x138628: 0x24170030  addiu       $s7, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138624) {
            ctx->pc = 0x1387E0u;
            goto label_1387e0;
        }
    }
    ctx->pc = 0x13862Cu;
    // 0x13862c: 0x12b7006a  beq         $s5, $s7, . + 4 + (0x6A << 2)
    ctx->pc = 0x13862Cu;
    {
        const bool branch_taken_0x13862c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x13862c) {
            ctx->pc = 0x1387D8u;
            goto label_1387d8;
        }
    }
    ctx->pc = 0x138634u;
    // 0x138634: 0x2417002c  addiu       $s7, $zero, 0x2C
    ctx->pc = 0x138634u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x138638: 0x12b70065  beq         $s5, $s7, . + 4 + (0x65 << 2)
    ctx->pc = 0x138638u;
    {
        const bool branch_taken_0x138638 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x13863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138638u;
        // 0x13863c: 0x24170028  addiu       $s7, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138638) {
            ctx->pc = 0x1387D0u;
            goto label_1387d0;
        }
    }
    ctx->pc = 0x138640u;
    // 0x138640: 0x12b70061  beq         $s5, $s7, . + 4 + (0x61 << 2)
    ctx->pc = 0x138640u;
    {
        const bool branch_taken_0x138640 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138640) {
            ctx->pc = 0x1387C8u;
            goto label_1387c8;
        }
    }
    ctx->pc = 0x138648u;
    // 0x138648: 0x24170025  addiu       $s7, $zero, 0x25
    ctx->pc = 0x138648u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x13864c: 0x12b7005c  beq         $s5, $s7, . + 4 + (0x5C << 2)
    ctx->pc = 0x13864Cu;
    {
        const bool branch_taken_0x13864c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13864Cu;
        // 0x138650: 0x24170023  addiu       $s7, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13864c) {
            ctx->pc = 0x1387C0u;
            goto label_1387c0;
        }
    }
    ctx->pc = 0x138654u;
    // 0x138654: 0x12b70058  beq         $s5, $s7, . + 4 + (0x58 << 2)
    ctx->pc = 0x138654u;
    {
        const bool branch_taken_0x138654 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138654) {
            ctx->pc = 0x1387B8u;
            goto label_1387b8;
        }
    }
    ctx->pc = 0x13865Cu;
    // 0x13865c: 0x24170022  addiu       $s7, $zero, 0x22
    ctx->pc = 0x13865cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x138660: 0x12b70053  beq         $s5, $s7, . + 4 + (0x53 << 2)
    ctx->pc = 0x138660u;
    {
        const bool branch_taken_0x138660 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138660u;
        // 0x138664: 0x24170021  addiu       $s7, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138660) {
            ctx->pc = 0x1387B0u;
            goto label_1387b0;
        }
    }
    ctx->pc = 0x138668u;
    // 0x138668: 0x12b7004f  beq         $s5, $s7, . + 4 + (0x4F << 2)
    ctx->pc = 0x138668u;
    {
        const bool branch_taken_0x138668 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138668) {
            ctx->pc = 0x1387A8u;
            goto label_1387a8;
        }
    }
    ctx->pc = 0x138670u;
    // 0x138670: 0x24170020  addiu       $s7, $zero, 0x20
    ctx->pc = 0x138670u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x138674: 0x12b7004a  beq         $s5, $s7, . + 4 + (0x4A << 2)
    ctx->pc = 0x138674u;
    {
        const bool branch_taken_0x138674 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x138678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138674u;
        // 0x138678: 0x24170019  addiu       $s7, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138674) {
            ctx->pc = 0x1387A0u;
            goto label_1387a0;
        }
    }
    ctx->pc = 0x13867Cu;
    // 0x13867c: 0x12b70046  beq         $s5, $s7, . + 4 + (0x46 << 2)
    ctx->pc = 0x13867Cu;
    {
        const bool branch_taken_0x13867c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x13867c) {
            ctx->pc = 0x138798u;
            goto label_138798;
        }
    }
    ctx->pc = 0x138684u;
    // 0x138684: 0x24170014  addiu       $s7, $zero, 0x14
    ctx->pc = 0x138684u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x138688: 0x12b70041  beq         $s5, $s7, . + 4 + (0x41 << 2)
    ctx->pc = 0x138688u;
    {
        const bool branch_taken_0x138688 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x13868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138688u;
        // 0x13868c: 0x24170013  addiu       $s7, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138688) {
            ctx->pc = 0x138790u;
            goto label_138790;
        }
    }
    ctx->pc = 0x138690u;
    // 0x138690: 0x12b7003d  beq         $s5, $s7, . + 4 + (0x3D << 2)
    ctx->pc = 0x138690u;
    {
        const bool branch_taken_0x138690 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x138690) {
            ctx->pc = 0x138788u;
            goto label_138788;
        }
    }
    ctx->pc = 0x138698u;
    // 0x138698: 0x24170012  addiu       $s7, $zero, 0x12
    ctx->pc = 0x138698u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x13869c: 0x12b70038  beq         $s5, $s7, . + 4 + (0x38 << 2)
    ctx->pc = 0x13869Cu;
    {
        const bool branch_taken_0x13869c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x13869c) {
            ctx->pc = 0x138780u;
            goto label_138780;
        }
    }
    ctx->pc = 0x1386A4u;
    // 0x1386a4: 0x12aa0032  beq         $s5, $t2, . + 4 + (0x32 << 2)
    ctx->pc = 0x1386A4u;
    {
        const bool branch_taken_0x1386a4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 10));
        if (branch_taken_0x1386a4) {
            ctx->pc = 0x138770u;
            goto label_138770;
        }
    }
    ctx->pc = 0x1386ACu;
    // 0x1386ac: 0x12a9002e  beq         $s5, $t1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1386ACu;
    {
        const bool branch_taken_0x1386ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 9));
        if (branch_taken_0x1386ac) {
            ctx->pc = 0x138768u;
            goto label_138768;
        }
    }
    ctx->pc = 0x1386B4u;
    // 0x1386b4: 0x12a8002a  beq         $s5, $t0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1386B4u;
    {
        const bool branch_taken_0x1386b4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 8));
        if (branch_taken_0x1386b4) {
            ctx->pc = 0x138760u;
            goto label_138760;
        }
    }
    ctx->pc = 0x1386BCu;
    // 0x1386bc: 0x12a70026  beq         $s5, $a3, . + 4 + (0x26 << 2)
    ctx->pc = 0x1386BCu;
    {
        const bool branch_taken_0x1386bc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 7));
        if (branch_taken_0x1386bc) {
            ctx->pc = 0x138758u;
            goto label_138758;
        }
    }
    ctx->pc = 0x1386C4u;
    // 0x1386c4: 0x12a60022  beq         $s5, $a2, . + 4 + (0x22 << 2)
    ctx->pc = 0x1386C4u;
    {
        const bool branch_taken_0x1386c4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 6));
        if (branch_taken_0x1386c4) {
            ctx->pc = 0x138750u;
            goto label_138750;
        }
    }
    ctx->pc = 0x1386CCu;
    // 0x1386cc: 0x12a5001e  beq         $s5, $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1386CCu;
    {
        const bool branch_taken_0x1386cc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 5));
        ctx->pc = 0x1386D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1386CCu;
        // 0x1386d0: 0x24170005  addiu       $s7, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1386cc) {
            ctx->pc = 0x138748u;
            goto label_138748;
        }
    }
    ctx->pc = 0x1386D4u;
    // 0x1386d4: 0x12b7001a  beq         $s5, $s7, . + 4 + (0x1A << 2)
    ctx->pc = 0x1386D4u;
    {
        const bool branch_taken_0x1386d4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1386d4) {
            ctx->pc = 0x138740u;
            goto label_138740;
        }
    }
    ctx->pc = 0x1386DCu;
    // 0x1386dc: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x1386dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1386e0: 0x12b70015  beq         $s5, $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x1386E0u;
    {
        const bool branch_taken_0x1386e0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1386E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1386E0u;
        // 0x1386e4: 0x24170003  addiu       $s7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1386e0) {
            ctx->pc = 0x138738u;
            goto label_138738;
        }
    }
    ctx->pc = 0x1386E8u;
    // 0x1386e8: 0x12b70011  beq         $s5, $s7, . + 4 + (0x11 << 2)
    ctx->pc = 0x1386E8u;
    {
        const bool branch_taken_0x1386e8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1386e8) {
            ctx->pc = 0x138730u;
            goto label_138730;
        }
    }
    ctx->pc = 0x1386F0u;
    // 0x1386f0: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x1386f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1386f4: 0x12b7000c  beq         $s5, $s7, . + 4 + (0xC << 2)
    ctx->pc = 0x1386F4u;
    {
        const bool branch_taken_0x1386f4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        ctx->pc = 0x1386F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1386F4u;
        // 0x1386f8: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1386f4) {
            ctx->pc = 0x138728u;
            goto label_138728;
        }
    }
    ctx->pc = 0x1386FCu;
    // 0x1386fc: 0x12b70008  beq         $s5, $s7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1386FCu;
    {
        const bool branch_taken_0x1386fc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 23));
        if (branch_taken_0x1386fc) {
            ctx->pc = 0x138720u;
            goto label_138720;
        }
    }
    ctx->pc = 0x138704u;
    // 0x138704: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x138704u;
    {
        const bool branch_taken_0x138704 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x138704) {
            ctx->pc = 0x138718u;
            goto label_138718;
        }
    }
    ctx->pc = 0x13870Cu;
    // 0x13870c: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x13870Cu;
    {
        const bool branch_taken_0x13870c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13870c) {
            ctx->pc = 0x138CB0u;
            goto label_138cb0;
        }
    }
    ctx->pc = 0x138714u;
    // 0x138714: 0x0  nop
    ctx->pc = 0x138714u;
    // NOP
label_138718:
    // 0x138718: 0x10000167  b           . + 4 + (0x167 << 2)
    ctx->pc = 0x138718u;
    {
        const bool branch_taken_0x138718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138718u;
        // 0x13871c: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138718) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138720u;
label_138720:
    // 0x138720: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x138720u;
    {
        const bool branch_taken_0x138720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138720u;
        // 0x138724: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138720) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138728u;
label_138728:
    // 0x138728: 0x10000163  b           . + 4 + (0x163 << 2)
    ctx->pc = 0x138728u;
    {
        const bool branch_taken_0x138728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138728u;
        // 0x13872c: 0xa2c60000  sb          $a2, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138728) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138730u;
label_138730:
    // 0x138730: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x138730u;
    {
        const bool branch_taken_0x138730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138730u;
        // 0x138734: 0xa2c60000  sb          $a2, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138730) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138738u;
label_138738:
    // 0x138738: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x138738u;
    {
        const bool branch_taken_0x138738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138738u;
        // 0x13873c: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138738) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138740u;
label_138740:
    // 0x138740: 0x1000015d  b           . + 4 + (0x15D << 2)
    ctx->pc = 0x138740u;
    {
        const bool branch_taken_0x138740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138740u;
        // 0x138744: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138740) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138748u;
label_138748:
    // 0x138748: 0x1000015b  b           . + 4 + (0x15B << 2)
    ctx->pc = 0x138748u;
    {
        const bool branch_taken_0x138748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138748u;
        // 0x13874c: 0xa2c60000  sb          $a2, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138748) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138750u;
label_138750:
    // 0x138750: 0x10000159  b           . + 4 + (0x159 << 2)
    ctx->pc = 0x138750u;
    {
        const bool branch_taken_0x138750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138750u;
        // 0x138754: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138750) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138758u;
label_138758:
    // 0x138758: 0x10000157  b           . + 4 + (0x157 << 2)
    ctx->pc = 0x138758u;
    {
        const bool branch_taken_0x138758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138758u;
        // 0x13875c: 0xa2c60000  sb          $a2, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138758) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138760u;
label_138760:
    // 0x138760: 0x10000155  b           . + 4 + (0x155 << 2)
    ctx->pc = 0x138760u;
    {
        const bool branch_taken_0x138760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138760u;
        // 0x138764: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138760) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138768u;
label_138768:
    // 0x138768: 0x10000153  b           . + 4 + (0x153 << 2)
    ctx->pc = 0x138768u;
    {
        const bool branch_taken_0x138768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138768u;
        // 0x13876c: 0xa2c80000  sb          $t0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138768) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138770u;
label_138770:
    // 0x138770: 0x2417000f  addiu       $s7, $zero, 0xF
    ctx->pc = 0x138770u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x138774: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x138774u;
    {
        const bool branch_taken_0x138774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138774u;
        // 0x138778: 0xa2d70000  sb          $s7, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138774) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x13877Cu;
    // 0x13877c: 0x0  nop
    ctx->pc = 0x13877cu;
    // NOP
label_138780:
    // 0x138780: 0x1000014d  b           . + 4 + (0x14D << 2)
    ctx->pc = 0x138780u;
    {
        const bool branch_taken_0x138780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138780u;
        // 0x138784: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138780) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138788u;
label_138788:
    // 0x138788: 0x1000014b  b           . + 4 + (0x14B << 2)
    ctx->pc = 0x138788u;
    {
        const bool branch_taken_0x138788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138788u;
        // 0x13878c: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138788) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138790u;
label_138790:
    // 0x138790: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x138790u;
    {
        const bool branch_taken_0x138790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138790u;
        // 0x138794: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138790) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138798u;
label_138798:
    // 0x138798: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x138798u;
    {
        const bool branch_taken_0x138798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138798u;
        // 0x13879c: 0xa2c80000  sb          $t0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138798) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1387A0u;
label_1387a0:
    // 0x1387a0: 0x10000145  b           . + 4 + (0x145 << 2)
    ctx->pc = 0x1387A0u;
    {
        const bool branch_taken_0x1387a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1387A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387A0u;
        // 0x1387a4: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387a0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1387A8u;
label_1387a8:
    // 0x1387a8: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x1387A8u;
    {
        const bool branch_taken_0x1387a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1387ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387A8u;
        // 0x1387ac: 0xa2c80000  sb          $t0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387a8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1387B0u;
label_1387b0:
    // 0x1387b0: 0x10000141  b           . + 4 + (0x141 << 2)
    ctx->pc = 0x1387B0u;
    {
        const bool branch_taken_0x1387b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1387B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387B0u;
        // 0x1387b4: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387b0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1387B8u;
label_1387b8:
    // 0x1387b8: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x1387B8u;
    {
        const bool branch_taken_0x1387b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1387BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387B8u;
        // 0x1387bc: 0xa2c80000  sb          $t0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387b8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1387C0u;
label_1387c0:
    // 0x1387c0: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x1387C0u;
    {
        const bool branch_taken_0x1387c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1387C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387C0u;
        // 0x1387c4: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387c0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1387C8u;
label_1387c8:
    // 0x1387c8: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x1387C8u;
    {
        const bool branch_taken_0x1387c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1387CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387C8u;
        // 0x1387cc: 0xa2c80000  sb          $t0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387c8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1387D0u;
label_1387d0:
    // 0x1387d0: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x1387D0u;
    {
        const bool branch_taken_0x1387d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1387D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387D0u;
        // 0x1387d4: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387d0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1387D8u;
label_1387d8:
    // 0x1387d8: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x1387D8u;
    {
        const bool branch_taken_0x1387d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1387DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387D8u;
        // 0x1387dc: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387d8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1387E0u;
label_1387e0:
    // 0x1387e0: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x1387E0u;
    {
        const bool branch_taken_0x1387e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1387E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387E0u;
        // 0x1387e4: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387e0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1387E8u;
label_1387e8:
    // 0x1387e8: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x1387E8u;
    {
        const bool branch_taken_0x1387e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1387ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387E8u;
        // 0x1387ec: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387e8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1387F0u;
label_1387f0:
    // 0x1387f0: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x1387F0u;
    {
        const bool branch_taken_0x1387f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1387F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387F0u;
        // 0x1387f4: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387f0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1387F8u;
label_1387f8:
    // 0x1387f8: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x1387F8u;
    {
        const bool branch_taken_0x1387f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1387FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387F8u;
        // 0x1387fc: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1387f8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138800u;
label_138800:
    // 0x138800: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x138800u;
    {
        const bool branch_taken_0x138800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138800u;
        // 0x138804: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138800) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138808u;
label_138808:
    // 0x138808: 0x1000012b  b           . + 4 + (0x12B << 2)
    ctx->pc = 0x138808u;
    {
        const bool branch_taken_0x138808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138808u;
        // 0x13880c: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138808) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138810u;
label_138810:
    // 0x138810: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x138810u;
    {
        const bool branch_taken_0x138810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138810u;
        // 0x138814: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138810) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138818u;
label_138818:
    // 0x138818: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x138818u;
    {
        const bool branch_taken_0x138818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138818u;
        // 0x13881c: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138818) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138820u;
label_138820:
    // 0x138820: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x138820u;
    {
        const bool branch_taken_0x138820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138820u;
        // 0x138824: 0xa2c50000  sb          $a1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138820) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138828u;
label_138828:
    // 0x138828: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x138828u;
    {
        const bool branch_taken_0x138828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138828u;
        // 0x13882c: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138828) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138830u;
label_138830:
    // 0x138830: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x138830u;
    {
        const bool branch_taken_0x138830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138830u;
        // 0x138834: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138830) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138838u;
label_138838:
    // 0x138838: 0x1000011f  b           . + 4 + (0x11F << 2)
label_13883c:
    if (ctx->pc == 0x13883Cu) {
        ctx->pc = 0x13883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138838u;
        // 0x13883c: 0xa2c50000  sb          $a1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138840u;
        goto label_138840;
    }
    ctx->pc = 0x138838u;
    {
        const bool branch_taken_0x138838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138838u;
        // 0x13883c: 0xa2c50000  sb          $a1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138838) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138840u;
label_138840:
    // 0x138840: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x138840u;
    {
        const bool branch_taken_0x138840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138840u;
        // 0x138844: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138840) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138848u;
label_138848:
    // 0x138848: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x138848u;
    {
        const bool branch_taken_0x138848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138848u;
        // 0x13884c: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138848) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138850u;
label_138850:
    // 0x138850: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x138850u;
    {
        const bool branch_taken_0x138850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138850u;
        // 0x138854: 0xa2c50000  sb          $a1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138850) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138858u;
label_138858:
    // 0x138858: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x138858u;
    {
        const bool branch_taken_0x138858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138858u;
        // 0x13885c: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138858) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138860u;
label_138860:
    // 0x138860: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x138860u;
    {
        const bool branch_taken_0x138860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138860u;
        // 0x138864: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138860) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138868u;
label_138868:
    // 0x138868: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x138868u;
    {
        const bool branch_taken_0x138868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138868u;
        // 0x13886c: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138868) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138870u;
label_138870:
    // 0x138870: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x138870u;
    {
        const bool branch_taken_0x138870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138870u;
        // 0x138874: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138870) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138878u;
label_138878:
    // 0x138878: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x138878u;
    {
        const bool branch_taken_0x138878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138878u;
        // 0x13887c: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138878) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138880u;
label_138880:
    // 0x138880: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x138880u;
    {
        const bool branch_taken_0x138880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138880u;
        // 0x138884: 0xa2c60000  sb          $a2, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138880) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138888u;
label_138888:
    // 0x138888: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x138888u;
    {
        const bool branch_taken_0x138888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138888u;
        // 0x13888c: 0xa2c60000  sb          $a2, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138888) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138890u;
label_138890:
    // 0x138890: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x138890u;
    {
        const bool branch_taken_0x138890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138890u;
        // 0x138894: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138890) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138898u;
label_138898:
    // 0x138898: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x138898u;
    {
        const bool branch_taken_0x138898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138898u;
        // 0x13889c: 0xa2c80000  sb          $t0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138898) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1388A0u;
label_1388a0:
    // 0x1388a0: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x1388A0u;
    {
        const bool branch_taken_0x1388a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388A0u;
        // 0x1388a4: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388a0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1388A8u;
label_1388a8:
    // 0x1388a8: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x1388A8u;
    {
        const bool branch_taken_0x1388a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388A8u;
        // 0x1388ac: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388a8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1388B0u;
label_1388b0:
    // 0x1388b0: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x1388B0u;
    {
        const bool branch_taken_0x1388b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388B0u;
        // 0x1388b4: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388b0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1388B8u;
label_1388b8:
    // 0x1388b8: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x1388B8u;
    {
        const bool branch_taken_0x1388b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388B8u;
        // 0x1388bc: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388b8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1388C0u;
label_1388c0:
    // 0x1388c0: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x1388C0u;
    {
        const bool branch_taken_0x1388c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388C0u;
        // 0x1388c4: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388c0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1388C8u;
label_1388c8:
    // 0x1388c8: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x1388C8u;
    {
        const bool branch_taken_0x1388c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388C8u;
        // 0x1388cc: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388c8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1388D0u;
label_1388d0:
    // 0x1388d0: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x1388D0u;
    {
        const bool branch_taken_0x1388d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388D0u;
        // 0x1388d4: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388d0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1388D8u;
label_1388d8:
    // 0x1388d8: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x1388D8u;
    {
        const bool branch_taken_0x1388d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388D8u;
        // 0x1388dc: 0xa2c80000  sb          $t0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388d8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1388E0u;
label_1388e0:
    // 0x1388e0: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x1388E0u;
    {
        const bool branch_taken_0x1388e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388E0u;
        // 0x1388e4: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388e0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1388E8u;
label_1388e8:
    // 0x1388e8: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x1388E8u;
    {
        const bool branch_taken_0x1388e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388E8u;
        // 0x1388ec: 0xa2c80000  sb          $t0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388e8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1388F0u;
label_1388f0:
    // 0x1388f0: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x1388F0u;
    {
        const bool branch_taken_0x1388f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388F0u;
        // 0x1388f4: 0xa2c60000  sb          $a2, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388f0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1388F8u;
label_1388f8:
    // 0x1388f8: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x1388F8u;
    {
        const bool branch_taken_0x1388f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388F8u;
        // 0x1388fc: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388f8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138900u;
label_138900:
    // 0x138900: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x138900u;
    {
        const bool branch_taken_0x138900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138900u;
        // 0x138904: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138900) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138908u;
label_138908:
    // 0x138908: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x138908u;
    {
        const bool branch_taken_0x138908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138908u;
        // 0x13890c: 0xa2c80000  sb          $t0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138908) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138910u;
label_138910:
    // 0x138910: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x138910u;
    {
        const bool branch_taken_0x138910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138910u;
        // 0x138914: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138910) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138918u;
label_138918:
    // 0x138918: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x138918u;
    {
        const bool branch_taken_0x138918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138918u;
        // 0x13891c: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138918) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138920u;
label_138920:
    // 0x138920: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x138920u;
    {
        const bool branch_taken_0x138920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138920u;
        // 0x138924: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138920) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138928u;
label_138928:
    // 0x138928: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x138928u;
    {
        const bool branch_taken_0x138928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138928u;
        // 0x13892c: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138928) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138930u;
label_138930:
    // 0x138930: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x138930u;
    {
        const bool branch_taken_0x138930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138930u;
        // 0x138934: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138930) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138938u;
label_138938:
    // 0x138938: 0x100000df  b           . + 4 + (0xDF << 2)
label_13893c:
    if (ctx->pc == 0x13893Cu) {
        ctx->pc = 0x13893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138938u;
        // 0x13893c: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138940u;
        goto label_138940;
    }
    ctx->pc = 0x138938u;
    {
        const bool branch_taken_0x138938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138938u;
        // 0x13893c: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138938) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138940u;
label_138940:
    // 0x138940: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x138940u;
    {
        const bool branch_taken_0x138940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138940u;
        // 0x138944: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138940) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138948u;
label_138948:
    // 0x138948: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x138948u;
    {
        const bool branch_taken_0x138948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138948u;
        // 0x13894c: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138948) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138950u;
label_138950:
    // 0x138950: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x138950u;
    {
        const bool branch_taken_0x138950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138950u;
        // 0x138954: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138950) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138958u;
label_138958:
    // 0x138958: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x138958u;
    {
        const bool branch_taken_0x138958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138958u;
        // 0x13895c: 0xa2c60000  sb          $a2, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138958) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138960u;
label_138960:
    // 0x138960: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x138960u;
    {
        const bool branch_taken_0x138960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138960u;
        // 0x138964: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138960) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138968u;
label_138968:
    // 0x138968: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x138968u;
    {
        const bool branch_taken_0x138968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138968u;
        // 0x13896c: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138968) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138970u;
label_138970:
    // 0x138970: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x138970u;
    {
        const bool branch_taken_0x138970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138970u;
        // 0x138974: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138970) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138978u;
label_138978:
    // 0x138978: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x138978u;
    {
        const bool branch_taken_0x138978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138978u;
        // 0x13897c: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138978) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138980u;
label_138980:
    // 0x138980: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x138980u;
    {
        const bool branch_taken_0x138980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138980u;
        // 0x138984: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138980) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138988u;
label_138988:
    // 0x138988: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x138988u;
    {
        const bool branch_taken_0x138988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138988u;
        // 0x13898c: 0xa2c80000  sb          $t0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138988) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138990u;
label_138990:
    // 0x138990: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x138990u;
    {
        const bool branch_taken_0x138990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138990u;
        // 0x138994: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138990) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138998u;
label_138998:
    // 0x138998: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x138998u;
    {
        const bool branch_taken_0x138998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138998u;
        // 0x13899c: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138998) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1389A0u;
label_1389a0:
    // 0x1389a0: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x1389A0u;
    {
        const bool branch_taken_0x1389a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389A0u;
        // 0x1389a4: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389a0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1389A8u;
label_1389a8:
    // 0x1389a8: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x1389A8u;
    {
        const bool branch_taken_0x1389a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389A8u;
        // 0x1389ac: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389a8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1389B0u;
label_1389b0:
    // 0x1389b0: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x1389B0u;
    {
        const bool branch_taken_0x1389b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389B0u;
        // 0x1389b4: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389b0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1389B8u;
label_1389b8:
    // 0x1389b8: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x1389B8u;
    {
        const bool branch_taken_0x1389b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389B8u;
        // 0x1389bc: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389b8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1389C0u;
label_1389c0:
    // 0x1389c0: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x1389C0u;
    {
        const bool branch_taken_0x1389c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389C0u;
        // 0x1389c4: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389c0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1389C8u;
label_1389c8:
    // 0x1389c8: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x1389C8u;
    {
        const bool branch_taken_0x1389c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389C8u;
        // 0x1389cc: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389c8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1389D0u;
label_1389d0:
    // 0x1389d0: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x1389D0u;
    {
        const bool branch_taken_0x1389d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389D0u;
        // 0x1389d4: 0xa2c50000  sb          $a1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389d0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1389D8u;
label_1389d8:
    // 0x1389d8: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x1389D8u;
    {
        const bool branch_taken_0x1389d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389D8u;
        // 0x1389dc: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389d8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1389E0u;
label_1389e0:
    // 0x1389e0: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x1389E0u;
    {
        const bool branch_taken_0x1389e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389E0u;
        // 0x1389e4: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389e0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1389E8u;
label_1389e8:
    // 0x1389e8: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x1389E8u;
    {
        const bool branch_taken_0x1389e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389E8u;
        // 0x1389ec: 0xa2c50000  sb          $a1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389e8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1389F0u;
label_1389f0:
    // 0x1389f0: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x1389F0u;
    {
        const bool branch_taken_0x1389f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389F0u;
        // 0x1389f4: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389f0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x1389F8u;
label_1389f8:
    // 0x1389f8: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x1389F8u;
    {
        const bool branch_taken_0x1389f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1389FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1389F8u;
        // 0x1389fc: 0xa2c60000  sb          $a2, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1389f8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138A00u;
label_138a00:
    // 0x138a00: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x138A00u;
    {
        const bool branch_taken_0x138a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A00u;
        // 0x138a04: 0xa2c60000  sb          $a2, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a00) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138A08u;
label_138a08:
    // 0x138a08: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x138A08u;
    {
        const bool branch_taken_0x138a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A08u;
        // 0x138a0c: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a08) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138A10u;
label_138a10:
    // 0x138a10: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x138A10u;
    {
        const bool branch_taken_0x138a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A10u;
        // 0x138a14: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a10) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138A18u;
label_138a18:
    // 0x138a18: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x138A18u;
    {
        const bool branch_taken_0x138a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A18u;
        // 0x138a1c: 0xa2c50000  sb          $a1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a18) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138A20u;
label_138a20:
    // 0x138a20: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x138A20u;
    {
        const bool branch_taken_0x138a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A20u;
        // 0x138a24: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a20) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138A28u;
label_138a28:
    // 0x138a28: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x138A28u;
    {
        const bool branch_taken_0x138a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A28u;
        // 0x138a2c: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a28) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138A30u;
label_138a30:
    // 0x138a30: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x138A30u;
    {
        const bool branch_taken_0x138a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A30u;
        // 0x138a34: 0xa2c60000  sb          $a2, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a30) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138A38u;
label_138a38:
    // 0x138a38: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x138A38u;
    {
        const bool branch_taken_0x138a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A38u;
        // 0x138a3c: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a38) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138A40u;
label_138a40:
    // 0x138a40: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x138A40u;
    {
        const bool branch_taken_0x138a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A40u;
        // 0x138a44: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a40) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138A48u;
label_138a48:
    // 0x138a48: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x138A48u;
    {
        const bool branch_taken_0x138a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A48u;
        // 0x138a4c: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a48) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138A50u;
label_138a50:
    // 0x138a50: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x138A50u;
    {
        const bool branch_taken_0x138a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A50u;
        // 0x138a54: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a50) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138A58u;
label_138a58:
    // 0x138a58: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x138A58u;
    {
        const bool branch_taken_0x138a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A58u;
        // 0x138a5c: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a58) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138A60u;
label_138a60:
    // 0x138a60: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x138A60u;
    {
        const bool branch_taken_0x138a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A60u;
        // 0x138a64: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a60) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138A68u;
label_138a68:
    // 0x138a68: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x138A68u;
    {
        const bool branch_taken_0x138a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A68u;
        // 0x138a6c: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a68) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138A70u;
label_138a70:
    // 0x138a70: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x138A70u;
    {
        const bool branch_taken_0x138a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A70u;
        // 0x138a74: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a70) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138A78u;
label_138a78:
    // 0x138a78: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x138A78u;
    {
        const bool branch_taken_0x138a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A78u;
        // 0x138a7c: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a78) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138A80u;
label_138a80:
    // 0x138a80: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x138A80u;
    {
        const bool branch_taken_0x138a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A80u;
        // 0x138a84: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a80) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138A88u;
label_138a88:
    // 0x138a88: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x138A88u;
    {
        const bool branch_taken_0x138a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A88u;
        // 0x138a8c: 0xa2c60000  sb          $a2, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a88) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138A90u;
label_138a90:
    // 0x138a90: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x138A90u;
    {
        const bool branch_taken_0x138a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A90u;
        // 0x138a94: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a90) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138A98u;
label_138a98:
    // 0x138a98: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x138A98u;
    {
        const bool branch_taken_0x138a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A98u;
        // 0x138a9c: 0xa2c60000  sb          $a2, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a98) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138AA0u;
label_138aa0:
    // 0x138aa0: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x138AA0u;
    {
        const bool branch_taken_0x138aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138AA0u;
        // 0x138aa4: 0xa2c50000  sb          $a1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138aa0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138AA8u;
label_138aa8:
    // 0x138aa8: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x138AA8u;
    {
        const bool branch_taken_0x138aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138AA8u;
        // 0x138aac: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138aa8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138AB0u;
label_138ab0:
    // 0x138ab0: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x138AB0u;
    {
        const bool branch_taken_0x138ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138AB0u;
        // 0x138ab4: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ab0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138AB8u;
label_138ab8:
    // 0x138ab8: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x138AB8u;
    {
        const bool branch_taken_0x138ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138AB8u;
        // 0x138abc: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ab8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138AC0u;
label_138ac0:
    // 0x138ac0: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x138AC0u;
    {
        const bool branch_taken_0x138ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138AC0u;
        // 0x138ac4: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ac0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138AC8u;
label_138ac8:
    // 0x138ac8: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x138AC8u;
    {
        const bool branch_taken_0x138ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138AC8u;
        // 0x138acc: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ac8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138AD0u;
label_138ad0:
    // 0x138ad0: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x138AD0u;
    {
        const bool branch_taken_0x138ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138AD0u;
        // 0x138ad4: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ad0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138AD8u;
label_138ad8:
    // 0x138ad8: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x138AD8u;
    {
        const bool branch_taken_0x138ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138AD8u;
        // 0x138adc: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ad8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138AE0u;
label_138ae0:
    // 0x138ae0: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x138AE0u;
    {
        const bool branch_taken_0x138ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138AE0u;
        // 0x138ae4: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ae0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138AE8u;
label_138ae8:
    // 0x138ae8: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x138AE8u;
    {
        const bool branch_taken_0x138ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138AE8u;
        // 0x138aec: 0xa2c60000  sb          $a2, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ae8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138AF0u;
label_138af0:
    // 0x138af0: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x138AF0u;
    {
        const bool branch_taken_0x138af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138AF0u;
        // 0x138af4: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138af0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138AF8u;
label_138af8:
    // 0x138af8: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x138AF8u;
    {
        const bool branch_taken_0x138af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138AF8u;
        // 0x138afc: 0xa2c60000  sb          $a2, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138af8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138B00u;
label_138b00:
    // 0x138b00: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x138B00u;
    {
        const bool branch_taken_0x138b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B00u;
        // 0x138b04: 0xa2c60000  sb          $a2, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b00) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138B08u;
label_138b08:
    // 0x138b08: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x138B08u;
    {
        const bool branch_taken_0x138b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B08u;
        // 0x138b0c: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b08) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138B10u;
label_138b10:
    // 0x138b10: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x138B10u;
    {
        const bool branch_taken_0x138b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B10u;
        // 0x138b14: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b10) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138B18u;
label_138b18:
    // 0x138b18: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x138B18u;
    {
        const bool branch_taken_0x138b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B18u;
        // 0x138b1c: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b18) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138B20u;
label_138b20:
    // 0x138b20: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x138B20u;
    {
        const bool branch_taken_0x138b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B20u;
        // 0x138b24: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b20) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138B28u;
label_138b28:
    // 0x138b28: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x138B28u;
    {
        const bool branch_taken_0x138b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B28u;
        // 0x138b2c: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b28) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138B30u;
label_138b30:
    // 0x138b30: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x138B30u;
    {
        const bool branch_taken_0x138b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B30u;
        // 0x138b34: 0xa2c80000  sb          $t0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b30) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138B38u;
label_138b38:
    // 0x138b38: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x138B38u;
    {
        const bool branch_taken_0x138b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B38u;
        // 0x138b3c: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b38) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138B40u;
label_138b40:
    // 0x138b40: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x138B40u;
    {
        const bool branch_taken_0x138b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B40u;
        // 0x138b44: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b40) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138B48u;
label_138b48:
    // 0x138b48: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x138B48u;
    {
        const bool branch_taken_0x138b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B48u;
        // 0x138b4c: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b48) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138B50u;
label_138b50:
    // 0x138b50: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x138B50u;
    {
        const bool branch_taken_0x138b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B50u;
        // 0x138b54: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b50) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138B58u;
label_138b58:
    // 0x138b58: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x138B58u;
    {
        const bool branch_taken_0x138b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B58u;
        // 0x138b5c: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b58) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138B60u;
label_138b60:
    // 0x138b60: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x138B60u;
    {
        const bool branch_taken_0x138b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B60u;
        // 0x138b64: 0xa2c80000  sb          $t0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b60) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138B68u;
label_138b68:
    // 0x138b68: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x138B68u;
    {
        const bool branch_taken_0x138b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B68u;
        // 0x138b6c: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b68) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138B70u;
label_138b70:
    // 0x138b70: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x138B70u;
    {
        const bool branch_taken_0x138b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B70u;
        // 0x138b74: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b70) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138B78u;
label_138b78:
    // 0x138b78: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x138B78u;
    {
        const bool branch_taken_0x138b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B78u;
        // 0x138b7c: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b78) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138B80u;
label_138b80:
    // 0x138b80: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x138B80u;
    {
        const bool branch_taken_0x138b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B80u;
        // 0x138b84: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b80) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138B88u;
label_138b88:
    // 0x138b88: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x138B88u;
    {
        const bool branch_taken_0x138b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B88u;
        // 0x138b8c: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b88) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138B90u;
label_138b90:
    // 0x138b90: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x138B90u;
    {
        const bool branch_taken_0x138b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B90u;
        // 0x138b94: 0xa2ca0000  sb          $t2, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b90) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138B98u;
label_138b98:
    // 0x138b98: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x138B98u;
    {
        const bool branch_taken_0x138b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B98u;
        // 0x138b9c: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b98) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138BA0u;
label_138ba0:
    // 0x138ba0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x138BA0u;
    {
        const bool branch_taken_0x138ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BA0u;
        // 0x138ba4: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ba0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138BA8u;
label_138ba8:
    // 0x138ba8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x138BA8u;
    {
        const bool branch_taken_0x138ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BA8u;
        // 0x138bac: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ba8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138BB0u;
label_138bb0:
    // 0x138bb0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x138BB0u;
    {
        const bool branch_taken_0x138bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BB0u;
        // 0x138bb4: 0xa2c80000  sb          $t0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138bb0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138BB8u;
label_138bb8:
    // 0x138bb8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x138BB8u;
    {
        const bool branch_taken_0x138bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BB8u;
        // 0x138bbc: 0xa2c30000  sb          $v1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138bb8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138BC0u;
label_138bc0:
    // 0x138bc0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x138BC0u;
    {
        const bool branch_taken_0x138bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BC0u;
        // 0x138bc4: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138bc0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138BC8u;
label_138bc8:
    // 0x138bc8: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x138BC8u;
    {
        const bool branch_taken_0x138bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BC8u;
        // 0x138bcc: 0xa2c80000  sb          $t0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138bc8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138BD0u;
label_138bd0:
    // 0x138bd0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x138BD0u;
    {
        const bool branch_taken_0x138bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BD0u;
        // 0x138bd4: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138bd0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138BD8u;
label_138bd8:
    // 0x138bd8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x138BD8u;
    {
        const bool branch_taken_0x138bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BD8u;
        // 0x138bdc: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138bd8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138BE0u;
label_138be0:
    // 0x138be0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x138BE0u;
    {
        const bool branch_taken_0x138be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BE0u;
        // 0x138be4: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138be0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138BE8u;
label_138be8:
    // 0x138be8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x138BE8u;
    {
        const bool branch_taken_0x138be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BE8u;
        // 0x138bec: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138be8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138BF0u;
label_138bf0:
    // 0x138bf0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x138BF0u;
    {
        const bool branch_taken_0x138bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BF0u;
        // 0x138bf4: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138bf0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138BF8u;
label_138bf8:
    // 0x138bf8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x138BF8u;
    {
        const bool branch_taken_0x138bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BF8u;
        // 0x138bfc: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138bf8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138C00u;
label_138c00:
    // 0x138c00: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x138C00u;
    {
        const bool branch_taken_0x138c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C00u;
        // 0x138c04: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c00) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138C08u;
label_138c08:
    // 0x138c08: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x138C08u;
    {
        const bool branch_taken_0x138c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C08u;
        // 0x138c0c: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c08) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138C10u;
label_138c10:
    // 0x138c10: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x138C10u;
    {
        const bool branch_taken_0x138c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C10u;
        // 0x138c14: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c10) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138C18u;
label_138c18:
    // 0x138c18: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x138C18u;
    {
        const bool branch_taken_0x138c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C18u;
        // 0x138c1c: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c18) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138C20u;
label_138c20:
    // 0x138c20: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x138C20u;
    {
        const bool branch_taken_0x138c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C20u;
        // 0x138c24: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c20) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138C28u;
label_138c28:
    // 0x138c28: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x138C28u;
    {
        const bool branch_taken_0x138c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C28u;
        // 0x138c2c: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c28) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138C30u;
label_138c30:
    // 0x138c30: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x138C30u;
    {
        const bool branch_taken_0x138c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C30u;
        // 0x138c34: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c30) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138C38u;
label_138c38:
    // 0x138c38: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x138C38u;
    {
        const bool branch_taken_0x138c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C38u;
        // 0x138c3c: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c38) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138C40u;
label_138c40:
    // 0x138c40: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x138C40u;
    {
        const bool branch_taken_0x138c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C40u;
        // 0x138c44: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c40) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138C48u;
label_138c48:
    // 0x138c48: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x138C48u;
    {
        const bool branch_taken_0x138c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C48u;
        // 0x138c4c: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c48) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138C50u;
label_138c50:
    // 0x138c50: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x138C50u;
    {
        const bool branch_taken_0x138c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C50u;
        // 0x138c54: 0xa2c80000  sb          $t0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c50) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138C58u;
label_138c58:
    // 0x138c58: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x138C58u;
    {
        const bool branch_taken_0x138c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C58u;
        // 0x138c5c: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c58) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138C60u;
label_138c60:
    // 0x138c60: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x138C60u;
    {
        const bool branch_taken_0x138c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C60u;
        // 0x138c64: 0xa2c80000  sb          $t0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c60) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138C68u;
label_138c68:
    // 0x138c68: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x138C68u;
    {
        const bool branch_taken_0x138c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C68u;
        // 0x138c6c: 0xa2c80000  sb          $t0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c68) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138C70u;
label_138c70:
    // 0x138c70: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x138C70u;
    {
        const bool branch_taken_0x138c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C70u;
        // 0x138c74: 0xa2c90000  sb          $t1, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c70) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138C78u;
label_138c78:
    // 0x138c78: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x138C78u;
    {
        const bool branch_taken_0x138c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C78u;
        // 0x138c7c: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c78) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138C80u;
label_138c80:
    // 0x138c80: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x138C80u;
    {
        const bool branch_taken_0x138c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C80u;
        // 0x138c84: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c80) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138C88u;
label_138c88:
    // 0x138c88: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x138C88u;
    {
        const bool branch_taken_0x138c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C88u;
        // 0x138c8c: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c88) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138C90u;
label_138c90:
    // 0x138c90: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x138C90u;
    {
        const bool branch_taken_0x138c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C90u;
        // 0x138c94: 0xa2c40000  sb          $a0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c90) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138C98u;
label_138c98:
    // 0x138c98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x138C98u;
    {
        const bool branch_taken_0x138c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C98u;
        // 0x138c9c: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138c98) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138CA0u;
label_138ca0:
    // 0x138ca0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x138CA0u;
    {
        const bool branch_taken_0x138ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CA0u;
        // 0x138ca4: 0xa2c70000  sb          $a3, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ca0) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138CA8u;
label_138ca8:
    // 0x138ca8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x138CA8u;
    {
        const bool branch_taken_0x138ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CA8u;
        // 0x138cac: 0xa2c80000  sb          $t0, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138ca8) {
            ctx->pc = 0x138CB8u;
            goto label_138cb8;
        }
    }
    ctx->pc = 0x138CB0u;
label_138cb0:
    // 0x138cb0: 0xa2c80000  sb          $t0, 0x0($s6)
    ctx->pc = 0x138cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x138cb4: 0x0  nop
    ctx->pc = 0x138cb4u;
    // NOP
label_138cb8:
    // 0x138cb8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x138cb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x138cbc: 0x2eb70fff  sltiu       $s7, $s5, 0xFFF
    ctx->pc = 0x138cbcu;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)4095) ? 1 : 0);
    // 0x138cc0: 0x16e0fcdf  bnez        $s7, . + 4 + (-0x321 << 2)
    ctx->pc = 0x138CC0u;
    {
        const bool branch_taken_0x138cc0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x138CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CC0u;
        // 0x138cc4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138cc0) {
            ctx->pc = 0x138040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138040;
        }
    }
    ctx->pc = 0x138CC8u;
    // 0x138cc8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x138cc8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x138ccc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x138cccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x138cd0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x138cd0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x138cd4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x138cd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x138cd8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x138cd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x138cdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x138cdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x138ce0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x138ce0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138ce4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x138ce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138ce8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x138ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138cec: 0x3e00008  jr          $ra
    ctx->pc = 0x138CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138CECu;
        // 0x138cf0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138CF4u;
}
