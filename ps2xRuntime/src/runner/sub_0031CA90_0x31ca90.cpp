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

// Function: sub_0031CA90
// Address: 0x31ca90 - 0x31cbbc
void sub_0031CA90_0x31ca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031CA90_0x31ca90");
#endif

    switch (ctx->pc) {
        case 0x31cb38u: goto label_31cb38;
        case 0x31cb88u: goto label_31cb88;
        default: break;
    }

    ctx->pc = 0x31ca90u;

    // 0x31ca90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31ca90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31ca94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31ca94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ca98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31ca98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31ca9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31ca9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31caa0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31caa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31caa4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31caa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31caa8: 0x9085001b  lbu         $a1, 0x1B($a0)
    ctx->pc = 0x31caa8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 27)));
    // 0x31caac: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x31caacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x31cab0: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x31CAB0u;
    {
        const bool branch_taken_0x31cab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CAB0u;
        // 0x31cab4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cab0) {
            ctx->pc = 0x31CB40u;
            goto label_31cb40;
        }
    }
    ctx->pc = 0x31CAB8u;
    // 0x31cab8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x31cab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x31cabc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x31cabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x31cac0: 0x8c231100  lw          $v1, 0x1100($at)
    ctx->pc = 0x31cac0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x811100u));
    // 0x31cac4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31cac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31cac8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31CAC8u;
    {
        const bool branch_taken_0x31cac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cac8) {
            ctx->pc = 0x31CAF0u;
            goto label_31caf0;
        }
    }
    ctx->pc = 0x31CAD0u;
    // 0x31cad0: 0x87828b3c  lh          $v0, -0x74C4($gp)
    ctx->pc = 0x31cad0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937404)));
    // 0x31cad4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31cad8: 0xa7828b3c  sh          $v0, -0x74C4($gp)
    ctx->pc = 0x31cad8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937404), (uint16_t)GPR_U32(ctx, 2));
    // 0x31cadc: 0x87828b3c  lh          $v0, -0x74C4($gp)
    ctx->pc = 0x31cadcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937404)));
    // 0x31cae0: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31CAE0u;
    {
        const bool branch_taken_0x31cae0 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x31cae0) {
            ctx->pc = 0x31CB10u;
            goto label_31cb10;
        }
    }
    ctx->pc = 0x31CAE8u;
    // 0x31cae8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31CAE8u;
    {
        const bool branch_taken_0x31cae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CAE8u;
        // 0x31caec: 0xa7808b3c  sh          $zero, -0x74C4($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294937404), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cae8) {
            ctx->pc = 0x31CB10u;
            goto label_31cb10;
        }
    }
    ctx->pc = 0x31CAF0u;
label_31caf0:
    // 0x31caf0: 0x87828b3c  lh          $v0, -0x74C4($gp)
    ctx->pc = 0x31caf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937404)));
    // 0x31caf4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31caf8: 0xa7828b3c  sh          $v0, -0x74C4($gp)
    ctx->pc = 0x31caf8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937404), (uint16_t)GPR_U32(ctx, 2));
    // 0x31cafc: 0x87828b3c  lh          $v0, -0x74C4($gp)
    ctx->pc = 0x31cafcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937404)));
    // 0x31cb00: 0x28410100  slti        $at, $v0, 0x100
    ctx->pc = 0x31cb00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x31cb04: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x31CB04u;
    {
        const bool branch_taken_0x31cb04 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x31CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CB04u;
        // 0x31cb08: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31cb04) {
            ctx->pc = 0x31CB10u;
            goto label_31cb10;
        }
    }
    ctx->pc = 0x31CB0Cu;
    // 0x31cb0c: 0xa7828b3c  sh          $v0, -0x74C4($gp)
    ctx->pc = 0x31cb0cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937404), (uint16_t)GPR_U32(ctx, 2));
label_31cb10:
    // 0x31cb10: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x31cb10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31cb14: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x31cb14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x31cb18: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x31cb18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x31cb1c: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x31cb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x31cb20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31cb20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cb24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31cb24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cb28: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x31cb28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x31cb2c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x31cb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x31cb30: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x31CB30u;
    SET_GPR_U32(ctx, 31, 0x31CB38u);
    ctx->pc = 0x31CB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CB30u;
    // 0x31cb34: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x31CB30u, 0x31CB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CB38u;
label_31cb38:
    // 0x31cb38: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x31CB38u;
    {
        const bool branch_taken_0x31cb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cb38) {
            ctx->pc = 0x31CB90u;
            goto label_31cb90;
        }
    }
    ctx->pc = 0x31CB40u;
label_31cb40:
    // 0x31cb40: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x31cb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x31cb44: 0x8c241100  lw          $a0, 0x1100($at)
    ctx->pc = 0x31cb44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x811100u));
    // 0x31cb48: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x31cb48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x31cb4c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x31cb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31cb50: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x31CB50u;
    {
        const bool branch_taken_0x31cb50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31cb50) {
            ctx->pc = 0x31CB90u;
            goto label_31cb90;
        }
    }
    ctx->pc = 0x31CB58u;
    // 0x31cb58: 0x34a20080  ori         $v0, $a1, 0x80
    ctx->pc = 0x31cb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x31cb5c: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x31cb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x31cb60: 0xa222001b  sb          $v0, 0x1B($s1)
    ctx->pc = 0x31cb60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 27), (uint8_t)GPR_U32(ctx, 2));
    // 0x31cb64: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x31cb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x31cb68: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x31cb68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31cb6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31cb6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cb70: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x31cb70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x31cb74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31cb74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cb78: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x31cb78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31cb7c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x31cb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x31cb80: 0xc0c99d0  jal         func_326740
    ctx->pc = 0x31CB80u;
    SET_GPR_U32(ctx, 31, 0x31CB88u);
    ctx->pc = 0x31CB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CB80u;
    // 0x31cb84: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326740u, 0x31CB80u, 0x31CB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CB88u;
label_31cb88:
    // 0x31cb88: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x31cb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31cb8c: 0xa7838b3c  sh          $v1, -0x74C4($gp)
    ctx->pc = 0x31cb8cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937404), (uint16_t)GPR_U32(ctx, 3));
label_31cb90:
    // 0x31cb90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31CB90u;
    {
        const bool branch_taken_0x31cb90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cb90) {
            ctx->pc = 0x31CBA0u;
            goto label_31cba0;
        }
    }
    ctx->pc = 0x31CB98u;
    // 0x31cb98: 0x87838b3c  lh          $v1, -0x74C4($gp)
    ctx->pc = 0x31cb98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937404)));
    // 0x31cb9c: 0xa043000d  sb          $v1, 0xD($v0)
    ctx->pc = 0x31cb9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 13), (uint8_t)GPR_U32(ctx, 3));
label_31cba0:
    // 0x31cba0: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x31cba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x31cba4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31cba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31cba8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31cba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cbac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31cbacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31cbb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31cbb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31cbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x31CBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CBB4u;
        // 0x31cbb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31CBBCu;
}
