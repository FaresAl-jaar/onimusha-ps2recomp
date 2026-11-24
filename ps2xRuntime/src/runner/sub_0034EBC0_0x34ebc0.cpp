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

// Function: sub_0034EBC0
// Address: 0x34ebc0 - 0x34ecb4
void sub_0034EBC0_0x34ebc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034EBC0_0x34ebc0");
#endif

    switch (ctx->pc) {
        case 0x34ebe8u: goto label_34ebe8;
        default: break;
    }

    ctx->pc = 0x34ebc0u;

    // 0x34ebc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34ebc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34ebc4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x34ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34ebc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34ebc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34ebcc: 0x9083002d  lbu         $v1, 0x2D($a0)
    ctx->pc = 0x34ebccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 45)));
    // 0x34ebd0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34EBD0u;
    {
        const bool branch_taken_0x34ebd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EBD0u;
        // 0x34ebd4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ebd0) {
            ctx->pc = 0x34EBE0u;
            goto label_34ebe0;
        }
    }
    ctx->pc = 0x34EBD8u;
    // 0x34ebd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34EBD8u;
    {
        const bool branch_taken_0x34ebd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EBD8u;
        // 0x34ebdc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ebd8) {
            ctx->pc = 0x34EBECu;
            goto label_34ebec;
        }
    }
    ctx->pc = 0x34EBE0u;
label_34ebe0:
    // 0x34ebe0: 0xc0d343c  jal         func_34D0F0
    ctx->pc = 0x34EBE0u;
    SET_GPR_U32(ctx, 31, 0x34EBE8u);
    ctx->pc = 0x34EBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34EBE0u;
    // 0x34ebe4: 0x90a4002e  lbu         $a0, 0x2E($a1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 46)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D0F0u, 0x34EBE0u, 0x34EBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34EBE8u;
label_34ebe8:
    // 0x34ebe8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34ebe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_34ebec:
    // 0x34ebec: 0x90a3002e  lbu         $v1, 0x2E($a1)
    ctx->pc = 0x34ebecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 46)));
    // 0x34ebf0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x34ebf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34ebf4: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x34ebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x34ebf8: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x34EBF8u;
    {
        const bool branch_taken_0x34ebf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34ebf8) {
            ctx->pc = 0x34EC88u;
            goto label_34ec88;
        }
    }
    ctx->pc = 0x34EC00u;
    // 0x34ec00: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x34ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x34ec04: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x34EC04u;
    {
        const bool branch_taken_0x34ec04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EC04u;
        // 0x34ec08: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ec04) {
            ctx->pc = 0x34EC70u;
            goto label_34ec70;
        }
    }
    ctx->pc = 0x34EC0Cu;
    // 0x34ec0c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x34EC0Cu;
    {
        const bool branch_taken_0x34ec0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34ec0c) {
            ctx->pc = 0x34EC58u;
            goto label_34ec58;
        }
    }
    ctx->pc = 0x34EC14u;
    // 0x34ec14: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x34ec14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x34ec18: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34EC18u;
    {
        const bool branch_taken_0x34ec18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EC18u;
        // 0x34ec1c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ec18) {
            ctx->pc = 0x34EC40u;
            goto label_34ec40;
        }
    }
    ctx->pc = 0x34EC20u;
    // 0x34ec20: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34EC20u;
    {
        const bool branch_taken_0x34ec20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34ec20) {
            ctx->pc = 0x34EC30u;
            goto label_34ec30;
        }
    }
    ctx->pc = 0x34EC28u;
    // 0x34ec28: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x34EC28u;
    {
        const bool branch_taken_0x34ec28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ec28) {
            ctx->pc = 0x34ECA0u;
            goto label_34eca0;
        }
    }
    ctx->pc = 0x34EC30u;
label_34ec30:
    // 0x34ec30: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34ec30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34ec34: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x34EC34u;
    {
        const bool branch_taken_0x34ec34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EC34u;
        // 0x34ec38: 0x34420063  ori         $v0, $v0, 0x63 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)99);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ec34) {
            ctx->pc = 0x34ECA8u;
            goto label_34eca8;
        }
    }
    ctx->pc = 0x34EC3Cu;
    // 0x34ec3c: 0x0  nop
    ctx->pc = 0x34ec3cu;
    // NOP
label_34ec40:
    // 0x34ec40: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x34ec40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34ec44: 0x24430064  addiu       $v1, $v0, 0x64
    ctx->pc = 0x34ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x34ec48: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34ec4c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x34EC4Cu;
    {
        const bool branch_taken_0x34ec4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EC4Cu;
        // 0x34ec50: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ec4c) {
            ctx->pc = 0x34ECA8u;
            goto label_34eca8;
        }
    }
    ctx->pc = 0x34EC54u;
    // 0x34ec54: 0x0  nop
    ctx->pc = 0x34ec54u;
    // NOP
label_34ec58:
    // 0x34ec58: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x34ec58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34ec5c: 0x24430069  addiu       $v1, $v0, 0x69
    ctx->pc = 0x34ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 105));
    // 0x34ec60: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34ec64: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x34EC64u;
    {
        const bool branch_taken_0x34ec64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EC64u;
        // 0x34ec68: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ec64) {
            ctx->pc = 0x34ECA8u;
            goto label_34eca8;
        }
    }
    ctx->pc = 0x34EC6Cu;
    // 0x34ec6c: 0x0  nop
    ctx->pc = 0x34ec6cu;
    // NOP
label_34ec70:
    // 0x34ec70: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x34ec70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34ec74: 0x2443006e  addiu       $v1, $v0, 0x6E
    ctx->pc = 0x34ec74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
    // 0x34ec78: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34ec7c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x34EC7Cu;
    {
        const bool branch_taken_0x34ec7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EC7Cu;
        // 0x34ec80: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ec7c) {
            ctx->pc = 0x34ECA8u;
            goto label_34eca8;
        }
    }
    ctx->pc = 0x34EC84u;
    // 0x34ec84: 0x0  nop
    ctx->pc = 0x34ec84u;
    // NOP
label_34ec88:
    // 0x34ec88: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x34ec88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x34ec8c: 0x24430073  addiu       $v1, $v0, 0x73
    ctx->pc = 0x34ec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 115));
    // 0x34ec90: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x34ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x34ec94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34EC94u;
    {
        const bool branch_taken_0x34ec94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34EC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34EC94u;
        // 0x34ec98: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ec94) {
            ctx->pc = 0x34ECA8u;
            goto label_34eca8;
        }
    }
    ctx->pc = 0x34EC9Cu;
    // 0x34ec9c: 0x0  nop
    ctx->pc = 0x34ec9cu;
    // NOP
label_34eca0:
    // 0x34eca0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34eca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34eca4: 0x0  nop
    ctx->pc = 0x34eca4u;
    // NOP
label_34eca8:
    // 0x34eca8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34eca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ecac: 0x3e00008  jr          $ra
    ctx->pc = 0x34ECACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ECACu;
        // 0x34ecb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34ECACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34ECB4u;
}
