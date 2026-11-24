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

// Function: sub_0032EA40
// Address: 0x32ea40 - 0x32eb30
void sub_0032EA40_0x32ea40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032EA40_0x32ea40");
#endif

    switch (ctx->pc) {
        case 0x32ea70u: goto label_32ea70;
        case 0x32eb14u: goto label_32eb14;
        default: break;
    }

    ctx->pc = 0x32ea40u;

    // 0x32ea40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32ea40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32ea44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32ea44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x32ea48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32ea48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32ea4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32ea4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32ea50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32ea50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ea54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32ea54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32ea58: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32ea58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ea5c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x32ea5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x32ea60: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x32ea60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ea64: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x32ea64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x32ea68: 0xc05e360  jal         func_178D80
    ctx->pc = 0x32EA68u;
    SET_GPR_U32(ctx, 31, 0x32EA70u);
    ctx->pc = 0x32EA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EA68u;
    // 0x32ea6c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x32EA68u, 0x32EA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EA70u;
label_32ea70:
    // 0x32ea70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32ea70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ea74: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x32EA74u;
    {
        const bool branch_taken_0x32ea74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ea74) {
            ctx->pc = 0x32EB18u;
            goto label_32eb18;
        }
    }
    ctx->pc = 0x32EA7Cu;
    // 0x32ea7c: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x32ea7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x32ea80: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x32ea80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x32ea84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32ea84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32ea88: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x32ea88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x32ea8c: 0x32600  sll         $a0, $v1, 24
    ctx->pc = 0x32ea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x32ea90: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x32ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x32ea94: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x32ea94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32ea98: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x32ea98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x32ea9c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x32ea9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x32eaa0: 0x3c061818  lui         $a2, 0x1818
    ctx->pc = 0x32eaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6168 << 16));
    // 0x32eaa4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32eaa4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32eaa8: 0x34c60046  ori         $a2, $a2, 0x46
    ctx->pc = 0x32eaa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)70);
    // 0x32eaac: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x32eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x32eab0: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x32eab0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x32eab4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32eab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32eab8: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x32eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x32eabc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x32eabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32eac0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x32eac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32eac4: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x32eac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x32eac8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x32eac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x32eacc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x32eaccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x32ead0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x32ead0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x32ead4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32ead4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32ead8: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x32ead8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x32eadc: 0x3403fffc  ori         $v1, $zero, 0xFFFC
    ctx->pc = 0x32eadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x32eae0: 0x3c020190  lui         $v0, 0x190
    ctx->pc = 0x32eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)400 << 16));
    // 0x32eae4: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x32eae4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    // 0x32eae8: 0x34420980  ori         $v0, $v0, 0x980
    ctx->pc = 0x32eae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2432);
    // 0x32eaec: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x32eaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x32eaf0: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x32eaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x32eaf4: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x32eaf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x32eaf8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x32eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x32eafc: 0x34432000  ori         $v1, $v0, 0x2000
    ctx->pc = 0x32eafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x32eb00: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32eb04: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x32eb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x32eb08: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x32eb08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x32eb0c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x32EB0Cu;
    SET_GPR_U32(ctx, 31, 0x32EB14u);
    ctx->pc = 0x32EB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EB0Cu;
    // 0x32eb10: 0xa0a2000f  sb          $v0, 0xF($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x32EB0Cu, 0x32EB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EB14u;
label_32eb14:
    // 0x32eb14: 0x0  nop
    ctx->pc = 0x32eb14u;
    // NOP
label_32eb18:
    // 0x32eb18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32eb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32eb1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32eb1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32eb20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32eb20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32eb24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32eb24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32eb28: 0x3e00008  jr          $ra
    ctx->pc = 0x32EB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB28u;
        // 0x32eb2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EB30u;
}
