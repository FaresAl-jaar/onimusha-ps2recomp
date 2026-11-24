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

// Function: sub_002AEFC0
// Address: 0x2aefc0 - 0x2af0f0
void sub_002AEFC0_0x2aefc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AEFC0_0x2aefc0");
#endif

    switch (ctx->pc) {
        case 0x2aeff8u: goto label_2aeff8;
        case 0x2af058u: goto label_2af058;
        default: break;
    }

    ctx->pc = 0x2aefc0u;

    // 0x2aefc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2aefc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2aefc4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2aefc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2aefc8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2aefc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2aefcc: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2aefccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2aefd0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2aefd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2aefd4: 0x34461012  ori         $a2, $v0, 0x1012
    ctx->pc = 0x2aefd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4114);
    // 0x2aefd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2aefd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2aefdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2aefdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2aefe0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aefe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2aefe4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aefe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2aefe8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2aefe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aefec: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x2aefecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x2aeff0: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x2AEFF0u;
    SET_GPR_U32(ctx, 31, 0x2AEFF8u);
    ctx->pc = 0x2AEFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEFF0u;
    // 0x2aeff4: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x2AEFF0u, 0x2AEFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEFF8u;
label_2aeff8:
    // 0x2aeff8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2aeff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeffc: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2aeffcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af000: 0x3c057a00  lui         $a1, 0x7A00
    ctx->pc = 0x2af000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31232 << 16));
    // 0x2af004: 0x3c0b0580  lui         $t3, 0x580
    ctx->pc = 0x2af004u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)1408 << 16));
    // 0x2af008: 0x34ad7900  ori         $t5, $a1, 0x7900
    ctx->pc = 0x2af008u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30976);
    // 0x2af00c: 0x34b17100  ori         $s1, $a1, 0x7100
    ctx->pc = 0x2af00cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)28928);
    // 0x2af010: 0x3c050180  lui         $a1, 0x180
    ctx->pc = 0x2af010u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)384 << 16));
    // 0x2af014: 0x3419fffa  ori         $t9, $zero, 0xFFFA
    ctx->pc = 0x2af014u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x2af018: 0x34ac0300  ori         $t4, $a1, 0x300
    ctx->pc = 0x2af018u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)768);
    // 0x2af01c: 0x34b80800  ori         $t8, $a1, 0x800
    ctx->pc = 0x2af01cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
    // 0x2af020: 0x3c050700  lui         $a1, 0x700
    ctx->pc = 0x2af020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1792 << 16));
    // 0x2af024: 0x3c0f0400  lui         $t7, 0x400
    ctx->pc = 0x2af024u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)1024 << 16));
    // 0x2af028: 0x34aa0300  ori         $t2, $a1, 0x300
    ctx->pc = 0x2af028u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)768);
    // 0x2af02c: 0x356e0800  ori         $t6, $t3, 0x800
    ctx->pc = 0x2af02cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)2048);
    // 0x2af030: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x2af030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x2af034: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2af034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2af038: 0x34a92000  ori         $t1, $a1, 0x2000
    ctx->pc = 0x2af038u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x2af03c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2af03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2af040: 0x3c052028  lui         $a1, 0x2028
    ctx->pc = 0x2af040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8232 << 16));
    // 0x2af044: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x2af044u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
    // 0x2af048: 0x34b30156  ori         $s3, $a1, 0x156
    ctx->pc = 0x2af048u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)342);
    // 0x2af04c: 0x3c058080  lui         $a1, 0x8080
    ctx->pc = 0x2af04cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32896 << 16));
    // 0x2af050: 0x34b28080  ori         $s2, $a1, 0x8080
    ctx->pc = 0x2af050u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x2af054: 0x0  nop
    ctx->pc = 0x2af054u;
    // NOP
label_2af058:
    // 0x2af058: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x2af058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    // 0x2af05c: 0xac730004  sw          $s3, 0x4($v1)
    ctx->pc = 0x2af05cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
    // 0x2af060: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AF060u;
    {
        const bool branch_taken_0x2af060 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF060u;
        // 0x2af064: 0xac720008  sw          $s2, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af060) {
            ctx->pc = 0x2AF080u;
            goto label_2af080;
        }
    }
    ctx->pc = 0x2AF068u;
    // 0x2af068: 0xac710020  sw          $s1, 0x20($v1)
    ctx->pc = 0x2af068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 17));
    // 0x2af06c: 0xac790024  sw          $t9, 0x24($v1)
    ctx->pc = 0x2af06cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 25));
    // 0x2af070: 0xac780028  sw          $t8, 0x28($v1)
    ctx->pc = 0x2af070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 24));
    // 0x2af074: 0xac6f0018  sw          $t7, 0x18($v1)
    ctx->pc = 0x2af074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 15));
    // 0x2af078: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AF078u;
    {
        const bool branch_taken_0x2af078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF078u;
        // 0x2af07c: 0xac6e001c  sw          $t6, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af078) {
            ctx->pc = 0x2AF098u;
            goto label_2af098;
        }
    }
    ctx->pc = 0x2AF080u;
label_2af080:
    // 0x2af080: 0xac6d0020  sw          $t5, 0x20($v1)
    ctx->pc = 0x2af080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 13));
    // 0x2af084: 0xac790024  sw          $t9, 0x24($v1)
    ctx->pc = 0x2af084u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 25));
    // 0x2af088: 0xac6c0028  sw          $t4, 0x28($v1)
    ctx->pc = 0x2af088u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 12));
    // 0x2af08c: 0xac6b0018  sw          $t3, 0x18($v1)
    ctx->pc = 0x2af08cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 11));
    // 0x2af090: 0xac6a001c  sw          $t2, 0x1C($v1)
    ctx->pc = 0x2af090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 10));
    // 0x2af094: 0x0  nop
    ctx->pc = 0x2af094u;
    // NOP
label_2af098:
    // 0x2af098: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x2af098u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2af09c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2af09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2af0a0: 0x2c850002  sltiu       $a1, $a0, 0x2
    ctx->pc = 0x2af0a0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2af0a4: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x2af0a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x2af0a8: 0xac680004  sw          $t0, 0x4($v1)
    ctx->pc = 0x2af0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 8));
    // 0x2af0ac: 0xa067000f  sb          $a3, 0xF($v1)
    ctx->pc = 0x2af0acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 15), (uint8_t)GPR_U32(ctx, 7));
    // 0x2af0b0: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2af0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x2af0b4: 0xa4600014  sh          $zero, 0x14($v1)
    ctx->pc = 0x2af0b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x2af0b8: 0xa4660016  sh          $a2, 0x16($v1)
    ctx->pc = 0x2af0b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22), (uint16_t)GPR_U32(ctx, 6));
    // 0x2af0bc: 0x14a0ffe6  bnez        $a1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2AF0BCu;
    {
        const bool branch_taken_0x2af0bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF0BCu;
        // 0x2af0c0: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af0bc) {
            ctx->pc = 0x2AF058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af058;
        }
    }
    ctx->pc = 0x2AF0C4u;
    // 0x2af0c4: 0xa2000063  sb          $zero, 0x63($s0)
    ctx->pc = 0x2af0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 99), (uint8_t)GPR_U32(ctx, 0));
    // 0x2af0c8: 0xa6000060  sh          $zero, 0x60($s0)
    ctx->pc = 0x2af0c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 0));
    // 0x2af0cc: 0xa2070062  sb          $a3, 0x62($s0)
    ctx->pc = 0x2af0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 98), (uint8_t)GPR_U32(ctx, 7));
    // 0x2af0d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2af0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2af0d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2af0d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2af0d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2af0d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2af0dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2af0dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2af0e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2af0e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af0e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2af0e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF0E8u;
        // 0x2af0ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF0F0u;
}
