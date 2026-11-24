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

// Function: sub_003B1AF0
// Address: 0x3b1af0 - 0x3b1b84
void sub_003B1AF0_0x3b1af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1AF0_0x3b1af0");
#endif

    switch (ctx->pc) {
        case 0x3b1b10u: goto label_3b1b10;
        case 0x3b1b44u: goto label_3b1b44;
        case 0x3b1b50u: goto label_3b1b50;
        case 0x3b1b5cu: goto label_3b1b5c;
        case 0x3b1b68u: goto label_3b1b68;
        case 0x3b1b74u: goto label_3b1b74;
        default: break;
    }

    ctx->pc = 0x3b1af0u;

    // 0x3b1af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b1af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b1af4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b1af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b1af8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b1af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b1afc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b1afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1b00: 0x9084053b  lbu         $a0, 0x53B($a0)
    ctx->pc = 0x3b1b00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1339)));
    // 0x3b1b04: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3b1b04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3b1b08: 0xc0aad20  jal         func_2AB480
    ctx->pc = 0x3B1B08u;
    SET_GPR_U32(ctx, 31, 0x3B1B10u);
    ctx->pc = 0x3B1B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1B08u;
    // 0x3b1b0c: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB480u, 0x3B1B08u, 0x3B1B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1B10u;
label_3b1b10:
    // 0x3b1b10: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x3b1b10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3b1b14: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3b1b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3b1b18: 0x3c022800  lui         $v0, 0x2800
    ctx->pc = 0x3b1b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10240 << 16));
    // 0x3b1b1c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3b1b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3b1b20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b1b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1b24: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3b1b24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
    // 0x3b1b28: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x3b1b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3b1b2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b1b2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1b30: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3b1b30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1b34: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3b1b34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1b38: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3b1b38u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1b3c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3B1B3Cu;
    SET_GPR_U32(ctx, 31, 0x3B1B44u);
    ctx->pc = 0x3B1B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1B3Cu;
    // 0x3b1b40: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3B1B3Cu, 0x3B1B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1B44u;
label_3b1b44:
    // 0x3b1b44: 0x8e050560  lw          $a1, 0x560($s0)
    ctx->pc = 0x3b1b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x3b1b48: 0xc0c0844  jal         func_302110
    ctx->pc = 0x3B1B48u;
    SET_GPR_U32(ctx, 31, 0x3B1B50u);
    ctx->pc = 0x3B1B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1B48u;
    // 0x3b1b4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x3B1B48u, 0x3B1B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1B50u;
label_3b1b50:
    // 0x3b1b50: 0x8e050564  lw          $a1, 0x564($s0)
    ctx->pc = 0x3b1b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x3b1b54: 0xc0c0844  jal         func_302110
    ctx->pc = 0x3B1B54u;
    SET_GPR_U32(ctx, 31, 0x3B1B5Cu);
    ctx->pc = 0x3B1B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1B54u;
    // 0x3b1b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x3B1B54u, 0x3B1B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1B5Cu;
label_3b1b5c:
    // 0x3b1b5c: 0x8e050568  lw          $a1, 0x568($s0)
    ctx->pc = 0x3b1b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x3b1b60: 0xc0c0844  jal         func_302110
    ctx->pc = 0x3B1B60u;
    SET_GPR_U32(ctx, 31, 0x3B1B68u);
    ctx->pc = 0x3B1B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1B60u;
    // 0x3b1b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x3B1B60u, 0x3B1B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1B68u;
label_3b1b68:
    // 0x3b1b68: 0x8e05056c  lw          $a1, 0x56C($s0)
    ctx->pc = 0x3b1b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1388)));
    // 0x3b1b6c: 0xc0c0844  jal         func_302110
    ctx->pc = 0x3B1B6Cu;
    SET_GPR_U32(ctx, 31, 0x3B1B74u);
    ctx->pc = 0x3B1B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1B6Cu;
    // 0x3b1b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302110u, 0x3B1B6Cu, 0x3B1B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1B74u;
label_3b1b74:
    // 0x3b1b74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b1b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b1b78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b1b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b1b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1B7Cu;
        // 0x3b1b80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1B84u;
}
