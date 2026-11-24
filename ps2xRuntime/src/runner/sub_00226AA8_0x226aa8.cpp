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

// Function: sub_00226AA8
// Address: 0x226aa8 - 0x226bbc
void sub_00226AA8_0x226aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226AA8_0x226aa8");
#endif

    switch (ctx->pc) {
        case 0x226af4u: goto label_226af4;
        case 0x226b28u: goto label_226b28;
        case 0x226b44u: goto label_226b44;
        case 0x226b68u: goto label_226b68;
        case 0x226b8cu: goto label_226b8c;
        default: break;
    }

    ctx->pc = 0x226aa8u;

    // 0x226aa8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x226aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x226aac: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x226aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x226ab0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x226ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x226ab4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x226ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x226ab8: 0x245393b8  addiu       $s3, $v0, -0x6C48
    ctx->pc = 0x226ab8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939576));
    // 0x226abc: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x226abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x226ac0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x226ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x226ac4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x226ac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ac8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x226ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x226acc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x226accu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ad0: 0x246593c8  addiu       $a1, $v1, -0x6C38
    ctx->pc = 0x226ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939592));
    // 0x226ad4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x226ad4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ad8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x226ad8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226adc: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x226adcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x226ae0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x226ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ae4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x226ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x226ae8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x226ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x226aec: 0xc089af0  jal         func_226BC0
    ctx->pc = 0x226AECu;
    SET_GPR_U32(ctx, 31, 0x226AF4u);
    ctx->pc = 0x226AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226AECu;
    // 0x226af0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226BC0u, 0x226AECu, 0x226AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226AF4u;
label_226af4:
    // 0x226af4: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x226af4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x226af8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x226af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226afc: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x226afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x226b00: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x226b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x226b04: 0x24a593d0  addiu       $a1, $a1, -0x6C30
    ctx->pc = 0x226b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939600));
    // 0x226b08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x226b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x226b0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226B0Cu;
    {
        const bool branch_taken_0x226b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B0Cu;
        // 0x226b10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b0c) {
            ctx->pc = 0x226B20u;
            goto label_226b20;
        }
    }
    ctx->pc = 0x226B14u;
    // 0x226b14: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x226b14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x226b18: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x226B18u;
    {
        const bool branch_taken_0x226b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B18u;
        // 0x226b1c: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b18) {
            ctx->pc = 0x226B9Cu;
            goto label_226b9c;
        }
    }
    ctx->pc = 0x226B20u;
label_226b20:
    // 0x226b20: 0xc049d06  jal         func_127418
    ctx->pc = 0x226B20u;
    SET_GPR_U32(ctx, 31, 0x226B28u);
    ctx->pc = 0x127418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127418u, 0x226B20u, 0x226B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B28u;
label_226b28:
    // 0x226b28: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x226b28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x226b2c: 0x24a593d8  addiu       $a1, $a1, -0x6C28
    ctx->pc = 0x226b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939608));
    // 0x226b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226b34: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x226b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226b38: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x226b38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226b3c: 0xc089af0  jal         func_226BC0
    ctx->pc = 0x226B3Cu;
    SET_GPR_U32(ctx, 31, 0x226B44u);
    ctx->pc = 0x226B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B3Cu;
    // 0x226b40: 0x27a80004  addiu       $t0, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226BC0u, 0x226B3Cu, 0x226B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B44u;
label_226b44:
    // 0x226b44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x226b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226b48: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x226b48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226b4c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x226b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x226b50: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x226B50u;
    {
        const bool branch_taken_0x226b50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x226B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B50u;
        // 0x226b54: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b50) {
            ctx->pc = 0x226B60u;
            goto label_226b60;
        }
    }
    ctx->pc = 0x226B58u;
    // 0x226b58: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x226B58u;
    {
        const bool branch_taken_0x226b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226B58u;
        // 0x226b5c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226b58) {
            ctx->pc = 0x226B9Cu;
            goto label_226b9c;
        }
    }
    ctx->pc = 0x226B60u;
label_226b60:
    // 0x226b60: 0xc04b098  jal         func_12C260
    ctx->pc = 0x226B60u;
    SET_GPR_U32(ctx, 31, 0x226B68u);
    ctx->pc = 0x226B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B60u;
    // 0x226b64: 0xdfa40008  ld          $a0, 0x8($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C260u, 0x226B60u, 0x226B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B68u;
label_226b68:
    // 0x226b68: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x226b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x226b6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x226b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x226b70: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x226b70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x226b74: 0x24a593e0  addiu       $a1, $a1, -0x6C20
    ctx->pc = 0x226b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939616));
    // 0x226b78: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x226b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x226b7c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x226b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x226b80: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x226b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x226b84: 0xc049d06  jal         func_127418
    ctx->pc = 0x226B84u;
    SET_GPR_U32(ctx, 31, 0x226B8Cu);
    ctx->pc = 0x226B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B84u;
    // 0x226b88: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127418u, 0x226B84u, 0x226B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B8Cu;
label_226b8c:
    // 0x226b8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x226b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x226b90: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x226b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226b94: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x226b94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x226b98: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x226b98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_226b9c:
    // 0x226b9c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x226b9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226ba0: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x226ba0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x226ba4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x226ba4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226ba8: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x226ba8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x226bac: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x226bacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x226bb0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x226bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x226bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x226BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226BB4u;
        // 0x226bb8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226BBCu;
}
