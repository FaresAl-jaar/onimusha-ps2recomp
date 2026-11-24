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

// Function: sub_00219A98
// Address: 0x219a98 - 0x219bbc
void sub_00219A98_0x219a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219A98_0x219a98");
#endif

    switch (ctx->pc) {
        case 0x219ad0u: goto label_219ad0;
        case 0x219b08u: goto label_219b08;
        case 0x219b18u: goto label_219b18;
        case 0x219b58u: goto label_219b58;
        case 0x219b9cu: goto label_219b9c;
        default: break;
    }

    ctx->pc = 0x219a98u;

    // 0x219a98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x219a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x219a9c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x219a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x219aa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219aa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x219aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219aa8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x219aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x219aac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x219aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ab0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x219ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x219ab4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x219ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x219ab8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x219ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x219abc: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x219abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x219ac0: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x219AC0u;
    {
        const bool branch_taken_0x219ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x219AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219AC0u;
        // 0x219ac4: 0x8e131fc0  lw          $s3, 0x1FC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ac0) {
            ctx->pc = 0x219B10u;
            goto label_219b10;
        }
    }
    ctx->pc = 0x219AC8u;
    // 0x219ac8: 0xc0867bc  jal         func_219EF0
    ctx->pc = 0x219AC8u;
    SET_GPR_U32(ctx, 31, 0x219AD0u);
    ctx->pc = 0x219ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219AC8u;
    // 0x219acc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219EF0u, 0x219AC8u, 0x219AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219AD0u;
label_219ad0:
    // 0x219ad0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x219ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ad4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x219ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x219ad8: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x219AD8u;
    {
        const bool branch_taken_0x219ad8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x219ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219AD8u;
        // 0x219adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ad8) {
            ctx->pc = 0x219B00u;
            goto label_219b00;
        }
    }
    ctx->pc = 0x219AE0u;
    // 0x219ae0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219ae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219ae4: 0x34a50f1f  ori         $a1, $a1, 0xF1F
    ctx->pc = 0x219ae4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3871);
    // 0x219ae8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x219ae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219aec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x219aecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219af0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x219af0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x219af4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x219af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219af8: 0x80848e0  j           func_212380
    ctx->pc = 0x219AF8u;
    ctx->pc = 0x219AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219AF8u;
    // 0x219afc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x219B00u;
label_219b00:
    // 0x219b00: 0xc0867cc  jal         func_219F30
    ctx->pc = 0x219B00u;
    SET_GPR_U32(ctx, 31, 0x219B08u);
    ctx->pc = 0x219B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B00u;
    // 0x219b04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F30u, 0x219B00u, 0x219B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B08u;
label_219b08:
    // 0x219b08: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x219B08u;
    {
        const bool branch_taken_0x219b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B08u;
        // 0x219b0c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219b08) {
            ctx->pc = 0x219B90u;
            goto label_219b90;
        }
    }
    ctx->pc = 0x219B10u;
label_219b10:
    // 0x219b10: 0xc0866f0  jal         func_219BC0
    ctx->pc = 0x219B10u;
    SET_GPR_U32(ctx, 31, 0x219B18u);
    ctx->pc = 0x219BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219BC0u, 0x219B10u, 0x219B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B18u;
label_219b18:
    // 0x219b18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x219b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219b1c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x219b1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b20: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x219b20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x219b24: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x219b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x219b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b2c: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x219B2Cu;
    {
        const bool branch_taken_0x219b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x219B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B2Cu;
        // 0x219b30: 0x34a50f0e  ori         $a1, $a1, 0xF0E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3854);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219b2c) {
            ctx->pc = 0x219B50u;
            goto label_219b50;
        }
    }
    ctx->pc = 0x219B34u;
    // 0x219b34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219b34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219b38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x219b38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219b3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x219b3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219b40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x219b40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x219b44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x219b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219b48: 0x80848e0  j           func_212380
    ctx->pc = 0x219B48u;
    ctx->pc = 0x219B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B48u;
    // 0x219b4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x219B50u;
label_219b50:
    // 0x219b50: 0xc0867aa  jal         func_219EA8
    ctx->pc = 0x219B50u;
    SET_GPR_U32(ctx, 31, 0x219B58u);
    ctx->pc = 0x219B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B50u;
    // 0x219b54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219EA8u, 0x219B50u, 0x219B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B58u;
label_219b58:
    // 0x219b58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x219b5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219b60: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x219b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x219b64: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x219b64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x219b68: 0x10510009  beq         $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x219B68u;
    {
        const bool branch_taken_0x219b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x219B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219B68u;
        // 0x219b6c: 0x34a50f0f  ori         $a1, $a1, 0xF0F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3855);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219b68) {
            ctx->pc = 0x219B90u;
            goto label_219b90;
        }
    }
    ctx->pc = 0x219B70u;
    // 0x219b70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219b74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x219b74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219b78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x219b78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219b7c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x219b7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x219b80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x219b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219b84: 0x80848e0  j           func_212380
    ctx->pc = 0x219B84u;
    ctx->pc = 0x219B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B84u;
    // 0x219b88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x219B8Cu;
    // 0x219b8c: 0x0  nop
    ctx->pc = 0x219b8cu;
    // NOP
label_219b90:
    // 0x219b90: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x219b90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x219b94: 0xc086844  jal         func_21A110
    ctx->pc = 0x219B94u;
    SET_GPR_U32(ctx, 31, 0x219B9Cu);
    ctx->pc = 0x219B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219B94u;
    // 0x219b98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A110u, 0x219B94u, 0x219B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219B9Cu;
label_219b9c:
    // 0x219b9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x219b9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219ba0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219ba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219ba4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x219ba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219ba8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x219ba8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219bac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x219bacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x219bb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x219bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x219bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x219BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219BB4u;
        // 0x219bb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219BBCu;
}
