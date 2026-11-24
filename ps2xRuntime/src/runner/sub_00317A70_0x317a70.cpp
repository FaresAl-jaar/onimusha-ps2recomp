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

// Function: sub_00317A70
// Address: 0x317a70 - 0x317b58
void sub_00317A70_0x317a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317A70_0x317a70");
#endif

    switch (ctx->pc) {
        case 0x317a98u: goto label_317a98;
        case 0x317aacu: goto label_317aac;
        case 0x317ac4u: goto label_317ac4;
        case 0x317ae8u: goto label_317ae8;
        case 0x317b24u: goto label_317b24;
        default: break;
    }

    ctx->pc = 0x317a70u;

    // 0x317a70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x317a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x317a74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x317a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x317a78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x317a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x317a7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x317a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x317a80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x317a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x317a84: 0x90832015  lbu         $v1, 0x2015($a0)
    ctx->pc = 0x317a84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8213)));
    // 0x317a88: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x317A88u;
    {
        const bool branch_taken_0x317a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x317A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317A88u;
        // 0x317a8c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317a88) {
            ctx->pc = 0x317A98u;
            goto label_317a98;
        }
    }
    ctx->pc = 0x317A90u;
    // 0x317a90: 0xc0c42d0  jal         func_310B40
    ctx->pc = 0x317A90u;
    SET_GPR_U32(ctx, 31, 0x317A98u);
    ctx->pc = 0x310B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310B40u, 0x317A90u, 0x317A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317A98u;
label_317a98:
    // 0x317a98: 0x92432014  lbu         $v1, 0x2014($s2)
    ctx->pc = 0x317a98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8212)));
    // 0x317a9c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x317A9Cu;
    {
        const bool branch_taken_0x317a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x317AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317A9Cu;
        // 0x317aa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317a9c) {
            ctx->pc = 0x317AB0u;
            goto label_317ab0;
        }
    }
    ctx->pc = 0x317AA4u;
    // 0x317aa4: 0xc0c461c  jal         func_311870
    ctx->pc = 0x317AA4u;
    SET_GPR_U32(ctx, 31, 0x317AACu);
    ctx->pc = 0x311870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311870u, 0x317AA4u, 0x317AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317AACu;
label_317aac:
    // 0x317aac: 0x0  nop
    ctx->pc = 0x317aacu;
    // NOP
label_317ab0:
    // 0x317ab0: 0x92432016  lbu         $v1, 0x2016($s2)
    ctx->pc = 0x317ab0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8214)));
    // 0x317ab4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x317AB4u;
    {
        const bool branch_taken_0x317ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x317AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317AB4u;
        // 0x317ab8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ab4) {
            ctx->pc = 0x317AC8u;
            goto label_317ac8;
        }
    }
    ctx->pc = 0x317ABCu;
    // 0x317abc: 0xc0c5ed8  jal         func_317B60
    ctx->pc = 0x317ABCu;
    SET_GPR_U32(ctx, 31, 0x317AC4u);
    ctx->pc = 0x317B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317B60u, 0x317ABCu, 0x317AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317AC4u;
label_317ac4:
    // 0x317ac4: 0x0  nop
    ctx->pc = 0x317ac4u;
    // NOP
label_317ac8:
    // 0x317ac8: 0x92432017  lbu         $v1, 0x2017($s2)
    ctx->pc = 0x317ac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8215)));
    // 0x317acc: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x317ACCu;
    {
        const bool branch_taken_0x317acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x317acc) {
            ctx->pc = 0x317B40u;
            goto label_317b40;
        }
    }
    ctx->pc = 0x317AD4u;
    // 0x317ad4: 0x8e432000  lw          $v1, 0x2000($s2)
    ctx->pc = 0x317ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8192)));
    // 0x317ad8: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x317ad8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x317adc: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x317ADCu;
    {
        const bool branch_taken_0x317adc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x317AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317ADCu;
        // 0x317ae0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317adc) {
            ctx->pc = 0x317B40u;
            goto label_317b40;
        }
    }
    ctx->pc = 0x317AE4u;
    // 0x317ae4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x317ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_317ae8:
    // 0x317ae8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x317ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x317aec: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x317aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x317af0: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x317AF0u;
    {
        const bool branch_taken_0x317af0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x317AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317AF0u;
        // 0x317af4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317af0) {
            ctx->pc = 0x317B28u;
            goto label_317b28;
        }
    }
    ctx->pc = 0x317AF8u;
    // 0x317af8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x317AF8u;
    {
        const bool branch_taken_0x317af8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x317af8) {
            ctx->pc = 0x317B18u;
            goto label_317b18;
        }
    }
    ctx->pc = 0x317B00u;
    // 0x317b00: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x317b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x317b04: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x317B04u;
    {
        const bool branch_taken_0x317b04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x317b04) {
            ctx->pc = 0x317B18u;
            goto label_317b18;
        }
    }
    ctx->pc = 0x317B0Cu;
    // 0x317b0c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x317B0Cu;
    {
        const bool branch_taken_0x317b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317b0c) {
            ctx->pc = 0x317B28u;
            goto label_317b28;
        }
    }
    ctx->pc = 0x317B14u;
    // 0x317b14: 0x0  nop
    ctx->pc = 0x317b14u;
    // NOP
label_317b18:
    // 0x317b18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x317b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317b1c: 0xc0c5690  jal         func_315A40
    ctx->pc = 0x317B1Cu;
    SET_GPR_U32(ctx, 31, 0x317B24u);
    ctx->pc = 0x317B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317B1Cu;
    // 0x317b20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315A40u, 0x317B1Cu, 0x317B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317B24u;
label_317b24:
    // 0x317b24: 0x0  nop
    ctx->pc = 0x317b24u;
    // NOP
label_317b28:
    // 0x317b28: 0x8e432000  lw          $v1, 0x2000($s2)
    ctx->pc = 0x317b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8192)));
    // 0x317b2c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x317b2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x317b30: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x317b30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x317b34: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x317B34u;
    {
        const bool branch_taken_0x317b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x317B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B34u;
        // 0x317b38: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317b34) {
            ctx->pc = 0x317AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317ae8;
        }
    }
    ctx->pc = 0x317B3Cu;
    // 0x317b3c: 0x0  nop
    ctx->pc = 0x317b3cu;
    // NOP
label_317b40:
    // 0x317b40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x317b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x317b44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x317b44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x317b48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x317b48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x317b4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x317b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317b50: 0x3e00008  jr          $ra
    ctx->pc = 0x317B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317B50u;
        // 0x317b54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317B58u;
}
