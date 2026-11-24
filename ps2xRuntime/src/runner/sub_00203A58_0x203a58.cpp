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

// Function: sub_00203A58
// Address: 0x203a58 - 0x203b68
void sub_00203A58_0x203a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203A58_0x203a58");
#endif

    switch (ctx->pc) {
        case 0x203a98u: goto label_203a98;
        case 0x203af4u: goto label_203af4;
        case 0x203b04u: goto label_203b04;
        case 0x203b18u: goto label_203b18;
        case 0x203b28u: goto label_203b28;
        case 0x203b38u: goto label_203b38;
        default: break;
    }

    ctx->pc = 0x203a58u;

    // 0x203a58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x203a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x203a5c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x203a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x203a60: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x203a60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x203a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203a68: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x203a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a6c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x203a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x203a70: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x203a70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a74: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x203a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x203a78: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x203a78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x203a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203a80: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x203a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x203a84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x203a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x203a88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x203a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x203a8c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x203a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x203a90: 0xc049590  jal         func_125640
    ctx->pc = 0x203A90u;
    SET_GPR_U32(ctx, 31, 0x203A98u);
    ctx->pc = 0x203A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203A90u;
    // 0x203a94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x203A90u, 0x203A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203A98u;
label_203a98:
    // 0x203a98: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x203A98u;
    {
        const bool branch_taken_0x203a98 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x203A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A98u;
        // 0x203a9c: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a98) {
            ctx->pc = 0x203AB4u;
            goto label_203ab4;
        }
    }
    ctx->pc = 0x203AA0u;
    // 0x203aa0: 0x1a600004  blez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x203AA0u;
    {
        const bool branch_taken_0x203aa0 = (GPR_S64(ctx, 19) <= 0);
        if (branch_taken_0x203aa0) {
            ctx->pc = 0x203AB4u;
            goto label_203ab4;
        }
    }
    ctx->pc = 0x203AA8u;
    // 0x203aa8: 0x326207ff  andi        $v0, $s3, 0x7FF
    ctx->pc = 0x203aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2047);
    // 0x203aac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x203AACu;
    {
        const bool branch_taken_0x203aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203aac) {
            ctx->pc = 0x203AE0u;
            goto label_203ae0;
        }
    }
    ctx->pc = 0x203AB4u;
label_203ab4:
    // 0x203ab4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203ab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203ab8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x203ab8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x203abc: 0x24846a08  addiu       $a0, $a0, 0x6A08
    ctx->pc = 0x203abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27144));
    // 0x203ac0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x203ac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203ac4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x203ac4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x203ac8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x203ac8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203acc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x203accu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x203ad0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x203ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203ad4: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x203AD4u;
    ctx->pc = 0x203AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203AD4u;
    // 0x203ad8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x203ADCu;
    // 0x203adc: 0x0  nop
    ctx->pc = 0x203adcu;
    // NOP
label_203ae0:
    // 0x203ae0: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x203AE0u;
    {
        const bool branch_taken_0x203ae0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x203AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AE0u;
        // 0x203ae4: 0x3c040087  lui         $a0, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)135 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ae0) {
            ctx->pc = 0x203B38u;
            goto label_203b38;
        }
    }
    ctx->pc = 0x203AE8u;
    // 0x203ae8: 0x2405008c  addiu       $a1, $zero, 0x8C
    ctx->pc = 0x203ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x203aec: 0xc08074a  jal         func_201D28
    ctx->pc = 0x203AECu;
    SET_GPR_U32(ctx, 31, 0x203AF4u);
    ctx->pc = 0x203AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203AECu;
    // 0x203af0: 0x24847848  addiu       $a0, $a0, 0x7848 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D28u, 0x203AECu, 0x203AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203AF4u;
label_203af4:
    // 0x203af4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x203af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203af8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x203af8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203afc: 0xc080754  jal         func_201D50
    ctx->pc = 0x203AFCu;
    SET_GPR_U32(ctx, 31, 0x203B04u);
    ctx->pc = 0x203B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203AFCu;
    // 0x203b00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D50u, 0x203AFCu, 0x203B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B04u;
label_203b04:
    // 0x203b04: 0x1312c3  sra         $v0, $s3, 11
    ctx->pc = 0x203b04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), 11));
    // 0x203b08: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x203B08u;
    {
        const bool branch_taken_0x203b08 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x203B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B08u;
        // 0x203b0c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b08) {
            ctx->pc = 0x203B30u;
            goto label_203b30;
        }
    }
    ctx->pc = 0x203B10u;
    // 0x203b10: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x203b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x203b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203b18:
    // 0x203b18: 0x26100800  addiu       $s0, $s0, 0x800
    ctx->pc = 0x203b18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2048));
    // 0x203b1c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x203b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x203b20: 0xc0807e8  jal         func_201FA0
    ctx->pc = 0x203B20u;
    SET_GPR_U32(ctx, 31, 0x203B28u);
    ctx->pc = 0x203B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B20u;
    // 0x203b24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201FA0u, 0x203B20u, 0x203B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B28u;
label_203b28:
    // 0x203b28: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x203B28u;
    {
        const bool branch_taken_0x203b28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x203B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203B28u;
        // 0x203b2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203b28) {
            ctx->pc = 0x203B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203b18;
        }
    }
    ctx->pc = 0x203B30u;
label_203b30:
    // 0x203b30: 0xc080752  jal         func_201D48
    ctx->pc = 0x203B30u;
    SET_GPR_U32(ctx, 31, 0x203B38u);
    ctx->pc = 0x203B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B30u;
    // 0x203b34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D48u, 0x203B30u, 0x203B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203B38u;
label_203b38:
    // 0x203b38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x203b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x203b3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x203b40: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x203b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x203b44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x203b48: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x203b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203b4c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x203b4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x203b50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x203b50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203b54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x203b54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x203b58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x203b58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x203b5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x203b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203b60: 0x8080eda  j           func_203B68
    ctx->pc = 0x203B60u;
    ctx->pc = 0x203B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203B60u;
    // 0x203b64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B68u;
    sub_00203B68_0x203b68(rdram, ctx, runtime); return;
    ctx->pc = 0x203B68u;
}
