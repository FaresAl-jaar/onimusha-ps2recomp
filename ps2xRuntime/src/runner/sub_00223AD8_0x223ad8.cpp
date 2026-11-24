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

// Function: sub_00223AD8
// Address: 0x223ad8 - 0x223b44
void sub_00223AD8_0x223ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223AD8_0x223ad8");
#endif

    switch (ctx->pc) {
        case 0x223b00u: goto label_223b00;
        case 0x223b14u: goto label_223b14;
        default: break;
    }

    ctx->pc = 0x223ad8u;

    // 0x223ad8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x223ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x223adc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x223adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x223ae0: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x223ae0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x223ae4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x223ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x223ae8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x223ae8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223aec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x223aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223af0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x223af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x223af4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x223af4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x223af8: 0xc088e5e  jal         func_223978
    ctx->pc = 0x223AF8u;
    SET_GPR_U32(ctx, 31, 0x223B00u);
    ctx->pc = 0x223AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223AF8u;
    // 0x223afc: 0x8c900004  lw          $s0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223978u, 0x223AF8u, 0x223B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223B00u;
label_223b00:
    // 0x223b00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x223b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b04: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x223B04u;
    {
        const bool branch_taken_0x223b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B04u;
        // 0x223b08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b04) {
            ctx->pc = 0x223B2Cu;
            goto label_223b2c;
        }
    }
    ctx->pc = 0x223B0Cu;
    // 0x223b0c: 0xc088f06  jal         func_223C18
    ctx->pc = 0x223B0Cu;
    SET_GPR_U32(ctx, 31, 0x223B14u);
    ctx->pc = 0x223C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C18u, 0x223B0Cu, 0x223B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223B14u;
label_223b14:
    // 0x223b14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x223B14u;
    {
        const bool branch_taken_0x223b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B14u;
        // 0x223b18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b14) {
            ctx->pc = 0x223B28u;
            goto label_223b28;
        }
    }
    ctx->pc = 0x223B1Cu;
    // 0x223b1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x223B1Cu;
    {
        const bool branch_taken_0x223b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B1Cu;
        // 0x223b20: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b1c) {
            ctx->pc = 0x223B2Cu;
            goto label_223b2c;
        }
    }
    ctx->pc = 0x223B24u;
    // 0x223b24: 0x0  nop
    ctx->pc = 0x223b24u;
    // NOP
label_223b28:
    // 0x223b28: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x223b28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_223b2c:
    // 0x223b2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x223b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223b30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x223b30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x223b34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x223b34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223b38: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x223b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x223b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x223B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B3Cu;
        // 0x223b40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223B44u;
}
