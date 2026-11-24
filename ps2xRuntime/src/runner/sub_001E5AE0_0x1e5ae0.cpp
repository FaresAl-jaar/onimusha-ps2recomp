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

// Function: sub_001E5AE0
// Address: 0x1e5ae0 - 0x1e5b34
void sub_001E5AE0_0x1e5ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5AE0_0x1e5ae0");
#endif

    switch (ctx->pc) {
        case 0x1e5ae0u: goto label_1e5ae0;
        case 0x1e5ae4u: goto label_1e5ae4;
        case 0x1e5ae8u: goto label_1e5ae8;
        case 0x1e5aecu: goto label_1e5aec;
        case 0x1e5af0u: goto label_1e5af0;
        case 0x1e5af4u: goto label_1e5af4;
        case 0x1e5af8u: goto label_1e5af8;
        case 0x1e5afcu: goto label_1e5afc;
        case 0x1e5b00u: goto label_1e5b00;
        case 0x1e5b04u: goto label_1e5b04;
        case 0x1e5b08u: goto label_1e5b08;
        case 0x1e5b0cu: goto label_1e5b0c;
        case 0x1e5b10u: goto label_1e5b10;
        case 0x1e5b14u: goto label_1e5b14;
        case 0x1e5b18u: goto label_1e5b18;
        case 0x1e5b1cu: goto label_1e5b1c;
        case 0x1e5b20u: goto label_1e5b20;
        case 0x1e5b24u: goto label_1e5b24;
        case 0x1e5b28u: goto label_1e5b28;
        case 0x1e5b2cu: goto label_1e5b2c;
        case 0x1e5b30u: goto label_1e5b30;
        default: break;
    }

    ctx->pc = 0x1e5ae0u;

label_1e5ae0:
    // 0x1e5ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e5ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e5ae4:
    // 0x1e5ae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e5ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e5ae8:
    // 0x1e5ae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e5ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e5aec:
    // 0x1e5aec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e5aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e5af0:
    // 0x1e5af0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e5af4:
    if (ctx->pc == 0x1E5AF4u) {
        ctx->pc = 0x1E5AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AF0u;
        // 0x1e5af4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5AF8u;
        goto label_1e5af8;
    }
    ctx->pc = 0x1E5AF0u;
    {
        const bool branch_taken_0x1e5af0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5AF0u;
        // 0x1e5af4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5af0) {
            ctx->pc = 0x1E5B20u;
            goto label_1e5b20;
        }
    }
    ctx->pc = 0x1E5AF8u;
label_1e5af8:
    // 0x1e5af8: 0x24426a50  addiu       $v0, $v0, 0x6A50
    ctx->pc = 0x1e5af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27216));
label_1e5afc:
    // 0x1e5afc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e5afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e5b00:
    // 0x1e5b00: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e5b00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e5b04:
    // 0x1e5b04: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e5b04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e5b08:
    // 0x1e5b08: 0x320f809  jalr        $t9
label_1e5b0c:
    if (ctx->pc == 0x1E5B0Cu) {
        ctx->pc = 0x1E5B10u;
        goto label_1e5b10;
    }
    ctx->pc = 0x1E5B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E5B10u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5B08u, 0x1E5B10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E5B10u;
label_1e5b10:
    // 0x1e5b10: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e5b14:
    if (ctx->pc == 0x1E5B14u) {
        ctx->pc = 0x1E5B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B10u;
        // 0x1e5b14: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5B18u;
        goto label_1e5b18;
    }
    ctx->pc = 0x1E5B10u;
    {
        const bool branch_taken_0x1e5b10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B10u;
        // 0x1e5b14: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5b10) {
            ctx->pc = 0x1E5B20u;
            goto label_1e5b20;
        }
    }
    ctx->pc = 0x1E5B18u;
label_1e5b18:
    // 0x1e5b18: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x1e5b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_1e5b1c:
    // 0x1e5b1c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e5b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e5b20:
    // 0x1e5b20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e5b20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e5b24:
    // 0x1e5b24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e5b28:
    // 0x1e5b28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e5b2c:
    // 0x1e5b2c: 0x3e00008  jr          $ra
label_1e5b30:
    if (ctx->pc == 0x1E5B30u) {
        ctx->pc = 0x1E5B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B2Cu;
        // 0x1e5b30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5B34u;
        goto label_fallthrough_0x1e5b2c;
    }
    ctx->pc = 0x1E5B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5B2Cu;
        // 0x1e5b30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e5b2c:
    ctx->pc = 0x1E5B34u;
}
