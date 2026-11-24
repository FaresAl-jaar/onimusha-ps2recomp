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

// Function: sub_0032E8E0
// Address: 0x32e8e0 - 0x32ea40
void sub_0032E8E0_0x32e8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032E8E0_0x32e8e0");
#endif

    switch (ctx->pc) {
        case 0x32e920u: goto label_32e920;
        case 0x32ea20u: goto label_32ea20;
        default: break;
    }

    ctx->pc = 0x32e8e0u;

    // 0x32e8e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32e8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x32e8e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x32e8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x32e8e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x32e8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x32e8ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32e8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x32e8f0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x32e8f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e8f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32e8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32e8f8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x32e8f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e8fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32e8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32e900: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x32e900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e904: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32e904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32e908: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32e908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e90c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32e90cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e910: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x32e910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x32e914: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x32e914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x32e918: 0xc05e360  jal         func_178D80
    ctx->pc = 0x32E918u;
    SET_GPR_U32(ctx, 31, 0x32E920u);
    ctx->pc = 0x32E91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E918u;
    // 0x32e91c: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x32E918u, 0x32E920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E920u;
label_32e920:
    // 0x32e920: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32e920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e924: 0x10a0003e  beqz        $a1, . + 4 + (0x3E << 2)
    ctx->pc = 0x32E924u;
    {
        const bool branch_taken_0x32e924 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e924) {
            ctx->pc = 0x32EA20u;
            goto label_32ea20;
        }
    }
    ctx->pc = 0x32E92Cu;
    // 0x32e92c: 0x14143c  dsll32      $v0, $s4, 16
    ctx->pc = 0x32e92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 16));
    // 0x32e930: 0x122600  sll         $a0, $s2, 24
    ctx->pc = 0x32e930u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 24));
    // 0x32e934: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32e934u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32e938: 0x3407fffa  ori         $a3, $zero, 0xFFFA
    ctx->pc = 0x32e938u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x32e93c: 0x24430700  addiu       $v1, $v0, 0x700
    ctx->pc = 0x32e93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x32e940: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x32e940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32e944: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x32e944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
    // 0x32e948: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x32e948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x32e94c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32e94cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32e950: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x32e950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x32e954: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x32e954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x32e958: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x32e958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x32e95c: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x32e95cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32e960: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32e960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32e964: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x32e964u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x32e968: 0x3c022028  lui         $v0, 0x2028
    ctx->pc = 0x32e968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8232 << 16));
    // 0x32e96c: 0x34430156  ori         $v1, $v0, 0x156
    ctx->pc = 0x32e96cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)342);
    // 0x32e970: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x32e970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x32e974: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x32e974u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x32e978: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x32e978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x32e97c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x32e97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x32e980: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x32e980u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x32e984: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32e984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32e988: 0x8e29001c  lw          $t1, 0x1C($s1)
    ctx->pc = 0x32e988u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x32e98c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x32e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x32e990: 0x34432000  ori         $v1, $v0, 0x2000
    ctx->pc = 0x32e990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x32e994: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x32e994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x32e998: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32e998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32e99c: 0xaca90010  sw          $t1, 0x10($a1)
    ctx->pc = 0x32e99cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 9));
    // 0x32e9a0: 0xa4a00014  sh          $zero, 0x14($a1)
    ctx->pc = 0x32e9a0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x32e9a4: 0x92090009  lbu         $t1, 0x9($s0)
    ctx->pc = 0x32e9a4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x32e9a8: 0xa4a90016  sh          $t1, 0x16($a1)
    ctx->pc = 0x32e9a8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 9));
    // 0x32e9ac: 0xaca80020  sw          $t0, 0x20($a1)
    ctx->pc = 0x32e9acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 8));
    // 0x32e9b0: 0xaca70024  sw          $a3, 0x24($a1)
    ctx->pc = 0x32e9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 7));
    // 0x32e9b4: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x32e9b4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32e9b8: 0x86070002  lh          $a3, 0x2($s0)
    ctx->pc = 0x32e9b8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x32e9bc: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x32e9bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x32e9c0: 0x73d00  sll         $a3, $a3, 20
    ctx->pc = 0x32e9c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 20));
    // 0x32e9c4: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x32e9c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x32e9c8: 0xaca70028  sw          $a3, 0x28($a1)
    ctx->pc = 0x32e9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 7));
    // 0x32e9cc: 0x86080004  lh          $t0, 0x4($s0)
    ctx->pc = 0x32e9ccu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32e9d0: 0x86070006  lh          $a3, 0x6($s0)
    ctx->pc = 0x32e9d0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x32e9d4: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x32e9d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x32e9d8: 0x73d00  sll         $a3, $a3, 20
    ctx->pc = 0x32e9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 20));
    // 0x32e9dc: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x32e9dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x32e9e0: 0xaca70018  sw          $a3, 0x18($a1)
    ctx->pc = 0x32e9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 7));
    // 0x32e9e4: 0x860a0004  lh          $t2, 0x4($s0)
    ctx->pc = 0x32e9e4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32e9e8: 0x86090000  lh          $t1, 0x0($s0)
    ctx->pc = 0x32e9e8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32e9ec: 0x86080006  lh          $t0, 0x6($s0)
    ctx->pc = 0x32e9ecu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x32e9f0: 0x86070002  lh          $a3, 0x2($s0)
    ctx->pc = 0x32e9f0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x32e9f4: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x32e9f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x32e9f8: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x32e9f8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x32e9fc: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x32e9fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x32ea00: 0x73d00  sll         $a3, $a3, 20
    ctx->pc = 0x32ea00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 20));
    // 0x32ea04: 0x1273825  or          $a3, $t1, $a3
    ctx->pc = 0x32ea04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x32ea08: 0xaca7001c  sw          $a3, 0x1C($a1)
    ctx->pc = 0x32ea08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 7));
    // 0x32ea0c: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x32ea0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x32ea10: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x32ea10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x32ea14: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x32ea14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x32ea18: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x32EA18u;
    SET_GPR_U32(ctx, 31, 0x32EA20u);
    ctx->pc = 0x32EA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EA18u;
    // 0x32ea1c: 0xa0a2000f  sb          $v0, 0xF($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x32EA18u, 0x32EA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EA20u;
label_32ea20:
    // 0x32ea20: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x32ea20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32ea24: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x32ea24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32ea28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32ea28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32ea2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32ea2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32ea30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32ea30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32ea34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32ea34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ea38: 0x3e00008  jr          $ra
    ctx->pc = 0x32EA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA38u;
        // 0x32ea3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EA40u;
}
