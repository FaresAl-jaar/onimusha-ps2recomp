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

// Function: sub_00331A00
// Address: 0x331a00 - 0x331ae4
void sub_00331A00_0x331a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331A00_0x331a00");
#endif

    switch (ctx->pc) {
        case 0x331a40u: goto label_331a40;
        case 0x331a50u: goto label_331a50;
        case 0x331a8cu: goto label_331a8c;
        case 0x331a94u: goto label_331a94;
        case 0x331ac4u: goto label_331ac4;
        default: break;
    }

    ctx->pc = 0x331a00u;

    // 0x331a00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x331a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x331a04: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x331a04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x331a08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x331a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x331a0c: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x331a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x331a10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x331a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x331a14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x331a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x331a18: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x331a18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331a1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x331a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x331a20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x331a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x331a24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x331a24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331a28: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x331a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x331a2c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x331a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331a30: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x331a30u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x331a34: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x331a34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x331a38: 0xc0bd324  jal         func_2F4C90
    ctx->pc = 0x331A38u;
    SET_GPR_U32(ctx, 31, 0x331A40u);
    ctx->pc = 0x331A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331A38u;
    // 0x331a3c: 0x30460001  andi        $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4C90u, 0x331A38u, 0x331A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331A40u;
label_331a40:
    // 0x331a40: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x331a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x331a44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x331a44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331a48: 0xc0bd2d4  jal         func_2F4B50
    ctx->pc = 0x331A48u;
    SET_GPR_U32(ctx, 31, 0x331A50u);
    ctx->pc = 0x331A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331A48u;
    // 0x331a4c: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4B50u, 0x331A48u, 0x331A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331A50u;
label_331a50:
    // 0x331a50: 0x52082b  sltu        $at, $v0, $s2
    ctx->pc = 0x331a50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x331a54: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x331A54u;
    {
        const bool branch_taken_0x331a54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x331a54) {
            ctx->pc = 0x331A64u;
            goto label_331a64;
        }
    }
    ctx->pc = 0x331A5Cu;
    // 0x331a5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x331A5Cu;
    {
        const bool branch_taken_0x331a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331A5Cu;
        // 0x331a60: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331a5c) {
            ctx->pc = 0x331A68u;
            goto label_331a68;
        }
    }
    ctx->pc = 0x331A64u;
label_331a64:
    // 0x331a64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x331a64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_331a68:
    // 0x331a68: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x331a68u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x331a6c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x331a6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331a70: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x331a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x331a74: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x331a74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331a78: 0x2444fff8  addiu       $a0, $v0, -0x8
    ctx->pc = 0x331a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x331a7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x331a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331a80: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x331a80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x331a84: 0xc0ed738  jal         func_3B5CE0
    ctx->pc = 0x331A84u;
    SET_GPR_U32(ctx, 31, 0x331A8Cu);
    ctx->pc = 0x331A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331A84u;
    // 0x331a88: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5CE0u, 0x331A84u, 0x331A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331A8Cu;
label_331a8c:
    // 0x331a8c: 0xc0e5d4c  jal         func_397530
    ctx->pc = 0x331A8Cu;
    SET_GPR_U32(ctx, 31, 0x331A94u);
    ctx->pc = 0x397530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397530u, 0x331A8Cu, 0x331A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331A94u;
label_331a94:
    // 0x331a94: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x331A94u;
    {
        const bool branch_taken_0x331a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x331a94) {
            ctx->pc = 0x331AC8u;
            goto label_331ac8;
        }
    }
    ctx->pc = 0x331A9Cu;
    // 0x331a9c: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x331a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x331aa0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x331aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x331aa4: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x331aa4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x331aa8: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x331aa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x331aac: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x331aacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x331ab0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x331ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x331ab4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x331ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x331ab8: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x331ab8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x331abc: 0xc095f88  jal         func_257E20
    ctx->pc = 0x331ABCu;
    SET_GPR_U32(ctx, 31, 0x331AC4u);
    ctx->pc = 0x331AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331ABCu;
    // 0x331ac0: 0x2529ce08  addiu       $t1, $t1, -0x31F8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x331ABCu, 0x331AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331AC4u;
label_331ac4:
    // 0x331ac4: 0x0  nop
    ctx->pc = 0x331ac4u;
    // NOP
label_331ac8:
    // 0x331ac8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x331ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x331acc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x331accu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x331ad0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x331ad0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x331ad4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x331ad4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331ad8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x331ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331adc: 0x3e00008  jr          $ra
    ctx->pc = 0x331ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331ADCu;
        // 0x331ae0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331AE4u;
}
