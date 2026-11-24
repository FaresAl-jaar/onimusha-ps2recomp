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

// Function: sub_001679C0
// Address: 0x1679c0 - 0x167b14
void sub_001679C0_0x1679c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001679C0_0x1679c0");
#endif

    switch (ctx->pc) {
        case 0x167a4cu: goto label_167a4c;
        case 0x167a84u: goto label_167a84;
        case 0x167a98u: goto label_167a98;
        default: break;
    }

    ctx->pc = 0x1679c0u;

    // 0x1679c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1679c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1679c4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1679c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1679c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1679c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1679cc: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x1679ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1679d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1679d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1679d4: 0x34028003  ori         $v0, $zero, 0x8003
    ctx->pc = 0x1679d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32771);
    // 0x1679d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1679d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1679dc: 0x484025  or          $t0, $v0, $t0
    ctx->pc = 0x1679dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1679e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1679e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1679e4: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1679e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1679e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1679e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1679ec: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1679ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1679f0: 0xfca80000  sd          $t0, 0x0($a1)
    ctx->pc = 0x1679f0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 8));
    // 0x1679f4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1679f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1679f8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1679f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1679fc: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x1679fcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x167a00: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x167a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a04: 0x240c0  sll         $t0, $v0, 3
    ctx->pc = 0x167a04u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x167a08: 0x8c87008c  lw          $a3, 0x8C($a0)
    ctx->pc = 0x167a08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x167a0c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x167a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x167a10: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x167a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x167a14: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x167a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x167a18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x167a18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a1c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x167a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x167a20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x167a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x167a24: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x167a24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167a28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x167a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x167a2c: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x167a2cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x167a30: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x167a30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x167a34: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x167a34u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x167a38: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x167a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x167a3c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x167a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x167a40: 0x8c84008c  lw          $a0, 0x8C($a0)
    ctx->pc = 0x167a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x167a44: 0xc04d004  jal         func_134010
    ctx->pc = 0x167A44u;
    SET_GPR_U32(ctx, 31, 0x167A4Cu);
    ctx->pc = 0x167A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167A44u;
    // 0x167a48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134010u, 0x167A44u, 0x167A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A4Cu;
label_167a4c:
    // 0x167a4c: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x167a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x167a50: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x167a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x167a54: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x167a54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x167a58: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x167a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x167a5c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x167a5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x167a60: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x167a60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x167a64: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x167a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x167a68: 0x70042389  pcpyld      $a0, $zero, $a0
    ctx->pc = 0x167a68u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x167a6c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x167a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x167a70: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x167a70u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
    // 0x167a74: 0xfe230018  sd          $v1, 0x18($s1)
    ctx->pc = 0x167a74u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 3));
    // 0x167a78: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x167a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x167a7c: 0xc04d050  jal         func_134140
    ctx->pc = 0x167A7Cu;
    SET_GPR_U32(ctx, 31, 0x167A84u);
    ctx->pc = 0x167A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167A7Cu;
    // 0x167a80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134140u, 0x167A7Cu, 0x167A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A84u;
label_167a84:
    // 0x167a84: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x167A84u;
    {
        const bool branch_taken_0x167a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167A84u;
        // 0x167a88: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167a84) {
            ctx->pc = 0x167AD8u;
            goto label_167ad8;
        }
    }
    ctx->pc = 0x167A8Cu;
    // 0x167a8c: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x167a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x167a90: 0xc04d058  jal         func_134160
    ctx->pc = 0x167A90u;
    SET_GPR_U32(ctx, 31, 0x167A98u);
    ctx->pc = 0x167A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167A90u;
    // 0x167a94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134160u, 0x167A90u, 0x167A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A98u;
label_167a98:
    // 0x167a98: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x167a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x167a9c: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x167a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    // 0x167aa0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x167aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x167aa4: 0x328b8  dsll        $a1, $v1, 2
    ctx->pc = 0x167aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 2);
    // 0x167aa8: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x167aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x167aac: 0xfe230038  sd          $v1, 0x38($s1)
    ctx->pc = 0x167aacu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 3));
    // 0x167ab0: 0x2403ff88  addiu       $v1, $zero, -0x78
    ctx->pc = 0x167ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967176));
    // 0x167ab4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x167ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x167ab8: 0x24030360  addiu       $v1, $zero, 0x360
    ctx->pc = 0x167ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
    // 0x167abc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x167abcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x167ac0: 0x70042389  pcpyld      $a0, $zero, $a0
    ctx->pc = 0x167ac0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x167ac4: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x167ac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x167ac8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x167ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x167acc: 0xfe240020  sd          $a0, 0x20($s1)
    ctx->pc = 0x167accu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 4));
    // 0x167ad0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x167AD0u;
    {
        const bool branch_taken_0x167ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167AD0u;
        // 0x167ad4: 0xfe230028  sd          $v1, 0x28($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ad0) {
            ctx->pc = 0x167AF8u;
            goto label_167af8;
        }
    }
    ctx->pc = 0x167AD8u;
label_167ad8:
    // 0x167ad8: 0xfe200030  sd          $zero, 0x30($s1)
    ctx->pc = 0x167ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 0));
    // 0x167adc: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x167adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x167ae0: 0x24040360  addiu       $a0, $zero, 0x360
    ctx->pc = 0x167ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
    // 0x167ae4: 0xfe230038  sd          $v1, 0x38($s1)
    ctx->pc = 0x167ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 3));
    // 0x167ae8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x167ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x167aec: 0xfe240020  sd          $a0, 0x20($s1)
    ctx->pc = 0x167aecu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 4));
    // 0x167af0: 0xfe230028  sd          $v1, 0x28($s1)
    ctx->pc = 0x167af0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 3));
    // 0x167af4: 0x0  nop
    ctx->pc = 0x167af4u;
    // NOP
label_167af8:
    // 0x167af8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x167af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167afc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x167afcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167b00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x167b00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167b04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167b04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167b08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x167B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B0Cu;
        // 0x167b10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167B14u;
}
